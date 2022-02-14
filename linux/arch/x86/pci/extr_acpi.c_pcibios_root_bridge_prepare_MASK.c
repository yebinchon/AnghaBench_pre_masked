
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct pci_sysdata {int companion; } ;
struct TYPE_4__ {int parent; } ;
struct pci_host_bridge {TYPE_2__ dev; TYPE_1__* bus; } ;
struct TYPE_3__ {struct pci_sysdata* sysdata; } ;


 int FUNC_0 (TYPE_2__*,int ) ;

int FUNC_1(struct pci_host_bridge *VAR_0)
{






 if (!VAR_0->dev.parent) {
  struct pci_sysdata *VAR_1 = VAR_0->bus->sysdata;
  FUNC_0(&VAR_0->dev, VAR_1->companion);
 }
 return 0;
}
