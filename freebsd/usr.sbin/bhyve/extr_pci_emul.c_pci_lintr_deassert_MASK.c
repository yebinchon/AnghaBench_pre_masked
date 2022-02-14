
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ pin; scalar_t__ state; int lock; } ;
struct pci_devinst {TYPE_1__ pi_lintr; } ;


 scalar_t__ VAR_0 ;
 void* VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct pci_devinst*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

void
FUNC_4(struct pci_devinst *VAR_3)
{

 FUNC_0(VAR_3->pi_lintr.pin > 0);

 FUNC_2(&VAR_3->pi_lintr.lock);
 if (VAR_3->pi_lintr.state == VAR_0) {
  VAR_3->pi_lintr.state = VAR_1;
  FUNC_1(VAR_3);
 } else if (VAR_3->pi_lintr.state == VAR_2)
  VAR_3->pi_lintr.state = VAR_1;
 FUNC_3(&VAR_3->pi_lintr.lock);
}
