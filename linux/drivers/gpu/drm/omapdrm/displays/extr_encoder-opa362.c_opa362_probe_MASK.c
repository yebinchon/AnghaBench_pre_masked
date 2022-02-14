
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int of_node; } ;
struct platform_device {TYPE_1__ dev; } ;
struct omap_dss_device {int of_ports; struct gpio_desc* next; int owner; int type; TYPE_1__* dev; int * ops; } ;
struct panel_drv_data {struct omap_dss_device dssdev; struct gpio_desc* enable_gpio; } ;
struct gpio_desc {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (struct gpio_desc*) ;
 int VAR_4 ;
 int FUNC_2 (struct gpio_desc*) ;
 int VAR_5 ;
 int FUNC_3 (TYPE_1__*,char*) ;
 int FUNC_4 (TYPE_1__*,char*) ;
 struct gpio_desc* FUNC_5 (TYPE_1__*,char*,int ) ;
 struct panel_drv_data* FUNC_6 (TYPE_1__*,int,int ) ;
 int FUNC_7 (struct omap_dss_device*) ;
 struct gpio_desc* FUNC_8 (int ,int) ;
 int VAR_6 ;
 int FUNC_9 (struct platform_device*,struct panel_drv_data*) ;

__attribute__((used)) static int FUNC_10(struct platform_device *VAR_7)
{
 struct panel_drv_data *VAR_8;
 struct omap_dss_device *VAR_9;
 struct gpio_desc *VAR_10;

 FUNC_3(&VAR_7->dev, "probe\n");

 VAR_8 = FUNC_6(&VAR_7->dev, sizeof(*VAR_8), VAR_2);
 if (!VAR_8)
  return -VAR_0;

 FUNC_9(VAR_7, VAR_8);

 VAR_10 = FUNC_5(&VAR_7->dev, "enable", VAR_3);
 if (FUNC_1(VAR_10))
  return FUNC_2(VAR_10);

 VAR_8->enable_gpio = VAR_10;

 VAR_9 = &VAR_8->dssdev;
 VAR_9->ops = &VAR_6;
 VAR_9->dev = &VAR_7->dev;
 VAR_9->type = VAR_4;
 VAR_9->owner = VAR_5;
 VAR_9->of_ports = FUNC_0(1) | FUNC_0(0);

 VAR_9->next = FUNC_8(VAR_7->dev.of_node, 1);
 if (FUNC_1(VAR_9->next)) {
  if (FUNC_2(VAR_9->next) != -VAR_1)
   FUNC_4(&VAR_7->dev, "failed to find video sink\n");
  return FUNC_2(VAR_9->next);
 }

 FUNC_7(VAR_9);

 return 0;
}
