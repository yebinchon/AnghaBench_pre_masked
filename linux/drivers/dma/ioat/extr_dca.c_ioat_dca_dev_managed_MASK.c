
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pci_dev {int dummy; } ;
struct ioat_dca_priv {int max_requesters; TYPE_1__* req_slots; } ;
struct device {int dummy; } ;
struct dca_provider {int dummy; } ;
struct TYPE_2__ {struct pci_dev* pdev; } ;


 struct ioat_dca_priv* FUNC_0 (struct dca_provider*) ;
 struct pci_dev* FUNC_1 (struct device*) ;

__attribute__((used)) static int FUNC_2(struct dca_provider *VAR_0,
    struct device *VAR_1)
{
 struct ioat_dca_priv *VAR_2 = FUNC_0(VAR_0);
 struct pci_dev *VAR_3;
 int VAR_4;

 VAR_3 = FUNC_1(VAR_1);
 for (VAR_4 = 0; VAR_4 < VAR_2->max_requesters; VAR_4++) {
  if (VAR_2->req_slots[VAR_4].pdev == VAR_3)
   return 1;
 }
 return 0;
}
