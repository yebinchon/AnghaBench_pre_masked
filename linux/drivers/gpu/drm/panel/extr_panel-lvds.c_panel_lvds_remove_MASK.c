
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct platform_device {int dev; } ;
struct panel_lvds {TYPE_1__* backlight; int panel; } ;
struct TYPE_2__ {int dev; } ;


 struct panel_lvds* FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct platform_device *VAR_0)
{
 struct panel_lvds *VAR_1 = FUNC_0(&VAR_0->dev);

 FUNC_1(&VAR_1->panel);

 FUNC_2(&VAR_1->panel);

 if (VAR_1->backlight)
  FUNC_3(&VAR_1->backlight->dev);

 return 0;
}
