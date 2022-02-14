
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource {scalar_t__ start; int end; scalar_t__ parent; int flags; } ;
struct pci_dev {struct resource* resource; } ;


 size_t VAR_0 ;
 scalar_t__ FUNC_0 (struct pci_dev*,size_t) ;

__attribute__((used)) static void FUNC_1(struct pci_dev *VAR_1)
{
 struct resource *VAR_2;






 VAR_2 = &VAR_1->resource[VAR_0];
 if (!VAR_2->flags || !VAR_2->start)
  return;
 if (VAR_2->parent)
  return;

 if (FUNC_0(VAR_1, VAR_0) < 0) {
  VAR_2->end -= VAR_2->start;
  VAR_2->start = 0;
 }
}
