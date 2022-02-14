
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pci_dev {int dummy; } ;
struct TYPE_2__ {int (* pcibios_bus_add_device ) (struct pci_dev*) ;} ;


 TYPE_1__ VAR_0 ;
 int FUNC_0 (struct pci_dev*) ;

void FUNC_1(struct pci_dev *VAR_1)
{
 if (VAR_0.pcibios_bus_add_device)
  VAR_0.pcibios_bus_add_device(VAR_1);
}
