
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {struct device* dev; int * funcs; } ;
struct sharp_panel {TYPE_2__ base; TYPE_1__* link1; int backlight; int supply; int * mode; } ;
struct device {int dummy; } ;
struct TYPE_4__ {struct device dev; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (struct device*) ;
 int FUNC_3 (struct device*,char*) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_2__*) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_6(struct sharp_panel *VAR_2)
{
 struct device *VAR_3 = &VAR_2->link1->dev;

 VAR_2->mode = &VAR_0;

 VAR_2->supply = FUNC_3(&VAR_2->link1->dev, "power");
 if (FUNC_0(VAR_2->supply))
  return FUNC_1(VAR_2->supply);

 VAR_2->backlight = FUNC_2(VAR_3);

 if (FUNC_0(VAR_2->backlight))
  return FUNC_1(VAR_2->backlight);

 FUNC_5(&VAR_2->base);
 VAR_2->base.funcs = &VAR_1;
 VAR_2->base.dev = &VAR_2->link1->dev;

 return FUNC_4(&VAR_2->base);
}
