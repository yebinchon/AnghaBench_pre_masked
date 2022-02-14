
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pci_dev {int class; TYPE_1__* resource; } ;
struct TYPE_2__ {scalar_t__ flags; scalar_t__ end; scalar_t__ start; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_0(struct pci_dev *VAR_2)
{
 int VAR_3;


 if ((VAR_2->class >> 8) == VAR_0 ||
     VAR_2->class == 0x68000 ||
     VAR_2->class == 0x80103) {
  for (VAR_3 = 0; VAR_3 < VAR_1; VAR_3++) {
   VAR_2->resource[VAR_3].start = 0;
   VAR_2->resource[VAR_3].end = 0;
   VAR_2->resource[VAR_3].flags = 0;
  }
 }
}
