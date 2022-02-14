
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct pci_dev {int dummy; } ;
struct intel_iommu {int dummy; } ;
struct dmar_domain {int dummy; } ;
struct device {int dummy; } ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct device*) ;
 struct intel_iommu* FUNC_2 (struct device*,int*,int*) ;
 struct dmar_domain* FUNC_3 (struct intel_iommu*,int,int,struct device*,struct dmar_domain*) ;
 int VAR_0 ;
 int FUNC_4 (struct pci_dev*,int ,int*) ;
 struct pci_dev* FUNC_5 (struct device*) ;

__attribute__((used)) static struct dmar_domain *FUNC_6(struct device *VAR_1,
           struct dmar_domain *VAR_2)
{
 struct intel_iommu *VAR_3;
 struct dmar_domain *VAR_4;
 u16 VAR_5, VAR_6;
 u8 VAR_7, VAR_8;

 VAR_3 = FUNC_2(VAR_1, &VAR_7, &VAR_8);
 if (!VAR_3)
  return ((void*)0);

 VAR_5 = ((u16)VAR_7 << 8) | VAR_8;

 if (FUNC_1(VAR_1)) {
  struct pci_dev *VAR_9 = FUNC_5(VAR_1);

  FUNC_4(VAR_9, VAR_0, &VAR_6);


  if (VAR_5 != VAR_6) {
   VAR_4 = FUNC_3(VAR_3, FUNC_0(VAR_6),
     VAR_6 & 0xff, ((void*)0), VAR_2);

   if (!VAR_4 || VAR_4 != VAR_2)
    return VAR_4;
  }
 }

 VAR_4 = FUNC_3(VAR_3, VAR_7, VAR_8, VAR_1, VAR_2);
 if (!VAR_4 || VAR_4 != VAR_2)
  return VAR_4;

 return VAR_2;
}
