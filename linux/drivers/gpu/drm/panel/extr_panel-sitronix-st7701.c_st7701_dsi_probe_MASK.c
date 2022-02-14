
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct st7701_panel_desc {int num_supplies; scalar_t__ panel_sleep_delay; int * supply_names; int lanes; int format; int flags; } ;
struct TYPE_5__ {int * dev; int * funcs; } ;
struct st7701 {struct st7701_panel_desc const* desc; struct mipi_dsi_device* dsi; TYPE_1__ panel; scalar_t__ sleep_delay; int backlight; int reset; TYPE_3__* supplies; } ;
struct mipi_dsi_device {int dev; int lanes; int format; int mode_flags; } ;
struct TYPE_6__ {int supply; } ;


 int FUNC_0 (int *,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,char*,int ) ;
 TYPE_3__* FUNC_4 (int *,int,int,int ) ;
 struct st7701* FUNC_5 (int *,int,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int,TYPE_3__*) ;
 int FUNC_8 (TYPE_1__*) ;
 int FUNC_9 (TYPE_1__*) ;
 int FUNC_10 (struct mipi_dsi_device*) ;
 int FUNC_11 (struct mipi_dsi_device*,struct st7701*) ;
 struct st7701_panel_desc* FUNC_12 (int *) ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_13(struct mipi_dsi_device *VAR_4)
{
 const struct st7701_panel_desc *VAR_5;
 struct st7701 *VAR_6;
 int VAR_7, VAR_8;

 VAR_6 = FUNC_5(&VAR_4->dev, sizeof(*VAR_6), VAR_1);
 if (!VAR_6)
  return -VAR_0;

 VAR_5 = FUNC_12(&VAR_4->dev);
 VAR_4->mode_flags = VAR_5->flags;
 VAR_4->format = VAR_5->format;
 VAR_4->lanes = VAR_5->lanes;

 VAR_6->supplies = FUNC_4(&VAR_4->dev, VAR_5->num_supplies,
     sizeof(*VAR_6->supplies),
     VAR_1);
 if (!VAR_6->supplies)
  return -VAR_0;

 for (VAR_8 = 0; VAR_8 < VAR_5->num_supplies; VAR_8++)
  VAR_6->supplies[VAR_8].supply = VAR_5->supply_names[VAR_8];

 VAR_7 = FUNC_7(&VAR_4->dev, VAR_5->num_supplies,
          VAR_6->supplies);
 if (VAR_7 < 0)
  return VAR_7;

 VAR_6->reset = FUNC_3(&VAR_4->dev, "reset", VAR_2);
 if (FUNC_1(VAR_6->reset)) {
  FUNC_0(&VAR_4->dev, "Couldn't get our reset GPIO\n");
  return FUNC_2(VAR_6->reset);
 }

 VAR_6->backlight = FUNC_6(&VAR_4->dev);
 if (FUNC_1(VAR_6->backlight))
  return FUNC_2(VAR_6->backlight);

 FUNC_9(&VAR_6->panel);
 VAR_6->sleep_delay = 120 + VAR_5->panel_sleep_delay;
 VAR_6->panel.funcs = &VAR_3;
 VAR_6->panel.dev = &VAR_4->dev;

 VAR_7 = FUNC_8(&VAR_6->panel);
 if (VAR_7 < 0)
  return VAR_7;

 FUNC_11(VAR_4, VAR_6);
 VAR_6->dsi = VAR_4;
 VAR_6->desc = VAR_5;

 return FUNC_10(VAR_4);
}
