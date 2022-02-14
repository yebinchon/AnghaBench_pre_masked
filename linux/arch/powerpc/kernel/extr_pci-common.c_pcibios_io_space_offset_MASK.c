
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_controller {scalar_t__ io_base_virt; } ;
typedef scalar_t__ resource_size_t ;


 scalar_t__ VAR_0 ;

resource_size_t FUNC_0(struct pci_controller *VAR_1)
{
 return (unsigned long) VAR_1->io_base_virt - VAR_0;
}
