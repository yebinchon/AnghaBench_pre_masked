
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct st7789v {TYPE_1__* backlight; int panel; } ;
struct spi_device {int dummy; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 struct st7789v* FUNC_2 (struct spi_device*) ;

__attribute__((used)) static int FUNC_3(struct spi_device *VAR_0)
{
 struct st7789v *VAR_1 = FUNC_2(VAR_0);

 FUNC_0(&VAR_1->panel);

 if (VAR_1->backlight)
  FUNC_1(&VAR_1->backlight->dev);

 return 0;
}
