
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cpc925_dev_info {int ctl_name; int (* exit ) (struct cpc925_dev_info*) ;int pdev; TYPE_1__* edac_dev; scalar_t__ init; } ;
struct TYPE_2__ {int dev; } ;


 struct cpc925_dev_info* VAR_0 ;
 int FUNC_0 (int ,char*,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct cpc925_dev_info*) ;

__attribute__((used)) static void FUNC_5(void)
{
 struct cpc925_dev_info *VAR_1;

 for (VAR_1 = &VAR_0[0]; VAR_1->init; VAR_1++) {
  if (VAR_1->edac_dev) {
   FUNC_1(VAR_1->edac_dev->dev);
   FUNC_2(VAR_1->edac_dev);
   FUNC_3(VAR_1->pdev);
  }

  if (VAR_1->exit)
   VAR_1->exit(VAR_1);

  FUNC_0(0, "Successfully deleted edac device for %s\n",
    VAR_1->ctl_name);
 }
}
