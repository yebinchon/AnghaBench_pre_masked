
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct pci_dev {int dummy; } ;
struct intel_iommu {int dummy; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct intel_iommu*,int ,int) ;

__attribute__((used)) static int FUNC_2(struct pci_dev *VAR_0,
        u16 VAR_1, void *VAR_2)
{
 struct intel_iommu *VAR_3 = VAR_2;

 return !FUNC_1(VAR_3, FUNC_0(VAR_1), VAR_1 & 0xff);
}
