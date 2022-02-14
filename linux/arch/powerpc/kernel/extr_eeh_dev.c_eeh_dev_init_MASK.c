
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dn {int busno; int devfn; int phb; struct eeh_dev* edev; } ;
struct eeh_dev {int bdfn; int controller; struct pci_dn* pdn; } ;


 int VAR_0 ;
 struct eeh_dev* FUNC_0 (int,int ) ;

struct eeh_dev *FUNC_1(struct pci_dn *VAR_1)
{
 struct eeh_dev *VAR_2;


 VAR_2 = FUNC_0(sizeof(*VAR_2), VAR_0);
 if (!VAR_2)
  return ((void*)0);


 VAR_1->edev = VAR_2;
 VAR_2->pdn = VAR_1;
 VAR_2->bdfn = (VAR_1->busno << 8) | VAR_1->devfn;
 VAR_2->controller = VAR_1->phb;

 return VAR_2;
}
