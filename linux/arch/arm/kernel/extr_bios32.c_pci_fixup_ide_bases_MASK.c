
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource {int start; int end; } ;
struct pci_dev {int class; struct resource* resource; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_0(struct pci_dev *VAR_2)
{
 struct resource *VAR_3;
 int VAR_4;

 if ((VAR_2->class >> 8) != VAR_0)
  return;

 for (VAR_4 = 0; VAR_4 < VAR_1; VAR_4++) {
  VAR_3 = VAR_2->resource + VAR_4;
  if ((VAR_3->start & ~0x80) == 0x374) {
   VAR_3->start |= 2;
   VAR_3->end = VAR_3->start;
  }
 }
}
