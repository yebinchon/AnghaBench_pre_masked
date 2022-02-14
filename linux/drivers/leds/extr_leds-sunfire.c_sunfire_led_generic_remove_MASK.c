
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sunfire_drvdata {TYPE_1__* leds; } ;
struct platform_device {int dummy; } ;
struct TYPE_2__ {int led_cdev; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 struct sunfire_drvdata* FUNC_1 (struct platform_device*) ;

__attribute__((used)) static int FUNC_2(struct platform_device *VAR_1)
{
 struct sunfire_drvdata *VAR_2 = FUNC_1(VAR_1);
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++)
  FUNC_0(&VAR_2->leds[VAR_3].led_cdev);

 return 0;
}
