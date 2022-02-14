
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int (* dma_bus_setup ) (struct pci_bus*) ;} ;
struct pci_controller {TYPE_1__ controller_ops; } ;
struct pci_bus {int * self; } ;
struct TYPE_4__ {int (* pcibios_fixup_bus ) (struct pci_bus*) ;} ;


 struct pci_controller* FUNC_0 (struct pci_bus*) ;
 int FUNC_1 (struct pci_bus*) ;
 TYPE_2__ VAR_0 ;
 int FUNC_2 (struct pci_bus*) ;
 int FUNC_3 (struct pci_bus*) ;

void FUNC_4(struct pci_bus *VAR_1)
{
 struct pci_controller *VAR_2;


 if (VAR_1->self != ((void*)0))
  FUNC_1(VAR_1);




 if (VAR_0.pcibios_fixup_bus)
  VAR_0.pcibios_fixup_bus(VAR_1);


 VAR_2 = FUNC_0(VAR_1);
 if (VAR_2->controller_ops.dma_bus_setup)
  VAR_2->controller_ops.dma_bus_setup(VAR_1);
}
