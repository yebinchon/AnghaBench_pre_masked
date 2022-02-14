
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct led_nu801_platform_data* platform_data; } ;
struct platform_device {TYPE_1__ dev; } ;
struct led_nu801_platform_data {int num_controllers; int * template; } ;
struct led_nu801_data {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct led_nu801_data*) ;
 struct led_nu801_data* FUNC_1 (int,int ) ;
 int FUNC_2 (int *,struct led_nu801_data*,TYPE_1__*) ;
 int FUNC_3 (struct led_nu801_data*) ;
 struct led_nu801_data* FUNC_4 (struct platform_device*) ;
 int FUNC_5 (struct platform_device*,struct led_nu801_data*) ;

__attribute__((used)) static int FUNC_6(struct platform_device *VAR_3)
{
 struct led_nu801_platform_data *VAR_4 = VAR_3->dev.platform_data;
 struct led_nu801_data *VAR_5;
 int VAR_6, VAR_7 = 0;

 if (!(VAR_4 && VAR_4->num_controllers)) {
  VAR_5 = FUNC_4(VAR_3);
  if (!VAR_5)
   return -VAR_0;
 }

 VAR_5 = FUNC_1(sizeof(struct led_nu801_data) *
         VAR_4->num_controllers, VAR_2);
 if (!VAR_5)
  return -VAR_1;

 for (VAR_6 = 0; VAR_6 < VAR_4->num_controllers; VAR_6++) {
  VAR_7 = FUNC_2(&VAR_4->template[VAR_6],
           &VAR_5[VAR_6],
           &VAR_3->dev);
  if (VAR_7 < 0)
   goto err;
 }

 FUNC_5(VAR_3, VAR_5);

 return 0;

err:
 for (VAR_6 = VAR_6 - 1; VAR_6 >= 0; VAR_6--)
  FUNC_3(&VAR_5[VAR_6]);

 FUNC_0(VAR_5);

 return VAR_7;
}
