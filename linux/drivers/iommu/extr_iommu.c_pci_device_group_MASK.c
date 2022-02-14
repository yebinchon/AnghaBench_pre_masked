
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct pci_dev {int dev; struct pci_bus* bus; } ;
struct pci_bus {struct pci_dev* self; struct pci_bus* parent; } ;
struct iommu_group {int dummy; } ;
struct group_for_pci_data {struct pci_dev* pdev; struct iommu_group* group; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 struct iommu_group* FUNC_0 (int ) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (struct device*) ;
 struct iommu_group* FUNC_3 (struct pci_dev*,unsigned long*) ;
 int VAR_2 ;
 struct iommu_group* FUNC_4 (struct pci_dev*,unsigned long*) ;
 struct iommu_group* FUNC_5 () ;
 struct iommu_group* FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (struct pci_dev*,int *,int ) ;
 scalar_t__ FUNC_8 (struct pci_dev*,int ,struct group_for_pci_data*) ;
 int FUNC_9 (struct pci_bus*) ;
 struct pci_dev* FUNC_10 (struct device*) ;

struct iommu_group *FUNC_11(struct device *VAR_3)
{
 struct pci_dev *VAR_4 = FUNC_10(VAR_3);
 struct group_for_pci_data VAR_5;
 struct pci_bus *VAR_6;
 struct iommu_group *VAR_7 = ((void*)0);
 u64 VAR_8[4] = { 0 };

 if (FUNC_1(!FUNC_2(VAR_3)))
  return FUNC_0(-VAR_0);







 if (FUNC_8(VAR_4, VAR_2, &VAR_5))
  return VAR_5.group;

 VAR_4 = VAR_5.pdev;







 for (VAR_6 = VAR_4->bus; !FUNC_9(VAR_6); VAR_6 = VAR_6->parent) {
  if (!VAR_6->self)
   continue;

  if (FUNC_7(VAR_6->self, ((void*)0), VAR_1))
   break;

  VAR_4 = VAR_6->self;

  VAR_7 = FUNC_6(&VAR_4->dev);
  if (VAR_7)
   return VAR_7;
 }





 VAR_7 = FUNC_3(VAR_4, (unsigned long *)VAR_8);
 if (VAR_7)
  return VAR_7;






 VAR_7 = FUNC_4(VAR_4, (unsigned long *)VAR_8);
 if (VAR_7)
  return VAR_7;


 return FUNC_5();
}
