
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct msm_dsi_host {int dma_cmd_ctrl_restore; TYPE_1__* pdev; struct msm_dsi_cfg_handler* cfg_hnd; } ;
struct msm_dsi_cfg_handler {TYPE_2__* ops; } ;
struct mipi_dsi_msg {int flags; } ;
struct mipi_dsi_host {int dummy; } ;
struct TYPE_4__ {int (* link_clk_enable ) (struct msm_dsi_host*) ;} ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct msm_dsi_host*,int ,int) ;
 int FUNC_1 (struct msm_dsi_host*,int ) ;
 int FUNC_2 (int ,struct msm_dsi_host*) ;
 int FUNC_3 (struct msm_dsi_host*,int ,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct msm_dsi_host*) ;
 struct msm_dsi_host* FUNC_6 (struct mipi_dsi_host*) ;

int FUNC_7(struct mipi_dsi_host *VAR_5,
    const struct mipi_dsi_msg *VAR_6)
{
 struct msm_dsi_host *VAR_7 = FUNC_6(VAR_5);
 const struct msm_dsi_cfg_handler *VAR_8 = VAR_7->cfg_hnd;
 FUNC_4(&VAR_7->pdev->dev);
 VAR_8->ops->link_clk_enable(VAR_7);



 if (!(VAR_6->flags & VAR_3))
  FUNC_2(0, VAR_7);

 VAR_7->dma_cmd_ctrl_restore = FUNC_1(VAR_7, VAR_4);
 FUNC_3(VAR_7, VAR_4,
  VAR_7->dma_cmd_ctrl_restore |
  VAR_0 |
  VAR_1);
 FUNC_0(VAR_7, VAR_2, 1);

 return 0;
}
