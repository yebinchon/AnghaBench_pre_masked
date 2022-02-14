
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int of_node; } ;
struct mipi_dsi_device {int lanes; int format; int mode_flags; TYPE_3__ dev; } ;
struct TYPE_7__ {int * funcs; TYPE_3__* dev; } ;
struct ili9881c {TYPE_1__ panel; int backlight; int reset; int power; struct mipi_dsi_device* dsi; } ;
struct device_node {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_3__*,char*) ;
 int FUNC_3 (TYPE_3__*,char*,int ) ;
 struct ili9881c* FUNC_4 (TYPE_3__*,int,int ) ;
 int FUNC_5 (TYPE_3__*,char*) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (TYPE_1__*) ;
 int VAR_6 ;
 int FUNC_8 (struct mipi_dsi_device*) ;
 int FUNC_9 (struct mipi_dsi_device*,struct ili9881c*) ;
 int FUNC_10 (struct device_node*) ;
 int FUNC_11 (struct device_node*) ;
 struct device_node* FUNC_12 (int ,char*,int ) ;

__attribute__((used)) static int FUNC_13(struct mipi_dsi_device *VAR_7)
{
 struct device_node *VAR_8;
 struct ili9881c *VAR_9;
 int VAR_10;

 VAR_9 = FUNC_4(&VAR_7->dev, sizeof(*VAR_9), VAR_2);
 if (!VAR_9)
  return -VAR_0;
 FUNC_9(VAR_7, VAR_9);
 VAR_9->dsi = VAR_7;

 FUNC_7(&VAR_9->panel);
 VAR_9->panel.dev = &VAR_7->dev;
 VAR_9->panel.funcs = &VAR_6;

 VAR_9->power = FUNC_5(&VAR_7->dev, "power");
 if (FUNC_0(VAR_9->power)) {
  FUNC_2(&VAR_7->dev, "Couldn't get our power regulator\n");
  return FUNC_1(VAR_9->power);
 }

 VAR_9->reset = FUNC_3(&VAR_7->dev, "reset", VAR_3);
 if (FUNC_0(VAR_9->reset)) {
  FUNC_2(&VAR_7->dev, "Couldn't get our reset GPIO\n");
  return FUNC_1(VAR_9->reset);
 }

 VAR_8 = FUNC_12(VAR_7->dev.of_node, "backlight", 0);
 if (VAR_8) {
  VAR_9->backlight = FUNC_10(VAR_8);
  FUNC_11(VAR_8);

  if (!VAR_9->backlight)
   return -VAR_1;
 }

 VAR_10 = FUNC_6(&VAR_9->panel);
 if (VAR_10 < 0)
  return VAR_10;

 VAR_7->mode_flags = VAR_5;
 VAR_7->format = VAR_4;
 VAR_7->lanes = 4;

 return FUNC_8(VAR_7);
}
