
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_bus {int dummy; } ;
struct device {int dummy; } ;
struct dca_provider {int node; } ;
struct dca_domain {int dca_providers; int node; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ,int *) ;
 struct dca_domain* FUNC_1 (struct pci_bus*) ;
 int VAR_2 ;
 struct dca_domain* FUNC_2 (struct device*) ;
 int VAR_3 ;
 struct pci_bus* FUNC_3 (struct device*) ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_4 (struct dca_provider*,struct device*) ;
 int FUNC_5 (struct dca_provider*) ;
 int FUNC_6 (struct dca_domain*) ;
 int FUNC_7 (int *,int *) ;
 int FUNC_8 (int *,unsigned long) ;
 int FUNC_9 (int *,unsigned long) ;
 int FUNC_10 () ;

int FUNC_11(struct dca_provider *VAR_6, struct device *VAR_7)
{
 int VAR_8;
 unsigned long VAR_9;
 struct dca_domain *VAR_10, *VAR_11 = ((void*)0);

 FUNC_8(&VAR_3, VAR_9);
 if (VAR_5) {
  FUNC_9(&VAR_3, VAR_9);
  return -VAR_1;
 }
 FUNC_9(&VAR_3, VAR_9);

 VAR_8 = FUNC_4(VAR_6, VAR_7);
 if (VAR_8)
  return VAR_8;

 FUNC_8(&VAR_3, VAR_9);
 VAR_10 = FUNC_2(VAR_7);
 if (!VAR_10) {
  struct pci_bus *VAR_12;

  if (VAR_5) {
   FUNC_9(&VAR_3, VAR_9);
   FUNC_5(VAR_6);
   FUNC_10();
   return -VAR_1;
  }

  FUNC_9(&VAR_3, VAR_9);
  VAR_12 = FUNC_3(VAR_7);
  VAR_11 = FUNC_1(VAR_12);
  if (!VAR_11)
   return -VAR_1;
  FUNC_8(&VAR_3, VAR_9);

  VAR_10 = FUNC_2(VAR_7);
  if (!VAR_10) {
   VAR_10 = VAR_11;
   VAR_11 = ((void*)0);
   FUNC_7(&VAR_10->node, &VAR_2);
  }
 }
 FUNC_7(&VAR_6->node, &VAR_10->dca_providers);
 FUNC_9(&VAR_3, VAR_9);

 FUNC_0(&VAR_4,
         VAR_0, ((void*)0));
 FUNC_6(VAR_11);
 return 0;
}
