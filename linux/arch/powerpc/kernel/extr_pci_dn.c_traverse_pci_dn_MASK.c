
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dn {int dummy; } ;


 struct pci_dn* FUNC_0 (struct pci_dn*,struct pci_dn*) ;

void *FUNC_1(struct pci_dn *VAR_0,
        void *(*VAR_1)(struct pci_dn *, void *),
        void *VAR_2)
{
 struct pci_dn *VAR_3 = VAR_0;
 void *VAR_4;


 for (VAR_3 = FUNC_0(VAR_0, VAR_3); VAR_3;
      VAR_3 = FUNC_0(VAR_0, VAR_3)) {
  VAR_4 = VAR_1(VAR_3, VAR_2);
  if (VAR_4)
   return VAR_4;
 }

 return ((void*)0);
}
