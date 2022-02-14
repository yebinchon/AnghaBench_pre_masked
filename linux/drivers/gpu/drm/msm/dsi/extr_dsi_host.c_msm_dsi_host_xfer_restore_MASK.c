
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct msm_dsi_host {TYPE_1__* pdev; int dma_cmd_ctrl_restore; struct msm_dsi_cfg_handler* cfg_hnd; } ;
struct msm_dsi_cfg_handler {TYPE_2__* ops; } ;
struct mipi_dsi_msg {int flags; } ;
struct mipi_dsi_host {int dummy; } ;
struct TYPE_4__ {int (* link_clk_disable ) (struct msm_dsi_host*) ;} ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct msm_dsi_host*,int ,int ) ;
 int FUNC_1 (int,struct msm_dsi_host*) ;
 int FUNC_2 (struct msm_dsi_host*,int ,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct msm_dsi_host*) ;
 struct msm_dsi_host* FUNC_5 (struct mipi_dsi_host*) ;

void FUNC_6(struct mipi_dsi_host *VAR_3,
    const struct mipi_dsi_msg *VAR_4)
{
 struct msm_dsi_host *VAR_5 = FUNC_5(VAR_3);
 const struct msm_dsi_cfg_handler *VAR_6 = VAR_5->cfg_hnd;

 FUNC_0(VAR_5, VAR_0, 0);
 FUNC_2(VAR_5, VAR_2, VAR_5->dma_cmd_ctrl_restore);

 if (!(VAR_4->flags & VAR_1))
  FUNC_1(1, VAR_5);



 VAR_6->ops->link_clk_disable(VAR_5);
 FUNC_3(&VAR_5->pdev->dev);
}
