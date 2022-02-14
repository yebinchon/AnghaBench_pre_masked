
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int kobj; } ;
struct pci_dev {TYPE_1__ dev; struct bin_attribute** res_attr_wc; struct bin_attribute** res_attr; } ;
struct bin_attribute {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct bin_attribute*) ;
 int FUNC_1 (int *,struct bin_attribute*) ;

void FUNC_2(struct pci_dev *VAR_1)
{
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++) {
  struct bin_attribute *VAR_3;

  VAR_3 = VAR_1->res_attr[VAR_2];
  if (VAR_3) {
   FUNC_1(&VAR_1->dev.kobj, VAR_3);
   FUNC_0(VAR_3);
  }

  VAR_3 = VAR_1->res_attr_wc[VAR_2];
  if (VAR_3) {
   FUNC_1(&VAR_1->dev.kobj, VAR_3);
   FUNC_0(VAR_3);
  }
 }
}
