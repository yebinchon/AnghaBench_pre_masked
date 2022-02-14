
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct panel_drv_data {TYPE_1__* pdev; int channel; int te_timeout_work; int do_update; struct omap_dss_device* src; } ;
struct omap_dss_device {TYPE_3__* ops; } ;
typedef int irqreturn_t ;
struct TYPE_5__ {int (* update ) (struct omap_dss_device*,int ,int ,struct panel_drv_data*) ;int (* bus_unlock ) (struct omap_dss_device*) ;} ;
struct TYPE_6__ {TYPE_2__ dsi; } ;
struct TYPE_4__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,char*) ;
 int VAR_1 ;
 int FUNC_3 (struct omap_dss_device*,int ,int ,struct panel_drv_data*) ;
 int FUNC_4 (struct omap_dss_device*) ;

__attribute__((used)) static irqreturn_t FUNC_5(int VAR_2, void *VAR_3)
{
 struct panel_drv_data *VAR_4 = VAR_3;
 struct omap_dss_device *VAR_5 = VAR_4->src;
 int VAR_6;
 int VAR_7;

 VAR_6 = FUNC_0(&VAR_4->do_update, 1, 0);

 if (VAR_6) {
  FUNC_1(&VAR_4->te_timeout_work);

  VAR_7 = VAR_5->ops->dsi.update(VAR_5, VAR_4->channel, VAR_1,
    VAR_4);
  if (VAR_7)
   goto err;
 }

 return VAR_0;
err:
 FUNC_2(&VAR_4->pdev->dev, "start update failed\n");
 VAR_5->ops->dsi.bus_unlock(VAR_5);
 return VAR_0;
}
