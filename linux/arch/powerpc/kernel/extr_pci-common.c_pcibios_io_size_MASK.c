
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_controller {int io_resource; int pci_io_size; } ;
typedef int resource_size_t ;


 int FUNC_0 (int *) ;

__attribute__((used)) static resource_size_t FUNC_1(const struct pci_controller *VAR_0)
{



 return FUNC_0(&VAR_0->io_resource);

}
