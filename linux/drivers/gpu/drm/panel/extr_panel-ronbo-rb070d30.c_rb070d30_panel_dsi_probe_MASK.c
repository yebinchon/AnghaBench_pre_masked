
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int * funcs; int * dev; } ;
struct TYPE_4__ {void* shlr; void* updn; void* power; void* reset; } ;
struct rb070d30_panel {TYPE_2__ panel; void* backlight; TYPE_1__ gpios; struct mipi_dsi_device* dsi; void* supply; } ;
struct mipi_dsi_device {int mode_flags; int lanes; int format; int dev; } ;


 int FUNC_0 (int *,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (void*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (void*) ;
 void* FUNC_3 (int *,char*,int ) ;
 struct rb070d30_panel* FUNC_4 (int *,int,int ) ;
 void* FUNC_5 (int *) ;
 void* FUNC_6 (int *,char*) ;
 int FUNC_7 (TYPE_2__*) ;
 int FUNC_8 (TYPE_2__*) ;
 int FUNC_9 (struct mipi_dsi_device*) ;
 int FUNC_10 (struct mipi_dsi_device*,struct rb070d30_panel*) ;
 int VAR_7 ;

__attribute__((used)) static int FUNC_11(struct mipi_dsi_device *VAR_8)
{
 struct rb070d30_panel *VAR_9;
 int VAR_10;

 VAR_9 = FUNC_4(&VAR_8->dev, sizeof(*VAR_9), VAR_1);
 if (!VAR_9)
  return -VAR_0;

 VAR_9->supply = FUNC_6(&VAR_8->dev, "vcc-lcd");
 if (FUNC_1(VAR_9->supply))
  return FUNC_2(VAR_9->supply);

 FUNC_10(VAR_8, VAR_9);
 VAR_9->dsi = VAR_8;

 FUNC_8(&VAR_9->panel);
 VAR_9->panel.dev = &VAR_8->dev;
 VAR_9->panel.funcs = &VAR_7;

 VAR_9->gpios.reset = FUNC_3(&VAR_8->dev, "reset", VAR_2);
 if (FUNC_1(VAR_9->gpios.reset)) {
  FUNC_0(&VAR_8->dev, "Couldn't get our reset GPIO\n");
  return FUNC_2(VAR_9->gpios.reset);
 }

 VAR_9->gpios.power = FUNC_3(&VAR_8->dev, "power", VAR_2);
 if (FUNC_1(VAR_9->gpios.power)) {
  FUNC_0(&VAR_8->dev, "Couldn't get our power GPIO\n");
  return FUNC_2(VAR_9->gpios.power);
 }





 VAR_9->gpios.updn = FUNC_3(&VAR_8->dev, "updn", VAR_2);
 if (FUNC_1(VAR_9->gpios.updn)) {
  FUNC_0(&VAR_8->dev, "Couldn't get our updn GPIO\n");
  return FUNC_2(VAR_9->gpios.updn);
 }





 VAR_9->gpios.shlr = FUNC_3(&VAR_8->dev, "shlr", VAR_2);
 if (FUNC_1(VAR_9->gpios.shlr)) {
  FUNC_0(&VAR_8->dev, "Couldn't get our shlr GPIO\n");
  return FUNC_2(VAR_9->gpios.shlr);
 }

 VAR_9->backlight = FUNC_5(&VAR_8->dev);
 if (FUNC_1(VAR_9->backlight)) {
  FUNC_0(&VAR_8->dev, "Couldn't get our backlight\n");
  return FUNC_2(VAR_9->backlight);
 }

 VAR_10 = FUNC_7(&VAR_9->panel);
 if (VAR_10 < 0)
  return VAR_10;

 VAR_8->mode_flags = VAR_5 | VAR_6 | VAR_4;
 VAR_8->format = VAR_3;
 VAR_8->lanes = 4;

 return FUNC_9(VAR_8);
}
