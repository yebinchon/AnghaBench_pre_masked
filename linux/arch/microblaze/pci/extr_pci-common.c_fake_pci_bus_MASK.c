
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_controller {int * ops; } ;
struct pci_bus {int number; int * ops; struct pci_controller* sysdata; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int) ;

__attribute__((used)) static struct pci_bus *
FUNC_1(struct pci_controller *VAR_1, int VAR_2)
{
 static struct pci_bus VAR_3;

 if (!VAR_1)
  FUNC_0("Can't find hose for PCI bus %d!\n", VAR_2);

 VAR_3.number = VAR_2;
 VAR_3.sysdata = VAR_1;
 VAR_3.ops = VAR_1 ? VAR_1->ops : &VAR_0;
 return &VAR_3;
}
