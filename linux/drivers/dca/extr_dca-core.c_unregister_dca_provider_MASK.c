
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_bus {int dummy; } ;
struct device {int dummy; } ;
struct dca_provider {int node; } ;
struct dca_domain {int dca_providers; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,int *) ;
 int VAR_1 ;
 struct dca_domain* FUNC_1 (struct pci_bus*) ;
 int FUNC_2 (struct dca_domain*) ;
 int VAR_2 ;
 struct pci_bus* FUNC_3 (struct device*) ;
 int VAR_3 ;
 int FUNC_4 (struct dca_provider*) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int *) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (int *,unsigned long) ;

void FUNC_9(struct dca_provider *VAR_4, struct device *VAR_5)
{
 unsigned long VAR_6;
 struct pci_bus *VAR_7;
 struct dca_domain *VAR_8;

 FUNC_0(&VAR_3,
         VAR_0, ((void*)0));

 FUNC_7(&VAR_2, VAR_6);

 if (FUNC_6(&VAR_1)) {
  FUNC_8(&VAR_2, VAR_6);
  return;
 }

 FUNC_5(&VAR_4->node);

 VAR_7 = FUNC_3(VAR_5);
 VAR_8 = FUNC_1(VAR_7);
 if (FUNC_6(&VAR_8->dca_providers))
  FUNC_2(VAR_8);

 FUNC_8(&VAR_2, VAR_6);

 FUNC_4(VAR_4);
}
