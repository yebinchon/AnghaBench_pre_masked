
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_12__ {int * funcs; struct device* dev; } ;
struct s6e3ha2 {TYPE_6__* bl_dev; TYPE_2__ panel; TYPE_6__* enable_gpio; TYPE_6__* reset_gpio; TYPE_5__* supplies; int desc; struct device* dev; } ;
struct device {int dummy; } ;
struct mipi_dsi_device {int lanes; int mode_flags; int format; struct device dev; } ;
struct TYPE_11__ {int power; int brightness; int max_brightness; } ;
struct TYPE_14__ {TYPE_1__ props; } ;
struct TYPE_13__ {char* supply; } ;


 int FUNC_0 (TYPE_5__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (TYPE_6__*) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (TYPE_6__*) ;
 int VAR_7 ;
 int VAR_8 ;
 TYPE_6__* FUNC_3 (char*,struct device*,struct s6e3ha2*,int *,int *) ;
 int FUNC_4 (TYPE_6__*) ;
 int FUNC_5 (struct device*,char*,...) ;
 void* FUNC_6 (struct device*,char*,int ) ;
 struct s6e3ha2* FUNC_7 (struct device*,int,int ) ;
 int FUNC_8 (struct device*,int ,TYPE_5__*) ;
 int FUNC_9 (TYPE_2__*) ;
 int FUNC_10 (TYPE_2__*) ;
 int FUNC_11 (TYPE_2__*) ;
 int FUNC_12 (struct mipi_dsi_device*) ;
 int FUNC_13 (struct mipi_dsi_device*,struct s6e3ha2*) ;
 int FUNC_14 (struct device*) ;
 int VAR_9 ;
 int VAR_10 ;

__attribute__((used)) static int FUNC_15(struct mipi_dsi_device *VAR_11)
{
 struct device *VAR_12 = &VAR_11->dev;
 struct s6e3ha2 *VAR_13;
 int VAR_14;

 VAR_13 = FUNC_7(VAR_12, sizeof(*VAR_13), VAR_2);
 if (!VAR_13)
  return -VAR_0;

 FUNC_13(VAR_11, VAR_13);

 VAR_13->dev = VAR_12;
 VAR_13->desc = FUNC_14(VAR_12);

 VAR_11->lanes = 4;
 VAR_11->format = VAR_6;
 VAR_11->mode_flags = VAR_5;

 VAR_13->supplies[0].supply = "vdd3";
 VAR_13->supplies[1].supply = "vci";

 VAR_14 = FUNC_8(VAR_12, FUNC_0(VAR_13->supplies),
          VAR_13->supplies);
 if (VAR_14 < 0) {
  FUNC_5(VAR_12, "failed to get regulators: %d\n", VAR_14);
  return VAR_14;
 }

 VAR_13->reset_gpio = FUNC_6(VAR_12, "reset", VAR_4);
 if (FUNC_1(VAR_13->reset_gpio)) {
  FUNC_5(VAR_12, "cannot get reset-gpios %ld\n",
   FUNC_2(VAR_13->reset_gpio));
  return FUNC_2(VAR_13->reset_gpio);
 }

 VAR_13->enable_gpio = FUNC_6(VAR_12, "enable", VAR_3);
 if (FUNC_1(VAR_13->enable_gpio)) {
  FUNC_5(VAR_12, "cannot get enable-gpios %ld\n",
   FUNC_2(VAR_13->enable_gpio));
  return FUNC_2(VAR_13->enable_gpio);
 }

 VAR_13->bl_dev = FUNC_3("s6e3ha2", VAR_12, VAR_13,
      &VAR_9, ((void*)0));
 if (FUNC_1(VAR_13->bl_dev)) {
  FUNC_5(VAR_12, "failed to register backlight device\n");
  return FUNC_2(VAR_13->bl_dev);
 }

 VAR_13->bl_dev->props.max_brightness = VAR_8;
 VAR_13->bl_dev->props.brightness = VAR_7;
 VAR_13->bl_dev->props.power = VAR_1;

 FUNC_10(&VAR_13->panel);
 VAR_13->panel.dev = VAR_12;
 VAR_13->panel.funcs = &VAR_10;

 VAR_14 = FUNC_9(&VAR_13->panel);
 if (VAR_14 < 0)
  goto unregister_backlight;

 VAR_14 = FUNC_12(VAR_11);
 if (VAR_14 < 0)
  goto remove_panel;

 return VAR_14;

remove_panel:
 FUNC_11(&VAR_13->panel);

unregister_backlight:
 FUNC_4(VAR_13->bl_dev);

 return VAR_14;
}
