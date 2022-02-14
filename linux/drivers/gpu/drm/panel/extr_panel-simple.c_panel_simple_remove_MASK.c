
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct panel_simple {TYPE_1__* backlight; TYPE_2__* ddc; int base; } ;
struct device {int dummy; } ;
struct TYPE_4__ {int dev; } ;
struct TYPE_3__ {int dev; } ;


 struct panel_simple* FUNC_0 (struct device*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct device *VAR_0)
{
 struct panel_simple *VAR_1 = FUNC_0(VAR_0);

 FUNC_1(&VAR_1->base);

 FUNC_2(&VAR_1->base);
 FUNC_3(&VAR_1->base);

 if (VAR_1->ddc)
  FUNC_4(&VAR_1->ddc->dev);

 if (VAR_1->backlight)
  FUNC_4(&VAR_1->backlight->dev);

 return 0;
}
