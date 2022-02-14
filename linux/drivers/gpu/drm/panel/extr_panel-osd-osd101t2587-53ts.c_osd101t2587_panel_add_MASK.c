
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {struct device* dev; int * funcs; } ;
struct osd101t2587_panel {TYPE_2__ base; TYPE_1__* dsi; int backlight; int supply; } ;
struct device {int dummy; } ;
struct TYPE_4__ {struct device dev; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct device*) ;
 int FUNC_3 (struct device*,char*) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_2__*) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_6(struct osd101t2587_panel *VAR_1)
{
 struct device *VAR_2 = &VAR_1->dsi->dev;

 VAR_1->supply = FUNC_3(VAR_2, "power");
 if (FUNC_0(VAR_1->supply))
  return FUNC_1(VAR_1->supply);

 VAR_1->backlight = FUNC_2(VAR_2);
 if (FUNC_0(VAR_1->backlight))
  return FUNC_1(VAR_1->backlight);

 FUNC_5(&VAR_1->base);
 VAR_1->base.funcs = &VAR_0;
 VAR_1->base.dev = &VAR_1->dsi->dev;

 return FUNC_4(&VAR_1->base);
}
