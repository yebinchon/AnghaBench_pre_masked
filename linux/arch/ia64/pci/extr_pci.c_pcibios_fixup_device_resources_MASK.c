
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource {int start; scalar_t__ parent; int flags; } ;
struct pci_dev {struct resource* resource; int bus; } ;


 int VAR_0 ;
 int FUNC_0 (struct pci_dev*,int) ;

void FUNC_1(struct pci_dev *VAR_1)
{
 int VAR_2;

 if (!VAR_1->bus)
  return;

 for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++) {
  struct resource *VAR_3 = &VAR_1->resource[VAR_2];

  if (!VAR_3->flags || VAR_3->parent || !VAR_3->start)
   continue;

  FUNC_0(VAR_1, VAR_2);
 }
}
