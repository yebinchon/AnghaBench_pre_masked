
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pixcir_i2c_ts_data {int gpio_reset; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;

__attribute__((used)) static void FUNC_4(struct pixcir_i2c_ts_data *VAR_0)
{
 if (!FUNC_0(VAR_0->gpio_reset)) {
  FUNC_1(VAR_0->gpio_reset, 1);
  FUNC_3(100);
  FUNC_1(VAR_0->gpio_reset, 0);

  FUNC_2(100);
 }
}
