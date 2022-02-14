
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int enabled; } ;
struct TYPE_3__ {scalar_t__ enabled; } ;
struct pci_devinst {TYPE_2__ pi_msi; TYPE_1__ pi_msix; } ;



int
FUNC_0(struct pci_devinst *VAR_0)
{

 return (VAR_0->pi_msix.enabled && !VAR_0->pi_msi.enabled);
}
