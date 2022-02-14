
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dn {struct pci_dn* parent; } ;
struct eeh_pe {int dummy; } ;
struct eeh_dev {struct eeh_pe* pe; scalar_t__ physfn; } ;


 struct pci_dn* FUNC_0 (struct eeh_dev*) ;
 struct pci_dn* FUNC_1 (scalar_t__) ;
 struct eeh_dev* FUNC_2 (struct pci_dn*) ;

__attribute__((used)) static struct eeh_pe *FUNC_3(struct eeh_dev *VAR_0)
{
 struct eeh_dev *VAR_1;
 struct pci_dn *VAR_2 = FUNC_0(VAR_0);






 if (VAR_0->physfn)
  VAR_2 = FUNC_1(VAR_0->physfn);
 else
  VAR_2 = VAR_2 ? VAR_2->parent : ((void*)0);
 while (VAR_2) {

  VAR_1 = FUNC_2(VAR_2);
  if (!VAR_1)
   return ((void*)0);

  if (VAR_1->pe)
   return VAR_1->pe;

  VAR_2 = VAR_2->parent;
 }

 return ((void*)0);
}
