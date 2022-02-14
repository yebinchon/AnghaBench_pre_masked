
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pci_dev {int class; TYPE_1__* resource; int devfn; } ;
struct TYPE_2__ {scalar_t__ flags; scalar_t__ end; scalar_t__ start; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(struct pci_dev *VAR_3)
{
 int VAR_4;

 if (FUNC_0(VAR_3->devfn) == VAR_0) {
  VAR_3->class &= 0xff;
  VAR_3->class |= VAR_1 << 8;
  for (VAR_4 = 0; VAR_4 < VAR_2; VAR_4++) {
   VAR_3->resource[VAR_4].start = 0;
   VAR_3->resource[VAR_4].end = 0;
   VAR_3->resource[VAR_4].flags = 0;
  }
 }
}
