
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct device {int kobj; } ;
struct platform_device {struct device dev; } ;
struct omap_dss_device {int display; int caps; int ops_flags; int of_ports; int owner; int type; int * driver; int * ops; struct device* dev; } ;
struct TYPE_3__ {int hactive; int vactive; int pixelclock; } ;
struct panel_drv_data {TYPE_2__* extbldev; int workqueue; struct backlight_device* bldev; scalar_t__ use_dsi_backlight; int ulps_work; int te_timeout_work; scalar_t__ ext_te_gpio; int do_update; int lock; struct omap_dss_device dssdev; TYPE_1__ vm; struct platform_device* pdev; } ;
struct backlight_properties {int max_brightness; int type; int member_0; } ;
struct backlight_device {int dummy; } ;
struct TYPE_4__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int ) ;
 int VAR_3 ;
 scalar_t__ FUNC_3 (struct backlight_device*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_4 (struct backlight_device*) ;
 int VAR_8 ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (struct device*,char*) ;
 int FUNC_9 (struct device*,char*) ;
 int FUNC_10 (struct device*) ;
 struct backlight_device* FUNC_11 (struct device*,int ,struct device*,struct panel_drv_data*,int *,struct backlight_properties*) ;
 struct panel_drv_data* FUNC_12 (struct device*,int,int ) ;
 int FUNC_13 (struct device*,int ,int ,int ,char*,struct panel_drv_data*) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_14 (struct panel_drv_data*) ;
 int VAR_12 ;
 int FUNC_15 (struct platform_device*) ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_16 (scalar_t__) ;
 int FUNC_17 (int *) ;
 int FUNC_18 (struct omap_dss_device*) ;
 int FUNC_19 (struct omap_dss_device*) ;
 int FUNC_20 (struct platform_device*,struct panel_drv_data*) ;
 int FUNC_21 (int *) ;
 int FUNC_22 (int *,int *) ;

__attribute__((used)) static int FUNC_23(struct platform_device *VAR_16)
{
 struct panel_drv_data *VAR_17;
 struct backlight_device *VAR_18 = ((void*)0);
 struct device *VAR_19 = &VAR_16->dev;
 struct omap_dss_device *VAR_20;
 int VAR_21;

 FUNC_8(VAR_19, "probe\n");

 VAR_17 = FUNC_12(VAR_19, sizeof(*VAR_17), VAR_2);
 if (!VAR_17)
  return -VAR_1;

 FUNC_20(VAR_16, VAR_17);
 VAR_17->pdev = VAR_16;

 VAR_17->vm.hactive = 864;
 VAR_17->vm.vactive = 480;
 VAR_17->vm.pixelclock = 864 * 480 * 60;

 VAR_21 = FUNC_15(VAR_16);
 if (VAR_21)
  return VAR_21;

 VAR_20 = &VAR_17->dssdev;
 VAR_20->dev = VAR_19;
 VAR_20->ops = &VAR_12;
 VAR_20->driver = &VAR_11;
 VAR_20->type = VAR_4;
 VAR_20->display = 1;
 VAR_20->owner = VAR_8;
 VAR_20->of_ports = FUNC_0(0);
 VAR_20->ops_flags = VAR_5;

 VAR_20->caps = VAR_6 |
  VAR_7;

 FUNC_19(VAR_20);
 FUNC_18(VAR_20);

 FUNC_17(&VAR_17->lock);

 FUNC_5(&VAR_17->do_update, 0);

 if (VAR_17->ext_te_gpio) {
  VAR_21 = FUNC_13(VAR_19, FUNC_16(VAR_17->ext_te_gpio),
    VAR_13,
    VAR_3,
    "taal vsync", VAR_17);

  if (VAR_21) {
   FUNC_9(VAR_19, "IRQ request failed\n");
   goto err_reg;
  }

  FUNC_1(&VAR_17->te_timeout_work,
     VAR_14);

  FUNC_8(VAR_19, "Using GPIO TE\n");
 }

 VAR_17->workqueue = FUNC_6("dsicm_wq");
 if (!VAR_17->workqueue) {
  VAR_21 = -VAR_1;
  goto err_reg;
 }
 FUNC_2(&VAR_17->ulps_work, VAR_15);

 FUNC_14(VAR_17);

 if (VAR_17->use_dsi_backlight) {
  struct backlight_properties VAR_22 = { 0 };
  VAR_22.max_brightness = 255;
  VAR_22.type = VAR_0;

  VAR_18 = FUNC_11(VAR_19, FUNC_10(VAR_19),
   VAR_19, VAR_17, &VAR_10, &VAR_22);
  if (FUNC_3(VAR_18)) {
   VAR_21 = FUNC_4(VAR_18);
   goto err_bl;
  }

  VAR_17->bldev = VAR_18;
 }

 VAR_21 = FUNC_22(&VAR_19->kobj, &VAR_9);
 if (VAR_21) {
  FUNC_9(VAR_19, "failed to create sysfs files\n");
  goto err_bl;
 }

 return 0;

err_bl:
 FUNC_7(VAR_17->workqueue);
err_reg:
 if (VAR_17->extbldev)
  FUNC_21(&VAR_17->extbldev->dev);

 return VAR_21;
}
