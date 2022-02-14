
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct tilcdc_module {int dummy; } ;
struct TYPE_9__ {struct tilcdc_module* platform_data; struct device_node* of_node; } ;
struct platform_device {TYPE_2__ dev; } ;
struct pinctrl {int dummy; } ;
struct panel_module {TYPE_1__* backlight; int timings; int info; struct tilcdc_module base; struct pinctrl* enable_gpio; } ;
struct device_node {int dummy; } ;
struct TYPE_8__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (struct pinctrl*) ;
 int FUNC_1 (struct pinctrl*) ;
 int FUNC_2 (TYPE_2__*,char*) ;
 int FUNC_3 (TYPE_2__*,char*) ;
 int FUNC_4 (TYPE_2__*,char*) ;
 struct pinctrl* FUNC_5 (TYPE_2__*,char*,int ) ;
 struct panel_module* FUNC_6 (TYPE_2__*,int,int ) ;
 struct pinctrl* FUNC_7 (TYPE_2__*) ;
 int FUNC_8 (int ) ;
 TYPE_1__* FUNC_9 (struct device_node*) ;
 int FUNC_10 (struct device_node*) ;
 int FUNC_11 (struct device_node*) ;
 int FUNC_12 (struct device_node*) ;
 struct device_node* FUNC_13 (struct device_node*,char*,int ) ;
 int VAR_6 ;
 int FUNC_14 (int *) ;
 int FUNC_15 (struct tilcdc_module*) ;
 int FUNC_16 (struct tilcdc_module*,char*,int *) ;

__attribute__((used)) static int FUNC_17(struct platform_device *VAR_7)
{
 struct device_node *VAR_8, *VAR_9 = VAR_7->dev.of_node;
 struct panel_module *VAR_10;
 struct tilcdc_module *VAR_11;
 struct pinctrl *VAR_12;
 int VAR_13;


 if (!VAR_9) {
  FUNC_2(&VAR_7->dev, "device-tree data is missing\n");
  return -VAR_2;
 }

 VAR_10 = FUNC_6(&VAR_7->dev, sizeof(*VAR_10), VAR_4);
 if (!VAR_10)
  return -VAR_1;

 VAR_8 = FUNC_13(VAR_9, "backlight", 0);
 if (VAR_8) {
  VAR_10->backlight = FUNC_9(VAR_8);
  FUNC_12(VAR_8);

  if (!VAR_10->backlight)
   return -VAR_3;

  FUNC_3(&VAR_7->dev, "found backlight\n");
 }

 VAR_10->enable_gpio = FUNC_5(&VAR_7->dev, "enable",
        VAR_5);
 if (FUNC_0(VAR_10->enable_gpio)) {
  VAR_13 = FUNC_1(VAR_10->enable_gpio);
  FUNC_2(&VAR_7->dev, "failed to request enable GPIO\n");
  goto fail_backlight;
 }

 if (VAR_10->enable_gpio)
  FUNC_3(&VAR_7->dev, "found enable GPIO\n");

 VAR_11 = &VAR_10->base;
 VAR_7->dev.platform_data = VAR_11;

 FUNC_16(VAR_11, "panel", &VAR_6);

 VAR_12 = FUNC_7(&VAR_7->dev);
 if (FUNC_0(VAR_12))
  FUNC_4(&VAR_7->dev, "pins are not configured\n");

 VAR_10->timings = FUNC_10(VAR_9);
 if (!VAR_10->timings) {
  FUNC_2(&VAR_7->dev, "could not get panel timings\n");
  VAR_13 = -VAR_0;
  goto fail_free;
 }

 VAR_10->info = FUNC_11(VAR_9);
 if (!VAR_10->info) {
  FUNC_2(&VAR_7->dev, "could not get panel info\n");
  VAR_13 = -VAR_0;
  goto fail_timings;
 }

 return 0;

fail_timings:
 FUNC_8(VAR_10->timings);

fail_free:
 FUNC_15(VAR_11);

fail_backlight:
 if (VAR_10->backlight)
  FUNC_14(&VAR_10->backlight->dev);
 return VAR_13;
}
