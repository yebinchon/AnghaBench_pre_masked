
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource {scalar_t__ end; scalar_t__ start; } ;
struct pci_controller {int * io_base_alloc; int * dn; } ;
struct pci_bus {scalar_t__ self; struct resource** resource; } ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int *,scalar_t__,scalar_t__) ;
 int VAR_1 ;
 struct pci_controller* FUNC_2 (struct pci_bus*) ;
 int * FUNC_3 (scalar_t__) ;
 int FUNC_4 (char*,int *) ;
 int FUNC_5 (int *) ;

int FUNC_6(struct pci_bus *VAR_2)
{
 struct pci_controller *VAR_3;

 FUNC_0(VAR_2 == ((void*)0));
 if (VAR_2->self) {




  FUNC_4("IO unmapping for PCI-PCI bridge %s\n",
    FUNC_3(VAR_2->self));





  return 0;
 }


 VAR_3 = FUNC_2(VAR_2);


 if (VAR_3->io_base_alloc == ((void*)0))
  return 0;

 FUNC_4("IO unmapping for PHB %pOF\n", VAR_3->dn);
 FUNC_4("  alloc=0x%p\n", VAR_3->io_base_alloc);


 FUNC_5(VAR_3->io_base_alloc);

 return 0;
}
