
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct panel_desc {int num_supplies; int * supply_names; } ;
struct device {int dummy; } ;
struct mipi_dsi_device {struct device dev; } ;
struct TYPE_5__ {struct device* dev; int * funcs; } ;
struct innolux_panel {struct mipi_dsi_device* link; TYPE_1__ base; int * backlight; int * enable_gpio; TYPE_3__* supplies; struct panel_desc const* desc; } ;
struct TYPE_6__ {int supply; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct device*,char*,int) ;
 int * FUNC_3 (struct device*,char*,int ) ;
 TYPE_3__* FUNC_4 (struct device*,int,int,int ) ;
 struct innolux_panel* FUNC_5 (struct device*,int,int ) ;
 int * FUNC_6 (struct device*) ;
 int FUNC_7 (struct device*,int,TYPE_3__*) ;
 int FUNC_8 (TYPE_1__*) ;
 int FUNC_9 (TYPE_1__*) ;
 int VAR_3 ;
 int FUNC_10 (struct mipi_dsi_device*,struct innolux_panel*) ;

__attribute__((used)) static int FUNC_11(struct mipi_dsi_device *VAR_4,
        const struct panel_desc *VAR_5)
{
 struct innolux_panel *VAR_6;
 struct device *VAR_7 = &VAR_4->dev;
 int VAR_8, VAR_9;

 VAR_6 = FUNC_5(VAR_7, sizeof(*VAR_6), VAR_1);
 if (!VAR_6)
  return -VAR_0;

 VAR_6->desc = VAR_5;

 VAR_6->supplies = FUNC_4(VAR_7, VAR_5->num_supplies,
      sizeof(*VAR_6->supplies),
      VAR_1);
 if (!VAR_6->supplies)
  return -VAR_0;

 for (VAR_9 = 0; VAR_9 < VAR_5->num_supplies; VAR_9++)
  VAR_6->supplies[VAR_9].supply = VAR_5->supply_names[VAR_9];

 VAR_8 = FUNC_7(VAR_7, VAR_5->num_supplies,
          VAR_6->supplies);
 if (VAR_8 < 0)
  return VAR_8;

 VAR_6->enable_gpio = FUNC_3(VAR_7, "enable",
             VAR_2);
 if (FUNC_0(VAR_6->enable_gpio)) {
  VAR_8 = FUNC_1(VAR_6->enable_gpio);
  FUNC_2(VAR_7, "failed to get enable gpio: %d\n", VAR_8);
  VAR_6->enable_gpio = ((void*)0);
 }

 VAR_6->backlight = FUNC_6(VAR_7);
 if (FUNC_0(VAR_6->backlight))
  return FUNC_1(VAR_6->backlight);

 FUNC_9(&VAR_6->base);
 VAR_6->base.funcs = &VAR_3;
 VAR_6->base.dev = VAR_7;

 VAR_8 = FUNC_8(&VAR_6->base);
 if (VAR_8 < 0)
  return VAR_8;

 FUNC_10(VAR_4, VAR_6);
 VAR_6->link = VAR_4;

 return 0;
}
