
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ pin; scalar_t__ state; int lock; } ;
struct pci_devinst {TYPE_1__ pi_lintr; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct pci_devinst*) ;
 scalar_t__ FUNC_2 (struct pci_devinst*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

void
FUNC_5(struct pci_devinst *VAR_3)
{

 FUNC_0(VAR_3->pi_lintr.pin > 0);

 FUNC_3(&VAR_3->pi_lintr.lock);
 if (VAR_3->pi_lintr.state == VAR_1) {
  if (FUNC_2(VAR_3)) {
   VAR_3->pi_lintr.state = VAR_0;
   FUNC_1(VAR_3);
  } else
   VAR_3->pi_lintr.state = VAR_2;
 }
 FUNC_4(&VAR_3->pi_lintr.lock);
}
