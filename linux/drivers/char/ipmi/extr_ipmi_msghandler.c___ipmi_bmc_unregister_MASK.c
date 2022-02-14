
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int kobj; } ;
struct TYPE_6__ {TYPE_2__ dev; } ;
struct bmc_device {int usecount; int dyn_mutex; TYPE_3__ pdev; } ;
struct ipmi_smi {int bmc_registered; char* my_dev_name; struct bmc_device tmp_bmc; struct bmc_device* bmc; int bmc_link; TYPE_1__* si_dev; } ;
struct TYPE_4__ {int kobj; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,char*) ;

__attribute__((used)) static void FUNC_6(struct ipmi_smi *VAR_1)
{
 struct bmc_device *VAR_2 = VAR_1->bmc;

 if (!VAR_1->bmc_registered)
  return;

 FUNC_5(&VAR_1->si_dev->kobj, "bmc");
 FUNC_5(&VAR_2->pdev.dev.kobj, VAR_1->my_dev_name);
 FUNC_0(VAR_1->my_dev_name);
 VAR_1->my_dev_name = ((void*)0);

 FUNC_3(&VAR_2->dyn_mutex);
 FUNC_2(&VAR_1->bmc_link);
 FUNC_4(&VAR_2->dyn_mutex);
 VAR_1->bmc = &VAR_1->tmp_bmc;
 FUNC_1(&VAR_2->usecount, VAR_0);
 VAR_1->bmc_registered = 0;
}
