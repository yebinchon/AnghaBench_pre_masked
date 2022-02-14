
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tosa_bt_data {int gpio_reset; int gpio_pwr; } ;


 int FUNC_0 (int ,int) ;
 int FUNC_1 (int) ;

__attribute__((used)) static void FUNC_2(struct tosa_bt_data *VAR_0)
{
 FUNC_0(VAR_0->gpio_reset, 1);
 FUNC_1(10);
 FUNC_0(VAR_0->gpio_pwr, 0);
 FUNC_0(VAR_0->gpio_reset, 0);
}
