
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_13__ {int * funcs; struct device* dev; } ;
struct s6e63j0x03 {TYPE_6__* bl_dev; TYPE_2__ panel; TYPE_6__* reset_gpio; TYPE_5__* supplies; struct device* dev; } ;
struct device {int dummy; } ;
struct mipi_dsi_device {int lanes; int mode_flags; int format; struct device dev; } ;
struct TYPE_12__ {int power; int brightness; int max_brightness; } ;
struct TYPE_15__ {TYPE_1__ props; } ;
struct TYPE_14__ {char* supply; } ;


 int FUNC_0 (TYPE_5__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (TYPE_6__*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (TYPE_6__*) ;
 TYPE_6__* FUNC_3 (char*,struct device*,struct s6e63j0x03*,int *,int *) ;
 int FUNC_4 (TYPE_6__*) ;
 int FUNC_5 (struct device*,char*,...) ;
 TYPE_6__* FUNC_6 (struct device*,char*,int ) ;
 struct s6e63j0x03* FUNC_7 (struct device*,int,int ) ;
 int FUNC_8 (struct device*,int ,TYPE_5__*) ;
 int FUNC_9 (TYPE_2__*) ;
 int FUNC_10 (TYPE_2__*) ;
 int FUNC_11 (TYPE_2__*) ;
 int FUNC_12 (struct mipi_dsi_device*) ;
 int FUNC_13 (struct mipi_dsi_device*,struct s6e63j0x03*) ;
 int VAR_8 ;
 int VAR_9 ;

__attribute__((used)) static int FUNC_14(struct mipi_dsi_device *VAR_10)
{
 struct device *VAR_11 = &VAR_10->dev;
 struct s6e63j0x03 *VAR_12;
 int VAR_13;

 VAR_12 = FUNC_7(VAR_11, sizeof(struct s6e63j0x03), VAR_3);
 if (!VAR_12)
  return -VAR_1;

 FUNC_13(VAR_10, VAR_12);

 VAR_12->dev = VAR_11;

 VAR_10->lanes = 1;
 VAR_10->format = VAR_6;
 VAR_10->mode_flags = VAR_7;

 VAR_12->supplies[0].supply = "vdd3";
 VAR_12->supplies[1].supply = "vci";
 VAR_13 = FUNC_8(VAR_11, FUNC_0(VAR_12->supplies),
          VAR_12->supplies);
 if (VAR_13 < 0) {
  FUNC_5(VAR_11, "failed to get regulators: %d\n", VAR_13);
  return VAR_13;
 }

 VAR_12->reset_gpio = FUNC_6(VAR_11, "reset", VAR_4);
 if (FUNC_1(VAR_12->reset_gpio)) {
  FUNC_5(VAR_11, "cannot get reset-gpio: %ld\n",
    FUNC_2(VAR_12->reset_gpio));
  return FUNC_2(VAR_12->reset_gpio);
 }

 FUNC_10(&VAR_12->panel);
 VAR_12->panel.dev = VAR_11;
 VAR_12->panel.funcs = &VAR_9;

 VAR_12->bl_dev = FUNC_3("s6e63j0x03", VAR_11, VAR_12,
      &VAR_8, ((void*)0));
 if (FUNC_1(VAR_12->bl_dev)) {
  FUNC_5(VAR_11, "failed to register backlight device\n");
  return FUNC_2(VAR_12->bl_dev);
 }

 VAR_12->bl_dev->props.max_brightness = VAR_5;
 VAR_12->bl_dev->props.brightness = VAR_0;
 VAR_12->bl_dev->props.power = VAR_2;

 VAR_13 = FUNC_9(&VAR_12->panel);
 if (VAR_13 < 0)
  goto unregister_backlight;

 VAR_13 = FUNC_12(VAR_10);
 if (VAR_13 < 0)
  goto remove_panel;

 return VAR_13;

remove_panel:
 FUNC_11(&VAR_12->panel);

unregister_backlight:
 FUNC_4(VAR_12->bl_dev);

 return VAR_13;
}
