
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct panel_drv_data {int lock; scalar_t__ enabled; TYPE_2__* pdev; struct omap_dss_device* src; } ;
struct omap_dss_device {TYPE_4__* ops; } ;
struct TYPE_5__ {scalar_t__ fb_blank; scalar_t__ power; int brightness; } ;
struct backlight_device {TYPE_1__ props; int dev; } ;
struct TYPE_7__ {int (* bus_unlock ) (struct omap_dss_device*) ;int (* bus_lock ) (struct omap_dss_device*) ;} ;
struct TYPE_8__ {TYPE_3__ dsi; } ;
struct TYPE_6__ {int dev; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *,char*,int) ;
 struct panel_drv_data* FUNC_1 (int *) ;
 int FUNC_2 (struct panel_drv_data*,int ,int) ;
 int FUNC_3 (struct panel_drv_data*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct omap_dss_device*) ;
 int FUNC_7 (struct omap_dss_device*) ;

__attribute__((used)) static int FUNC_8(struct backlight_device *VAR_2)
{
 struct panel_drv_data *VAR_3 = FUNC_1(&VAR_2->dev);
 struct omap_dss_device *VAR_4 = VAR_3->src;
 int VAR_5 = 0;
 int VAR_6;

 if (VAR_2->props.fb_blank == VAR_1 &&
   VAR_2->props.power == VAR_1)
  VAR_6 = VAR_2->props.brightness;
 else
  VAR_6 = 0;

 FUNC_0(&VAR_3->pdev->dev, "update brightness to %d\n", VAR_6);

 FUNC_4(&VAR_3->lock);

 if (VAR_3->enabled) {
  VAR_4->ops->dsi.bus_lock(VAR_4);

  VAR_5 = FUNC_3(VAR_3);
  if (!VAR_5)
   VAR_5 = FUNC_2(VAR_3, VAR_0, VAR_6);

  VAR_4->ops->dsi.bus_unlock(VAR_4);
 }

 FUNC_5(&VAR_3->lock);

 return VAR_5;
}
