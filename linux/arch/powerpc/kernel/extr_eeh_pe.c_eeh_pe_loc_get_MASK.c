
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_bus {struct pci_bus* parent; } ;
struct eeh_pe {int dummy; } ;
struct device_node {int dummy; } ;


 struct pci_bus* FUNC_0 (struct eeh_pe*) ;
 char* FUNC_1 (struct device_node*,char*,int *) ;
 struct device_node* FUNC_2 (struct pci_bus*) ;
 scalar_t__ FUNC_3 (struct pci_bus*) ;

const char *FUNC_4(struct eeh_pe *VAR_0)
{
 struct pci_bus *VAR_1 = FUNC_0(VAR_0);
 struct device_node *VAR_2;
 const char *VAR_3 = ((void*)0);

 while (VAR_1) {
  VAR_2 = FUNC_2(VAR_1);
  if (!VAR_2) {
   VAR_1 = VAR_1->parent;
   continue;
  }

  if (FUNC_3(VAR_1))
   VAR_3 = FUNC_1(VAR_2, "ibm,io-base-loc-code", ((void*)0));
  else
   VAR_3 = FUNC_1(VAR_2, "ibm,slot-location-code",
           ((void*)0));

  if (VAR_3)
   return VAR_3;

  VAR_1 = VAR_1->parent;
 }

 return "N/A";
}
