
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_14__ {int * funcs; struct device* dev; } ;
struct otm8009a {TYPE_6__* bl_dev; TYPE_3__ panel; struct device* dev; TYPE_6__* supply; TYPE_6__* reset_gpio; } ;
struct device {int dummy; } ;
struct mipi_dsi_device {int lanes; int mode_flags; TYPE_1__* host; int format; struct device dev; } ;
struct TYPE_13__ {int type; int power; int brightness; int max_brightness; } ;
struct TYPE_15__ {TYPE_2__ props; } ;
struct TYPE_12__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (TYPE_6__*) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_1 (TYPE_6__*) ;
 int FUNC_2 (TYPE_6__*) ;
 int FUNC_3 (struct device*,char*,...) ;
 int FUNC_4 (struct device*) ;
 TYPE_6__* FUNC_5 (struct device*,int ,int ,struct otm8009a*,int *,int *) ;
 TYPE_6__* FUNC_6 (struct device*,char*,int ) ;
 struct otm8009a* FUNC_7 (struct device*,int,int ) ;
 TYPE_6__* FUNC_8 (struct device*,char*) ;
 int FUNC_9 (TYPE_3__*) ;
 int FUNC_10 (TYPE_3__*) ;
 int FUNC_11 (TYPE_3__*) ;
 int FUNC_12 (struct mipi_dsi_device*) ;
 int FUNC_13 (struct mipi_dsi_device*,struct otm8009a*) ;
 int VAR_12 ;
 int VAR_13 ;

__attribute__((used)) static int FUNC_14(struct mipi_dsi_device *VAR_14)
{
 struct device *VAR_15 = &VAR_14->dev;
 struct otm8009a *VAR_16;
 int VAR_17;

 VAR_16 = FUNC_7(VAR_15, sizeof(*VAR_16), VAR_4);
 if (!VAR_16)
  return -VAR_1;

 VAR_16->reset_gpio = FUNC_6(VAR_15, "reset", VAR_5);
 if (FUNC_0(VAR_16->reset_gpio)) {
  FUNC_3(VAR_15, "cannot get reset-gpio\n");
  return FUNC_1(VAR_16->reset_gpio);
 }

 VAR_16->supply = FUNC_8(VAR_15, "power");
 if (FUNC_0(VAR_16->supply)) {
  VAR_17 = FUNC_1(VAR_16->supply);
  if (VAR_17 != -VAR_2)
   FUNC_3(VAR_15, "failed to request regulator: %d\n", VAR_17);
  return VAR_17;
 }

 FUNC_13(VAR_14, VAR_16);

 VAR_16->dev = VAR_15;

 VAR_14->lanes = 2;
 VAR_14->format = VAR_6;
 VAR_14->mode_flags = VAR_8 | VAR_9 |
     VAR_7;

 FUNC_10(&VAR_16->panel);
 VAR_16->panel.dev = VAR_15;
 VAR_16->panel.funcs = &VAR_13;

 VAR_16->bl_dev = FUNC_5(VAR_15, FUNC_4(VAR_15),
           VAR_14->host->dev, VAR_16,
           &VAR_12,
           ((void*)0));
 if (FUNC_0(VAR_16->bl_dev)) {
  VAR_17 = FUNC_1(VAR_16->bl_dev);
  FUNC_3(VAR_15, "failed to register backlight: %d\n", VAR_17);
  return VAR_17;
 }

 VAR_16->bl_dev->props.max_brightness = VAR_11;
 VAR_16->bl_dev->props.brightness = VAR_10;
 VAR_16->bl_dev->props.power = VAR_3;
 VAR_16->bl_dev->props.type = VAR_0;

 FUNC_9(&VAR_16->panel);

 VAR_17 = FUNC_12(VAR_14);
 if (VAR_17 < 0) {
  FUNC_3(VAR_15, "mipi_dsi_attach failed. Is host ready?\n");
  FUNC_11(&VAR_16->panel);
  FUNC_2(VAR_16->bl_dev);
  return VAR_17;
 }

 return 0;
}
