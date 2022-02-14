
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct panel_drv_data {scalar_t__ enabled; scalar_t__ vpnl; scalar_t__ vddi; TYPE_1__* pdev; int channel; struct omap_dss_device* src; } ;
struct omap_dss_device {TYPE_2__* ops; } ;
struct TYPE_6__ {int (* disable ) (struct omap_dss_device*,int,int) ;int (* disable_video_output ) (struct omap_dss_device*,int ) ;} ;
struct TYPE_5__ {TYPE_3__ dsi; } ;
struct TYPE_4__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (struct panel_drv_data*,int ) ;
 int FUNC_2 (struct panel_drv_data*) ;
 int FUNC_3 (struct panel_drv_data*) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (struct omap_dss_device*,int ) ;
 int FUNC_6 (struct omap_dss_device*,int,int) ;

__attribute__((used)) static void FUNC_7(struct panel_drv_data *VAR_1)
{
 struct omap_dss_device *VAR_2 = VAR_1->src;
 int VAR_3;

 VAR_2->ops->dsi.disable_video_output(VAR_2, VAR_1->channel);

 VAR_3 = FUNC_1(VAR_1, VAR_0);
 if (!VAR_3)
  VAR_3 = FUNC_3(VAR_1);

 if (VAR_3) {
  FUNC_0(&VAR_1->pdev->dev,
    "error disabling panel, issuing HW reset\n");
  FUNC_2(VAR_1);
 }

 VAR_2->ops->dsi.disable(VAR_2, 1, 0);

 if (VAR_1->vddi)
  FUNC_4(VAR_1->vddi);
 if (VAR_1->vpnl)
  FUNC_4(VAR_1->vpnl);

 VAR_1->enabled = 0;
}
