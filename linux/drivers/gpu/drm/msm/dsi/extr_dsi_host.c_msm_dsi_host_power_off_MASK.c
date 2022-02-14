
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct msm_dsi_host {int power_on; int dev_mutex; TYPE_2__* pdev; scalar_t__ disp_en_gpio; struct msm_dsi_cfg_handler* cfg_hnd; } ;
struct msm_dsi_cfg_handler {TYPE_1__* ops; } ;
struct mipi_dsi_host {int dummy; } ;
struct TYPE_4__ {int dev; } ;
struct TYPE_3__ {int (* link_clk_disable ) (struct msm_dsi_host*) ;} ;


 int FUNC_0 (char*) ;
 int FUNC_1 (struct msm_dsi_host*,int,int *) ;
 int FUNC_2 (struct msm_dsi_host*) ;
 int FUNC_3 (scalar_t__,int ) ;
 int FUNC_4 (struct msm_dsi_host*,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (struct msm_dsi_host*) ;
 struct msm_dsi_host* FUNC_10 (struct mipi_dsi_host*) ;

int FUNC_11(struct mipi_dsi_host *VAR_0)
{
 struct msm_dsi_host *VAR_1 = FUNC_10(VAR_0);
 const struct msm_dsi_cfg_handler *VAR_2 = VAR_1->cfg_hnd;

 FUNC_5(&VAR_1->dev_mutex);
 if (!VAR_1->power_on) {
  FUNC_0("dsi host already off");
  goto unlock_ret;
 }

 FUNC_1(VAR_1, 0, ((void*)0));

 if (VAR_1->disp_en_gpio)
  FUNC_3(VAR_1->disp_en_gpio, 0);

 FUNC_7(&VAR_1->pdev->dev);

 VAR_2->ops->link_clk_disable(VAR_1);
 FUNC_8(&VAR_1->pdev->dev);

 FUNC_2(VAR_1);

 FUNC_4(VAR_1, 0);

 FUNC_0("-");

 VAR_1->power_on = 0;

unlock_ret:
 FUNC_6(&VAR_1->dev_mutex);
 return 0;
}
