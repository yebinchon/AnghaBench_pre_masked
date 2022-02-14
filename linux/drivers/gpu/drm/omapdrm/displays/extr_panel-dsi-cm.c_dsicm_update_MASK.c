
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_6__ {int vactive; int hactive; } ;
struct panel_drv_data {int lock; int channel; int do_update; int te_timeout_work; scalar_t__ ext_te_gpio; scalar_t__ te_enabled; TYPE_2__ vm; int enabled; TYPE_1__* pdev; struct omap_dss_device* src; } ;
struct omap_dss_device {TYPE_4__* ops; } ;
struct TYPE_7__ {int (* update ) (struct omap_dss_device*,int ,int ,struct panel_drv_data*) ;int (* bus_unlock ) (struct omap_dss_device*) ;int (* bus_lock ) (struct omap_dss_device*) ;} ;
struct TYPE_8__ {TYPE_3__ dsi; } ;
struct TYPE_5__ {int dev; } ;


 int FUNC_0 (int *,int) ;
 int FUNC_1 (int *,char*,int ,int ,int ,int ) ;
 int VAR_0 ;
 int FUNC_2 (struct panel_drv_data*,int ,int ,int ,int ) ;
 int FUNC_3 (struct panel_drv_data*) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int ) ;
 int FUNC_8 (struct omap_dss_device*) ;
 int FUNC_9 (struct omap_dss_device*,int ,int ,struct panel_drv_data*) ;
 int FUNC_10 (struct omap_dss_device*) ;
 struct panel_drv_data* FUNC_11 (struct omap_dss_device*) ;

__attribute__((used)) static int FUNC_12(struct omap_dss_device *VAR_1,
        u16 VAR_2, u16 VAR_3, u16 VAR_4, u16 VAR_5)
{
 struct panel_drv_data *VAR_6 = FUNC_11(VAR_1);
 struct omap_dss_device *VAR_7 = VAR_6->src;
 int VAR_8;

 FUNC_1(&VAR_6->pdev->dev, "update %d, %d, %d x %d\n", VAR_2, VAR_3, VAR_4, VAR_5);

 FUNC_5(&VAR_6->lock);
 VAR_7->ops->dsi.bus_lock(VAR_7);

 VAR_8 = FUNC_3(VAR_6);
 if (VAR_8)
  goto err;

 if (!VAR_6->enabled) {
  VAR_8 = 0;
  goto err;
 }


 VAR_8 = FUNC_2(VAR_6, 0, 0, VAR_6->vm.hactive,
        VAR_6->vm.vactive);
 if (VAR_8)
  goto err;

 if (VAR_6->te_enabled && VAR_6->ext_te_gpio) {
  FUNC_7(&VAR_6->te_timeout_work,
    FUNC_4(250));
  FUNC_0(&VAR_6->do_update, 1);
 } else {
  VAR_8 = VAR_7->ops->dsi.update(VAR_7, VAR_6->channel, VAR_0,
    VAR_6);
  if (VAR_8)
   goto err;
 }


 FUNC_6(&VAR_6->lock);
 return 0;
err:
 VAR_7->ops->dsi.bus_unlock(VAR_7);
 FUNC_6(&VAR_6->lock);
 return VAR_8;
}
