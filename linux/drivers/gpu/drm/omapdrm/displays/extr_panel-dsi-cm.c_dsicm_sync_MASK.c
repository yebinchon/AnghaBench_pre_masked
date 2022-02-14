
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct panel_drv_data {TYPE_3__* pdev; int lock; struct omap_dss_device* src; } ;
struct omap_dss_device {TYPE_2__* ops; } ;
struct TYPE_6__ {int dev; } ;
struct TYPE_4__ {int (* bus_unlock ) (struct omap_dss_device*) ;int (* bus_lock ) (struct omap_dss_device*) ;} ;
struct TYPE_5__ {TYPE_1__ dsi; } ;


 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct omap_dss_device*) ;
 int FUNC_4 (struct omap_dss_device*) ;
 struct panel_drv_data* FUNC_5 (struct omap_dss_device*) ;

__attribute__((used)) static int FUNC_6(struct omap_dss_device *VAR_0)
{
 struct panel_drv_data *VAR_1 = FUNC_5(VAR_0);
 struct omap_dss_device *VAR_2 = VAR_1->src;

 FUNC_0(&VAR_1->pdev->dev, "sync\n");

 FUNC_1(&VAR_1->lock);
 VAR_2->ops->dsi.bus_lock(VAR_2);
 VAR_2->ops->dsi.bus_unlock(VAR_2);
 FUNC_2(&VAR_1->lock);

 FUNC_0(&VAR_1->pdev->dev, "sync done\n");

 return 0;
}
