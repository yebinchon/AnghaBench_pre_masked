
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pci_dev {int dev; } ;
struct iommu_dev_data {int errata; } ;


 int FUNC_0 () ;
 struct iommu_dev_data* FUNC_1 (int *) ;

void FUNC_2(struct pci_dev *VAR_0, u32 VAR_1)
{
 struct iommu_dev_data *VAR_2;

 if (!FUNC_0())
  return;

 VAR_2 = FUNC_1(&VAR_0->dev);
 VAR_2->errata |= (1 << VAR_1);
}
