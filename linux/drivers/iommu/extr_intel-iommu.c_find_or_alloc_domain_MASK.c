
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct pci_dev {int bus; } ;
struct intel_iommu {int dummy; } ;
struct dmar_domain {int dummy; } ;
struct device_domain_info {struct dmar_domain* domain; struct intel_iommu* iommu; } ;
struct device {int dummy; } ;


 int FUNC_0 (int) ;
 struct dmar_domain* FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (struct device*) ;
 int VAR_0 ;
 struct intel_iommu* FUNC_3 (struct device*,int *,int *) ;
 struct device_domain_info* FUNC_4 (int ,int ,int) ;
 int FUNC_5 (struct dmar_domain*) ;
 scalar_t__ FUNC_6 (struct dmar_domain*,struct intel_iommu*,int) ;
 int VAR_1 ;
 int FUNC_7 (int ) ;
 int FUNC_8 (struct pci_dev*,int ,int*) ;
 int FUNC_9 (int *,unsigned long) ;
 int FUNC_10 (int *,unsigned long) ;
 struct pci_dev* FUNC_11 (struct device*) ;

__attribute__((used)) static struct dmar_domain *FUNC_12(struct device *VAR_2, int VAR_3)
{
 struct device_domain_info *VAR_4;
 struct dmar_domain *VAR_5 = ((void*)0);
 struct intel_iommu *VAR_6;
 u16 VAR_7;
 unsigned long VAR_8;
 u8 VAR_9, VAR_10;

 VAR_6 = FUNC_3(VAR_2, &VAR_9, &VAR_10);
 if (!VAR_6)
  return ((void*)0);

 if (FUNC_2(VAR_2)) {
  struct pci_dev *VAR_11 = FUNC_11(VAR_2);

  FUNC_8(VAR_11, VAR_1, &VAR_7);

  FUNC_9(&VAR_0, VAR_8);
  VAR_4 = FUNC_4(FUNC_7(VAR_11->bus),
            FUNC_0(VAR_7),
            VAR_7 & 0xff);
  if (VAR_4) {
   VAR_6 = VAR_4->iommu;
   VAR_5 = VAR_4->domain;
  }
  FUNC_10(&VAR_0, VAR_8);


  if (VAR_4)
   goto out;
 }


 VAR_5 = FUNC_1(0);
 if (!VAR_5)
  return ((void*)0);
 if (FUNC_6(VAR_5, VAR_6, VAR_3)) {
  FUNC_5(VAR_5);
  return ((void*)0);
 }

out:
 return VAR_5;
}
