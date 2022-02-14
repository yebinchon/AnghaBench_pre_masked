
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct msm_dsi_host {TYPE_1__* pdev; int dev_mutex; int cmd_mutex; int * workqueue; } ;
struct mipi_dsi_host {int dummy; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct msm_dsi_host*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 struct msm_dsi_host* FUNC_6 (struct mipi_dsi_host*) ;

void FUNC_7(struct mipi_dsi_host *VAR_0)
{
 struct msm_dsi_host *VAR_1 = FUNC_6(VAR_0);

 FUNC_0("");
 FUNC_2(VAR_1);
 if (VAR_1->workqueue) {
  FUNC_3(VAR_1->workqueue);
  FUNC_1(VAR_1->workqueue);
  VAR_1->workqueue = ((void*)0);
 }

 FUNC_4(&VAR_1->cmd_mutex);
 FUNC_4(&VAR_1->dev_mutex);

 FUNC_5(&VAR_1->pdev->dev);
}
