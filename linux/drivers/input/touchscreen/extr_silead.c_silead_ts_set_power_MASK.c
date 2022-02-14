
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct silead_ts_data {scalar_t__ gpio_power; } ;
struct i2c_client {int dummy; } ;
typedef enum silead_ts_power { ____Placeholder_silead_ts_power } silead_ts_power ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__,int) ;
 struct silead_ts_data* FUNC_1 (struct i2c_client*) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct i2c_client *VAR_1,
    enum silead_ts_power VAR_2)
{
 struct silead_ts_data *VAR_3 = FUNC_1(VAR_1);

 if (VAR_3->gpio_power) {
  FUNC_0(VAR_3->gpio_power, VAR_2);
  FUNC_2(VAR_0);
 }
}
