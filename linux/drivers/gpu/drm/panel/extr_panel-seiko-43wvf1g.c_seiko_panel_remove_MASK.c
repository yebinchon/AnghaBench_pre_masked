
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct seiko_panel {TYPE_1__* backlight; int base; } ;
struct platform_device {int dev; } ;
struct TYPE_2__ {int dev; } ;


 struct seiko_panel* FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct platform_device *VAR_0)
{
 struct seiko_panel *VAR_1 = FUNC_0(&VAR_0->dev);

 FUNC_1(&VAR_1->base);

 FUNC_3(&VAR_1->base);

 if (VAR_1->backlight)
  FUNC_2(&VAR_1->backlight->dev);

 return 0;
}
