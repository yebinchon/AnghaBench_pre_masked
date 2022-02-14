
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mipi_dsi_device {int dummy; } ;
struct ili9881c {TYPE_1__* backlight; int panel; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct mipi_dsi_device*) ;
 struct ili9881c* FUNC_2 (struct mipi_dsi_device*) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct mipi_dsi_device *VAR_0)
{
 struct ili9881c *VAR_1 = FUNC_2(VAR_0);

 FUNC_1(VAR_0);
 FUNC_0(&VAR_1->panel);

 if (VAR_1->backlight)
  FUNC_3(&VAR_1->backlight->dev);

 return 0;
}
