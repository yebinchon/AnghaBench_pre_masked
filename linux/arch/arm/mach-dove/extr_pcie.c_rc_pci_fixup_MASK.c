
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct pci_dev {scalar_t__ devfn; TYPE_2__* resource; TYPE_1__* bus; } ;
struct TYPE_4__ {scalar_t__ flags; scalar_t__ end; scalar_t__ start; } ;
struct TYPE_3__ {int * parent; } ;


 int VAR_0 ;

__attribute__((used)) static void FUNC_0(struct pci_dev *VAR_1)
{



 if (VAR_1->bus->parent == ((void*)0) && VAR_1->devfn == 0) {
  int VAR_2;

  for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++) {
   VAR_1->resource[VAR_2].start = 0;
   VAR_1->resource[VAR_2].end = 0;
   VAR_1->resource[VAR_2].flags = 0;
  }
 }
}
