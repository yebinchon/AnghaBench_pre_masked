
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {struct device* dev; int * funcs; } ;
struct kingdisplay_panel {TYPE_2__ base; TYPE_1__* link; int * backlight; int * enable_gpio; int * supply; } ;
struct device {int dummy; } ;
struct TYPE_4__ {struct device dev; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct device*,char*,int) ;
 int * FUNC_3 (struct device*,char*,int ) ;
 int * FUNC_4 (struct device*) ;
 int * FUNC_5 (struct device*,char*) ;
 int FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (TYPE_2__*) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_8(struct kingdisplay_panel *VAR_2)
{
 struct device *VAR_3 = &VAR_2->link->dev;
 int VAR_4;

 VAR_2->supply = FUNC_5(VAR_3, "power");
 if (FUNC_0(VAR_2->supply))
  return FUNC_1(VAR_2->supply);

 VAR_2->enable_gpio = FUNC_3(VAR_3, "enable",
          VAR_0);
 if (FUNC_0(VAR_2->enable_gpio)) {
  VAR_4 = FUNC_1(VAR_2->enable_gpio);
  FUNC_2(VAR_3, "failed to get enable gpio: %d\n", VAR_4);
  VAR_2->enable_gpio = ((void*)0);
 }

 VAR_2->backlight = FUNC_4(VAR_3);
 if (FUNC_0(VAR_2->backlight))
  return FUNC_1(VAR_2->backlight);

 FUNC_7(&VAR_2->base);
 VAR_2->base.funcs = &VAR_1;
 VAR_2->base.dev = &VAR_2->link->dev;

 return FUNC_6(&VAR_2->base);
}
