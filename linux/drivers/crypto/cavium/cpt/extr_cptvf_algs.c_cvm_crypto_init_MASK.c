
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u32 ;
struct pci_dev {int dev; } ;
struct cpt_vf {struct pci_dev* pdev; } ;
struct TYPE_2__ {size_t dev_count; struct cpt_vf** cdev; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 () ;
 int FUNC_1 (int *,char*) ;
 TYPE_1__ VAR_1 ;

int FUNC_2(struct cpt_vf *VAR_2)
{
 struct pci_dev *VAR_3 = VAR_2->pdev;
 u32 VAR_4;

 VAR_4 = VAR_1.dev_count;
 VAR_1.cdev[VAR_4] = VAR_2;
 VAR_1.dev_count++;

 if (VAR_4 == 3) {
  if (FUNC_0()) {
   FUNC_1(&VAR_3->dev, "Error in registering crypto algorithms\n");
   return -VAR_0;
  }
 }

 return 0;
}
