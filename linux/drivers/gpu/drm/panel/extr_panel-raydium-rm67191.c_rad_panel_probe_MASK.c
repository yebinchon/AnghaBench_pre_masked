
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {struct device* dev; int * funcs; } ;
struct rad_panel {TYPE_1__ panel; int backlight; int reset; struct mipi_dsi_device* dsi; } ;
struct device {struct device_node* of_node; } ;
struct mipi_dsi_device {int mode_flags; int lanes; int format; struct device dev; } ;
struct device_node {int dummy; } ;
struct backlight_properties {int brightness; int max_brightness; int type; } ;
typedef int bl_props ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct device*,char*,int) ;
 int FUNC_3 (struct device*) ;
 int FUNC_4 (struct device*,struct rad_panel*) ;
 int FUNC_5 (struct device*,char*,int) ;
 int FUNC_6 (struct device*,int ,struct device*,struct mipi_dsi_device*,int *,struct backlight_properties*) ;
 int FUNC_7 (struct device*,char*,int ) ;
 struct rad_panel* FUNC_8 (struct device*,int,int ) ;
 int FUNC_9 (TYPE_1__*) ;
 int FUNC_10 (TYPE_1__*) ;
 int FUNC_11 (TYPE_1__*) ;
 int FUNC_12 (struct backlight_properties*,int ,int) ;
 int FUNC_13 (struct mipi_dsi_device*) ;
 int FUNC_14 (struct mipi_dsi_device*,struct rad_panel*) ;
 int FUNC_15 (struct device_node*,char*,int*) ;
 int VAR_10 ;
 int FUNC_16 (struct rad_panel*) ;
 int VAR_11 ;

__attribute__((used)) static int FUNC_17(struct mipi_dsi_device *VAR_12)
{
 struct device *VAR_13 = &VAR_12->dev;
 struct device_node *VAR_14 = VAR_13->of_node;
 struct rad_panel *VAR_15;
 struct backlight_properties VAR_16;
 int VAR_17;
 u32 VAR_18;

 VAR_15 = FUNC_8(&VAR_12->dev, sizeof(*VAR_15), VAR_2);
 if (!VAR_15)
  return -VAR_1;

 FUNC_14(VAR_12, VAR_15);

 VAR_15->dsi = VAR_12;

 VAR_12->format = VAR_5;
 VAR_12->mode_flags = VAR_8 | VAR_6 |
      VAR_4;

 VAR_17 = FUNC_15(VAR_14, "video-mode", &VAR_18);
 if (!VAR_17) {
  switch (VAR_18) {
  case 0:

   VAR_12->mode_flags |= VAR_7;
   break;
  case 1:

   break;
  case 2:

   VAR_12->mode_flags |= VAR_9;
   break;
  default:
   FUNC_5(VAR_13, "invalid video mode %d\n", VAR_18);
   break;
  }
 }

 VAR_17 = FUNC_15(VAR_14, "dsi-lanes", &VAR_12->lanes);
 if (VAR_17) {
  FUNC_2(VAR_13, "Failed to get dsi-lanes property (%d)\n", VAR_17);
  return VAR_17;
 }

 VAR_15->reset = FUNC_7(VAR_13, "reset", VAR_3);
 if (FUNC_0(VAR_15->reset))
  return FUNC_1(VAR_15->reset);

 FUNC_12(&VAR_16, 0, sizeof(VAR_16));
 VAR_16.type = VAR_0;
 VAR_16.brightness = 255;
 VAR_16.max_brightness = 255;

 VAR_15->backlight = FUNC_6(VAR_13, FUNC_3(VAR_13),
         VAR_13, VAR_12, &VAR_10,
         &VAR_16);
 if (FUNC_0(VAR_15->backlight)) {
  VAR_17 = FUNC_1(VAR_15->backlight);
  FUNC_2(VAR_13, "Failed to register backlight (%d)\n", VAR_17);
  return VAR_17;
 }

 VAR_17 = FUNC_16(VAR_15);
 if (VAR_17)
  return VAR_17;

 FUNC_10(&VAR_15->panel);
 VAR_15->panel.funcs = &VAR_11;
 VAR_15->panel.dev = VAR_13;
 FUNC_4(VAR_13, VAR_15);

 VAR_17 = FUNC_9(&VAR_15->panel);
 if (VAR_17)
  return VAR_17;

 VAR_17 = FUNC_13(VAR_12);
 if (VAR_17)
  FUNC_11(&VAR_15->panel);

 return VAR_17;
}
