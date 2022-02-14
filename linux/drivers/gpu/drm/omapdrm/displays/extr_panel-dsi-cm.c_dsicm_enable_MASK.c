
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct panel_drv_data {int lock; TYPE_3__* pdev; struct omap_dss_device* src; } ;
struct omap_dss_device {TYPE_2__* ops; } ;
struct TYPE_6__ {int dev; } ;
struct TYPE_4__ {int (* bus_unlock ) (struct omap_dss_device*) ;int (* bus_lock ) (struct omap_dss_device*) ;} ;
struct TYPE_5__ {TYPE_1__ dsi; } ;


 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (struct panel_drv_data*,int) ;
 int FUNC_2 (struct panel_drv_data*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct omap_dss_device*) ;
 int FUNC_6 (struct omap_dss_device*) ;
 struct panel_drv_data* FUNC_7 (struct omap_dss_device*) ;

__attribute__((used)) static void FUNC_8(struct omap_dss_device *VAR_0)
{
 struct panel_drv_data *VAR_1 = FUNC_7(VAR_0);
 struct omap_dss_device *VAR_2 = VAR_1->src;
 int VAR_3;

 FUNC_3(&VAR_1->lock);

 VAR_2->ops->dsi.bus_lock(VAR_2);

 VAR_3 = FUNC_2(VAR_1);

 VAR_2->ops->dsi.bus_unlock(VAR_2);

 if (VAR_3)
  goto err;

 FUNC_4(&VAR_1->lock);

 FUNC_1(VAR_1, 1);

 return;
err:
 FUNC_0(&VAR_1->pdev->dev, "enable failed (%d)\n", VAR_3);
 FUNC_4(&VAR_1->lock);
}
