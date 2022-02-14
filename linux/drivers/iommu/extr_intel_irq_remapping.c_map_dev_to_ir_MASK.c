
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dummy; } ;
struct intel_iommu {int dummy; } ;
struct dmar_drhd_unit {struct intel_iommu* iommu; } ;


 struct dmar_drhd_unit* FUNC_0 (struct pci_dev*) ;

__attribute__((used)) static struct intel_iommu *FUNC_1(struct pci_dev *VAR_0)
{
 struct dmar_drhd_unit *VAR_1;

 VAR_1 = FUNC_0(VAR_0);
 if (!VAR_1)
  return ((void*)0);

 return VAR_1->iommu;
}
