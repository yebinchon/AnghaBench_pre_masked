
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct led_nu801_platform_data* platform_data; } ;
struct platform_device {TYPE_1__ dev; } ;
struct led_nu801_platform_data {int num_controllers; } ;
struct led_nu801_data {int dummy; } ;


 int FUNC_0 (struct led_nu801_data*) ;
 int FUNC_1 (struct led_nu801_data*) ;
 struct led_nu801_data* FUNC_2 (struct platform_device*) ;

__attribute__((used)) static int FUNC_3(struct platform_device *VAR_0)
{
 int VAR_1;
 struct led_nu801_platform_data *VAR_2 = VAR_0->dev.platform_data;
 struct led_nu801_data *VAR_3;

 VAR_3 = FUNC_2(VAR_0);

 for (VAR_1 = 0; VAR_1 < VAR_2->num_controllers; VAR_1++)
  FUNC_1(&VAR_3[VAR_1]);

 FUNC_0(VAR_3);

 return 0;
}
