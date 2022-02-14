
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tosa_bt_data {int gpio_reset; int gpio_pwr; } ;
struct rfkill {int dummy; } ;
struct TYPE_2__ {struct tosa_bt_data* platform_data; } ;
struct platform_device {TYPE_1__ dev; } ;


 int FUNC_0 (int ) ;
 struct rfkill* FUNC_1 (struct platform_device*) ;
 int FUNC_2 (struct platform_device*,int *) ;
 int FUNC_3 (struct rfkill*) ;
 int FUNC_4 (struct rfkill*) ;
 int FUNC_5 (struct tosa_bt_data*) ;

__attribute__((used)) static int FUNC_6(struct platform_device *VAR_0)
{
 struct tosa_bt_data *VAR_1 = VAR_0->dev.platform_data;
 struct rfkill *VAR_2 = FUNC_1(VAR_0);

 FUNC_2(VAR_0, ((void*)0));

 if (VAR_2) {
  FUNC_4(VAR_2);
  FUNC_3(VAR_2);
 }
 VAR_2 = ((void*)0);

 FUNC_5(VAR_1);

 FUNC_0(VAR_1->gpio_pwr);
 FUNC_0(VAR_1->gpio_reset);

 return 0;
}
