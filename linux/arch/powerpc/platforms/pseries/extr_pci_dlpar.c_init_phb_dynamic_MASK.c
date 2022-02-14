
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_controller {int bus; int controller_ops; } ;
struct device_node {scalar_t__ child; } ;


 int FUNC_0 (struct device_node*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct pci_controller*) ;
 int FUNC_3 (struct pci_controller*) ;
 int FUNC_4 (struct pci_controller*,struct device_node*,int ) ;
 struct pci_controller* FUNC_5 (struct device_node*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct pci_controller*) ;
 int FUNC_8 (char*,struct device_node*) ;
 int VAR_0 ;
 int FUNC_9 (struct pci_controller*) ;

struct pci_controller *FUNC_10(struct device_node *VAR_1)
{
 struct pci_controller *VAR_2;

 FUNC_8("PCI: Initializing new hotplug PHB %pOF\n", VAR_1);

 VAR_2 = FUNC_5(VAR_1);
 if (!VAR_2)
  return ((void*)0);
 FUNC_9(VAR_2);
 FUNC_4(VAR_2, VAR_1, 0);
 VAR_2->controller_ops = VAR_0;

 FUNC_3(VAR_2);


 FUNC_2(VAR_2);

 if (VAR_1->child)
  FUNC_1(FUNC_0(VAR_1));

 FUNC_7(VAR_2);
 FUNC_6(VAR_2->bus);

 return VAR_2;
}
