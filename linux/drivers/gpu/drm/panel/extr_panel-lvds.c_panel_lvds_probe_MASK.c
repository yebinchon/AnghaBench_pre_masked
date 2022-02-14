
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_11__ {int of_node; } ;
struct platform_device {TYPE_4__ dev; } ;
struct TYPE_10__ {int * funcs; TYPE_4__* dev; } ;
struct panel_lvds {TYPE_1__* backlight; TYPE_4__* dev; TYPE_2__ panel; int * reset_gpio; int * enable_gpio; int * supply; } ;
struct device_node {int dummy; } ;
struct TYPE_9__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_4__*,char*,...) ;
 int FUNC_3 (TYPE_4__*,struct panel_lvds*) ;
 void* FUNC_4 (TYPE_4__*,char*,int ) ;
 struct panel_lvds* FUNC_5 (TYPE_4__*,int,int ) ;
 int * FUNC_6 (TYPE_4__*,char*) ;
 int FUNC_7 (TYPE_2__*) ;
 int FUNC_8 (TYPE_2__*) ;
 TYPE_1__* FUNC_9 (struct device_node*) ;
 int FUNC_10 (struct device_node*) ;
 struct device_node* FUNC_11 (int ,char*,int ) ;
 int VAR_6 ;
 int FUNC_12 (struct panel_lvds*) ;
 int FUNC_13 (int *) ;

__attribute__((used)) static int FUNC_14(struct platform_device *VAR_7)
{
 struct panel_lvds *VAR_8;
 struct device_node *VAR_9;
 int VAR_10;

 VAR_8 = FUNC_5(&VAR_7->dev, sizeof(*VAR_8), VAR_3);
 if (!VAR_8)
  return -VAR_1;

 VAR_8->dev = &VAR_7->dev;

 VAR_10 = FUNC_12(VAR_8);
 if (VAR_10 < 0)
  return VAR_10;

 VAR_8->supply = FUNC_6(VAR_8->dev, "power");
 if (FUNC_0(VAR_8->supply)) {
  VAR_10 = FUNC_1(VAR_8->supply);

  if (VAR_10 != -VAR_0) {
   if (VAR_10 != -VAR_2)
    FUNC_2(VAR_8->dev, "failed to request regulator: %d\n",
     VAR_10);
   return VAR_10;
  }

  VAR_8->supply = ((void*)0);
 }


 VAR_8->enable_gpio = FUNC_4(VAR_8->dev, "enable",
           VAR_5);
 if (FUNC_0(VAR_8->enable_gpio)) {
  VAR_10 = FUNC_1(VAR_8->enable_gpio);
  FUNC_2(VAR_8->dev, "failed to request %s GPIO: %d\n",
   "enable", VAR_10);
  return VAR_10;
 }

 VAR_8->reset_gpio = FUNC_4(VAR_8->dev, "reset",
           VAR_4);
 if (FUNC_0(VAR_8->reset_gpio)) {
  VAR_10 = FUNC_1(VAR_8->reset_gpio);
  FUNC_2(VAR_8->dev, "failed to request %s GPIO: %d\n",
   "reset", VAR_10);
  return VAR_10;
 }

 VAR_9 = FUNC_11(VAR_8->dev->of_node, "backlight", 0);
 if (VAR_9) {
  VAR_8->backlight = FUNC_9(VAR_9);
  FUNC_10(VAR_9);

  if (!VAR_8->backlight)
   return -VAR_2;
 }
 FUNC_8(&VAR_8->panel);
 VAR_8->panel.dev = VAR_8->dev;
 VAR_8->panel.funcs = &VAR_6;

 VAR_10 = FUNC_7(&VAR_8->panel);
 if (VAR_10 < 0)
  goto error;

 FUNC_3(VAR_8->dev, VAR_8);
 return 0;

error:
 FUNC_13(&VAR_8->backlight->dev);
 return VAR_10;
}
