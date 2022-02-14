
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_bus {int self; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (char*,struct pci_bus*,int ) ;

__attribute__((used)) static void FUNC_2(struct pci_bus *VAR_1)
{
 FUNC_1("pci_dma_bus_setup, bus %p, bus->self %p\n", VAR_1, VAR_1->self);

 if (!VAR_0) {
  VAR_0 = 1;
  FUNC_0();
 }
}
