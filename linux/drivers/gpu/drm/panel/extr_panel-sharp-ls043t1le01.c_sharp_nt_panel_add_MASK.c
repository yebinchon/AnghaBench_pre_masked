
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {struct device* dev; int * funcs; } ;
struct sharp_nt_panel {TYPE_2__ base; TYPE_1__* dsi; int * backlight; int * reset_gpio; int * supply; int * mode; } ;
struct device {int dummy; } ;
struct TYPE_4__ {struct device dev; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int VAR_1 ;
 int FUNC_2 (struct device*,char*,int) ;
 int * FUNC_3 (struct device*,char*,int ) ;
 int * FUNC_4 (struct device*) ;
 int * FUNC_5 (struct device*,char*) ;
 int FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (TYPE_2__*) ;
 int FUNC_8 (int *,int ) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_9(struct sharp_nt_panel *VAR_3)
{
 struct device *VAR_4 = &VAR_3->dsi->dev;

 VAR_3->mode = &VAR_1;

 VAR_3->supply = FUNC_5(VAR_4, "avdd");
 if (FUNC_0(VAR_3->supply))
  return FUNC_1(VAR_3->supply);

 VAR_3->reset_gpio = FUNC_3(VAR_4, "reset", VAR_0);
 if (FUNC_0(VAR_3->reset_gpio)) {
  FUNC_2(VAR_4, "cannot get reset-gpios %ld\n",
   FUNC_1(VAR_3->reset_gpio));
  VAR_3->reset_gpio = ((void*)0);
 } else {
  FUNC_8(VAR_3->reset_gpio, 0);
 }

 VAR_3->backlight = FUNC_4(VAR_4);

 if (FUNC_0(VAR_3->backlight))
  return FUNC_1(VAR_3->backlight);

 FUNC_7(&VAR_3->base);
 VAR_3->base.funcs = &VAR_2;
 VAR_3->base.dev = &VAR_3->dsi->dev;

 return FUNC_6(&VAR_3->base);
}
