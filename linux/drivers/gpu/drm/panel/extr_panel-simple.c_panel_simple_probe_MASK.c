
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int * funcs; struct device* dev; } ;
struct panel_simple {int enabled; int prepared; TYPE_2__* backlight; TYPE_1__* ddc; TYPE_3__ base; int enable_gpio; int supply; int no_hpd; struct panel_desc const* desc; } ;
struct panel_desc {int dummy; } ;
struct display_timing {int dummy; } ;
struct device_node {int dummy; } ;
struct device {int of_node; } ;
struct TYPE_6__ {int dev; } ;
struct TYPE_5__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct device*,char*,int) ;
 int FUNC_3 (struct device*,struct panel_simple*) ;
 int FUNC_4 (struct device*,char*,int ) ;
 struct panel_simple* FUNC_5 (struct device*,int,int ) ;
 int FUNC_6 (struct device*,char*) ;
 int FUNC_7 (TYPE_3__*) ;
 int FUNC_8 (TYPE_3__*) ;
 TYPE_2__* FUNC_9 (struct device_node*) ;
 TYPE_1__* FUNC_10 (struct device_node*) ;
 int FUNC_11 (int ,char*,struct display_timing*) ;
 int FUNC_12 (struct device_node*) ;
 struct device_node* FUNC_13 (int ,char*,int ) ;
 int FUNC_14 (int ,char*) ;
 int VAR_4 ;
 int FUNC_15 (struct device*,struct panel_simple*,struct display_timing*) ;
 int FUNC_16 (int *) ;

__attribute__((used)) static int FUNC_17(struct device *VAR_5, const struct panel_desc *VAR_6)
{
 struct device_node *VAR_7, *VAR_8;
 struct panel_simple *VAR_9;
 struct display_timing VAR_10;
 int VAR_11;

 VAR_9 = FUNC_5(VAR_5, sizeof(*VAR_9), VAR_2);
 if (!VAR_9)
  return -VAR_0;

 VAR_9->enabled = 0;
 VAR_9->prepared = 0;
 VAR_9->desc = VAR_6;

 VAR_9->no_hpd = FUNC_14(VAR_5->of_node, "no-hpd");

 VAR_9->supply = FUNC_6(VAR_5, "power");
 if (FUNC_0(VAR_9->supply))
  return FUNC_1(VAR_9->supply);

 VAR_9->enable_gpio = FUNC_4(VAR_5, "enable",
           VAR_3);
 if (FUNC_0(VAR_9->enable_gpio)) {
  VAR_11 = FUNC_1(VAR_9->enable_gpio);
  if (VAR_11 != -VAR_1)
   FUNC_2(VAR_5, "failed to request GPIO: %d\n", VAR_11);
  return VAR_11;
 }

 VAR_7 = FUNC_13(VAR_5->of_node, "backlight", 0);
 if (VAR_7) {
  VAR_9->backlight = FUNC_9(VAR_7);
  FUNC_12(VAR_7);

  if (!VAR_9->backlight)
   return -VAR_1;
 }

 VAR_8 = FUNC_13(VAR_5->of_node, "ddc-i2c-bus", 0);
 if (VAR_8) {
  VAR_9->ddc = FUNC_10(VAR_8);
  FUNC_12(VAR_8);

  if (!VAR_9->ddc) {
   VAR_11 = -VAR_1;
   goto free_backlight;
  }
 }

 if (!FUNC_11(VAR_5->of_node, "panel-timing", &VAR_10))
  FUNC_15(VAR_5, VAR_9, &VAR_10);

 FUNC_8(&VAR_9->base);
 VAR_9->base.dev = VAR_5;
 VAR_9->base.funcs = &VAR_4;

 VAR_11 = FUNC_7(&VAR_9->base);
 if (VAR_11 < 0)
  goto free_ddc;

 FUNC_3(VAR_5, VAR_9);

 return 0;

free_ddc:
 if (VAR_9->ddc)
  FUNC_16(&VAR_9->ddc->dev);
free_backlight:
 if (VAR_9->backlight)
  FUNC_16(&VAR_9->backlight->dev);

 return VAR_11;
}
