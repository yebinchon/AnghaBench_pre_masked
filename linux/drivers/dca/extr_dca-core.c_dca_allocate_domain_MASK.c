
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_bus {int dummy; } ;
struct dca_domain {struct pci_bus* pci_rc; int dca_providers; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 struct dca_domain* FUNC_1 (int,int ) ;

__attribute__((used)) static struct dca_domain *FUNC_2(struct pci_bus *VAR_1)
{
 struct dca_domain *VAR_2;

 VAR_2 = FUNC_1(sizeof(*VAR_2), VAR_0);
 if (!VAR_2)
  return ((void*)0);

 FUNC_0(&VAR_2->dca_providers);
 VAR_2->pci_rc = VAR_1;

 return VAR_2;
}
