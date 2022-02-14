
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iommu_domain {int dummy; } ;
struct protection_domain {int flags; struct iommu_domain domain; } ;
struct pci_dev {int dev; } ;


 scalar_t__ FUNC_0 (struct protection_domain*) ;
 int VAR_0 ;
 struct protection_domain* FUNC_1 (int *) ;

struct iommu_domain *FUNC_2(struct pci_dev *VAR_1)
{
 struct protection_domain *VAR_2;

 VAR_2 = FUNC_1(&VAR_1->dev);
 if (FUNC_0(VAR_2))
  return ((void*)0);


 if (!(VAR_2->flags & VAR_0))
  return ((void*)0);

 return &VAR_2->domain;
}
