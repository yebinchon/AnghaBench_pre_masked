
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ state; int lock; } ;
struct pci_devinst {TYPE_1__ pi_lintr; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct pci_devinst*) ;
 int FUNC_1 (struct pci_devinst*) ;
 scalar_t__ FUNC_2 (struct pci_devinst*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void
FUNC_5(struct pci_devinst *VAR_2)
{

 FUNC_3(&VAR_2->pi_lintr.lock);
 if (VAR_2->pi_lintr.state == VAR_0 && !FUNC_2(VAR_2)) {
  FUNC_1(VAR_2);
  VAR_2->pi_lintr.state = VAR_1;
 } else if (VAR_2->pi_lintr.state == VAR_1 && FUNC_2(VAR_2)) {
  VAR_2->pi_lintr.state = VAR_0;
  FUNC_0(VAR_2);
 }
 FUNC_4(&VAR_2->pi_lintr.lock);
}
