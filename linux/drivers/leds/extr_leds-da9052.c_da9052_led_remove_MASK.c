
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int parent; } ;
struct platform_device {TYPE_1__ dev; } ;
struct led_platform_data {int num_leds; } ;
struct da9052_pdata {struct led_platform_data* pled; } ;
struct da9052_led {int cdev; } ;
struct da9052 {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (struct da9052_led*,int ) ;
 struct da9052* FUNC_1 (int ) ;
 struct da9052_pdata* FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 struct da9052_led* FUNC_4 (struct platform_device*) ;

__attribute__((used)) static int FUNC_5(struct platform_device *VAR_1)
{
 struct da9052_led *VAR_2 = FUNC_4(VAR_1);
 struct da9052_pdata *VAR_3;
 struct da9052 *VAR_4;
 struct led_platform_data *VAR_5;
 int VAR_6;

 VAR_4 = FUNC_1(VAR_1->dev.parent);
 VAR_3 = FUNC_2(VAR_4->dev);
 VAR_5 = VAR_3->pled;

 for (VAR_6 = 0; VAR_6 < VAR_5->num_leds; VAR_6++) {
  FUNC_0(&VAR_2[VAR_6], VAR_0);
  FUNC_3(&VAR_2[VAR_6].cdev);
 }

 return 0;
}
