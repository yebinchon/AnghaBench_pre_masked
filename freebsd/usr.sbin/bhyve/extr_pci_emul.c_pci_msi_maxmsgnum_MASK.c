
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int maxmsgnum; scalar_t__ enabled; } ;
struct pci_devinst {TYPE_1__ pi_msi; } ;



int
FUNC_0(struct pci_devinst *VAR_0)
{
 if (VAR_0->pi_msi.enabled)
  return (VAR_0->pi_msi.maxmsgnum);
 else
  return (0);
}
