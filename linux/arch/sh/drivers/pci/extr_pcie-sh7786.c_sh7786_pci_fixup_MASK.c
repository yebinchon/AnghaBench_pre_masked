
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pci_dev {scalar_t__ devfn; TYPE_1__* resource; int bus; } ;
struct TYPE_2__ {scalar_t__ flags; scalar_t__ end; scalar_t__ start; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(struct pci_dev *VAR_1)
{



 if (FUNC_0(VAR_1->bus) && VAR_1->devfn == 0) {
  int VAR_2;

  for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++) {
   VAR_1->resource[VAR_2].start = 0;
   VAR_1->resource[VAR_2].end = 0;
   VAR_1->resource[VAR_2].flags = 0;
  }
 }
}
