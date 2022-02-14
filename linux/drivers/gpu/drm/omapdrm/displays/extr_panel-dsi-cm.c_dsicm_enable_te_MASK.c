
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct panel_drv_data {int te_enabled; int lock; scalar_t__ enabled; struct omap_dss_device* src; } ;
struct omap_dss_device {TYPE_2__* ops; } ;
struct TYPE_3__ {int (* bus_unlock ) (struct omap_dss_device*) ;int (* bus_lock ) (struct omap_dss_device*) ;} ;
struct TYPE_4__ {TYPE_1__ dsi; } ;


 int FUNC_0 (struct panel_drv_data*,int) ;
 int FUNC_1 (struct panel_drv_data*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct omap_dss_device*) ;
 int FUNC_5 (struct omap_dss_device*) ;
 int FUNC_6 (struct omap_dss_device*) ;
 struct panel_drv_data* FUNC_7 (struct omap_dss_device*) ;

__attribute__((used)) static int FUNC_8(struct omap_dss_device *VAR_0, bool VAR_1)
{
 struct panel_drv_data *VAR_2 = FUNC_7(VAR_0);
 struct omap_dss_device *VAR_3 = VAR_2->src;
 int VAR_4;

 FUNC_2(&VAR_2->lock);

 if (VAR_2->te_enabled == VAR_1)
  goto end;

 VAR_3->ops->dsi.bus_lock(VAR_3);

 if (VAR_2->enabled) {
  VAR_4 = FUNC_1(VAR_2);
  if (VAR_4)
   goto err;

  VAR_4 = FUNC_0(VAR_2, VAR_1);
  if (VAR_4)
   goto err;
 }

 VAR_2->te_enabled = VAR_1;

 VAR_3->ops->dsi.bus_unlock(VAR_3);
end:
 FUNC_3(&VAR_2->lock);

 return 0;
err:
 VAR_3->ops->dsi.bus_unlock(VAR_3);
 FUNC_3(&VAR_2->lock);

 return VAR_4;
}
