
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pci_dn {struct pci_controller* phb; } ;
struct pci_controller {scalar_t__ buid; } ;
struct eeh_dev {int dummy; } ;
struct TYPE_2__ {int (* probe ) (struct pci_dn*,int *) ;} ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 TYPE_1__* VAR_1 ;
 struct eeh_dev* FUNC_1 (struct pci_dn*) ;
 int FUNC_2 (struct pci_dn*,int *) ;

void FUNC_3(struct pci_dn *VAR_2)
{
 struct pci_controller *VAR_3 = VAR_2 ? VAR_2->phb : ((void*)0);
 struct eeh_dev *VAR_4 = FUNC_1(VAR_2);

 if (!VAR_4)
  return;

 if (!FUNC_0(VAR_0))
  return;


 if (((void*)0) == VAR_3 ||
     (FUNC_0(VAR_0) && 0 == VAR_3->buid))
  return;

 VAR_1->probe(VAR_2, ((void*)0));
}
