
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int of_node; } ;
struct platform_device {TYPE_1__ dev; } ;
struct omap_dss_device {int of_ports; int ops_flags; struct gpio_desc* next; int owner; int type; TYPE_1__* dev; int * ops; } ;
struct panel_drv_data {struct omap_dss_device dssdev; struct gpio_desc* hpd_gpio; int hpd_lock; struct gpio_desc* ls_oe_gpio; struct gpio_desc* ct_cp_hpd_gpio; } ;
struct gpio_desc {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_1 (struct gpio_desc*) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_2 (struct gpio_desc*) ;
 int VAR_11 ;
 int FUNC_3 (TYPE_1__*,char*) ;
 struct gpio_desc* FUNC_4 (TYPE_1__*,int *,int,int ) ;
 struct gpio_desc* FUNC_5 (TYPE_1__*,int *,int,int ) ;
 struct panel_drv_data* FUNC_6 (TYPE_1__*,int,int ) ;
 int FUNC_7 (TYPE_1__*,int ,int *,int ,int,char*,struct panel_drv_data*) ;
 int FUNC_8 (struct gpio_desc*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (struct omap_dss_device*) ;
 struct gpio_desc* FUNC_11 (int ,int) ;
 int FUNC_12 (struct platform_device*,struct panel_drv_data*) ;
 int VAR_12 ;
 int VAR_13 ;

__attribute__((used)) static int FUNC_13(struct platform_device *VAR_14)
{
 struct omap_dss_device *VAR_15;
 struct panel_drv_data *VAR_16;
 int VAR_17;
 struct gpio_desc *VAR_18;

 VAR_16 = FUNC_6(&VAR_14->dev, sizeof(*VAR_16), VAR_2);
 if (!VAR_16)
  return -VAR_0;

 FUNC_12(VAR_14, VAR_16);

 VAR_18 = FUNC_5(&VAR_14->dev, ((void*)0), 0,
   VAR_4);
 if (FUNC_1(VAR_18))
  return FUNC_2(VAR_18);

 VAR_16->ct_cp_hpd_gpio = VAR_18;

 VAR_18 = FUNC_5(&VAR_14->dev, ((void*)0), 1,
   VAR_4);
 if (FUNC_1(VAR_18))
  return FUNC_2(VAR_18);

 VAR_16->ls_oe_gpio = VAR_18;

 VAR_18 = FUNC_4(&VAR_14->dev, ((void*)0), 2,
  VAR_3);
 if (FUNC_1(VAR_18))
  return FUNC_2(VAR_18);

 VAR_16->hpd_gpio = VAR_18;

 FUNC_9(&VAR_16->hpd_lock);

 VAR_17 = FUNC_7(&VAR_14->dev, FUNC_8(VAR_16->hpd_gpio),
  ((void*)0), VAR_12,
  VAR_7 | VAR_6 | VAR_5,
  "tpd12s015 hpd", VAR_16);
 if (VAR_17)
  return VAR_17;

 VAR_15 = &VAR_16->dssdev;
 VAR_15->ops = &VAR_13;
 VAR_15->dev = &VAR_14->dev;
 VAR_15->type = VAR_8;
 VAR_15->owner = VAR_11;
 VAR_15->of_ports = FUNC_0(1) | FUNC_0(0);
 VAR_15->ops_flags = VAR_9
     | VAR_10;

 VAR_15->next = FUNC_11(VAR_14->dev.of_node, 1);
 if (FUNC_1(VAR_15->next)) {
  if (FUNC_2(VAR_15->next) != -VAR_1)
   FUNC_3(&VAR_14->dev, "failed to find video sink\n");
  return FUNC_2(VAR_15->next);
 }

 FUNC_10(VAR_15);

 return 0;
}
