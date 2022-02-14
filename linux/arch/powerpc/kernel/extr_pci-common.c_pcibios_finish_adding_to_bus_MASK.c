
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_bus {scalar_t__ self; int number; } ;


 int VAR_0 ;
 int FUNC_0 (struct pci_bus*) ;
 int FUNC_1 (struct pci_bus*) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (struct pci_bus*) ;
 int FUNC_4 (struct pci_bus*) ;
 int FUNC_5 (struct pci_bus*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct pci_bus*) ;
 int FUNC_8 (struct pci_bus*) ;
 int FUNC_9 (char*,int ,int ) ;

void FUNC_10(struct pci_bus *VAR_1)
{
 FUNC_9("PCI: Finishing adding to hotplug bus %04x:%02x\n",
   FUNC_5(VAR_1), VAR_1->number);


 FUNC_7(VAR_1);
 FUNC_8(VAR_1);
 if (!FUNC_6(VAR_0)) {
  if (VAR_1->self)
   FUNC_2(VAR_1->self);
  else
   FUNC_3(VAR_1);
 }


 FUNC_0(VAR_1);


 FUNC_4(VAR_1);


 FUNC_1(VAR_1);
}
