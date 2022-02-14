
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource {scalar_t__ flags; scalar_t__ end; scalar_t__ start; scalar_t__ parent; } ;
struct pci_dev {struct resource* resource; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct pci_dev*,int) ;

__attribute__((used)) static void FUNC_1(struct pci_dev *VAR_2)
{
 int VAR_3;
 struct resource *VAR_4;

 for (VAR_3 = VAR_0; VAR_3 < VAR_1; VAR_3++) {
  VAR_4 = &VAR_2->resource[VAR_3];
  if (!VAR_4->flags)
   continue;
  if (VAR_4->parent)
   continue;
  if (!VAR_4->start || FUNC_0(VAR_2, VAR_3) < 0) {






   VAR_4->start = VAR_4->end = 0;
   VAR_4->flags = 0;
  }
 }
}
