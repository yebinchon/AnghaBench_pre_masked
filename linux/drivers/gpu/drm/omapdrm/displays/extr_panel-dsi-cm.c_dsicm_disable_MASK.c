
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct panel_drv_data {int lock; struct omap_dss_device* src; } ;
struct omap_dss_device {TYPE_2__* ops; } ;
struct TYPE_3__ {int (* bus_unlock ) (struct omap_dss_device*) ;int (* bus_lock ) (struct omap_dss_device*) ;} ;
struct TYPE_4__ {TYPE_1__ dsi; } ;


 int FUNC_0 (struct panel_drv_data*,int) ;
 int FUNC_1 (struct panel_drv_data*) ;
 int FUNC_2 (struct panel_drv_data*) ;
 int FUNC_3 (struct panel_drv_data*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct omap_dss_device*) ;
 int FUNC_7 (struct omap_dss_device*) ;
 struct panel_drv_data* FUNC_8 (struct omap_dss_device*) ;

__attribute__((used)) static void FUNC_9(struct omap_dss_device *VAR_0)
{
 struct panel_drv_data *VAR_1 = FUNC_8(VAR_0);
 struct omap_dss_device *VAR_2 = VAR_1->src;
 int VAR_3;

 FUNC_0(VAR_1, 0);

 FUNC_4(&VAR_1->lock);

 FUNC_1(VAR_1);

 VAR_2->ops->dsi.bus_lock(VAR_2);

 VAR_3 = FUNC_3(VAR_1);
 if (!VAR_3)
  FUNC_2(VAR_1);

 VAR_2->ops->dsi.bus_unlock(VAR_2);

 FUNC_5(&VAR_1->lock);
}
