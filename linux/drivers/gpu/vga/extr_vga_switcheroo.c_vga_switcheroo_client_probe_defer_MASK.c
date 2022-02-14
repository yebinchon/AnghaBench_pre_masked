
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pci_dev {int class; } ;
struct TYPE_2__ {int handler_flags; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 () ;
 struct pci_dev* FUNC_1 () ;
 TYPE_1__ VAR_1 ;

bool FUNC_2(struct pci_dev *VAR_2)
{
 if ((VAR_2->class >> 16) == VAR_0) {




  if (FUNC_0() && VAR_2 != FUNC_1() &&
      !VAR_1.handler_flags)
   return 1;
 }

 return 0;
}
