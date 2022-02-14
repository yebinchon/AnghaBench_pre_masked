
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dev; } ;
struct omap_dss_device {int display; int ops_flags; int of_ports; int owner; int type; int * dev; int * ops; } ;
struct panel_drv_data {struct gpio_desc* hpd_gpio; struct omap_dss_device dssdev; int hpd_lock; int * dev; } ;
struct gpio_desc {int dummy; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_1 (struct gpio_desc*) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (struct gpio_desc*) ;
 int VAR_9 ;
 int FUNC_3 (int *,char*) ;
 struct gpio_desc* FUNC_4 (int *,char*,int ) ;
 struct panel_drv_data* FUNC_5 (int *,int,int ) ;
 int FUNC_6 (int *,int ,int *,int ,int,char*,struct panel_drv_data*) ;
 int FUNC_7 (struct gpio_desc*) ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_8 (int *) ;
 int FUNC_9 (struct omap_dss_device*) ;
 int FUNC_10 (struct omap_dss_device*) ;
 int FUNC_11 (struct platform_device*,struct panel_drv_data*) ;

__attribute__((used)) static int FUNC_12(struct platform_device *VAR_12)
{
 struct panel_drv_data *VAR_13;
 struct omap_dss_device *VAR_14;
 struct gpio_desc *VAR_15;
 int VAR_16;

 VAR_13 = FUNC_5(&VAR_12->dev, sizeof(*VAR_13), VAR_1);
 if (!VAR_13)
  return -VAR_0;

 FUNC_11(VAR_12, VAR_13);
 VAR_13->dev = &VAR_12->dev;

 FUNC_8(&VAR_13->hpd_lock);


 VAR_15 = FUNC_4(&VAR_12->dev, "hpd", VAR_2);
 if (FUNC_1(VAR_15)) {
  FUNC_3(&VAR_12->dev, "failed to parse HPD gpio\n");
  return FUNC_2(VAR_15);
 }

 VAR_13->hpd_gpio = VAR_15;

 if (VAR_13->hpd_gpio) {
  VAR_16 = FUNC_6(&VAR_12->dev,
    FUNC_7(VAR_13->hpd_gpio),
    ((void*)0), VAR_10,
    VAR_5 | VAR_4 |
    VAR_3,
    "hdmic hpd", VAR_13);
  if (VAR_16)
   return VAR_16;
 }

 VAR_14 = &VAR_13->dssdev;
 VAR_14->ops = &VAR_11;
 VAR_14->dev = &VAR_12->dev;
 VAR_14->type = VAR_6;
 VAR_14->display = 1;
 VAR_14->owner = VAR_9;
 VAR_14->of_ports = FUNC_0(0);
 VAR_14->ops_flags = VAR_13->hpd_gpio
     ? VAR_7 | VAR_8
     : 0;

 FUNC_10(VAR_14);
 FUNC_9(VAR_14);

 return 0;
}
