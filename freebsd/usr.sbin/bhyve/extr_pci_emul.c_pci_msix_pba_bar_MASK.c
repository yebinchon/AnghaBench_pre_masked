
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int pba_bar; int * table; } ;
struct pci_devinst {TYPE_1__ pi_msix; } ;



int
FUNC_0(struct pci_devinst *VAR_0)
{

 if (VAR_0->pi_msix.table != ((void*)0))
  return (VAR_0->pi_msix.pba_bar);
 else
  return (-1);
}
