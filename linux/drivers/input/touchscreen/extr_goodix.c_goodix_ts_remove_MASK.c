
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_client {int dummy; } ;
struct goodix_ts_data {int firmware_loading_complete; scalar_t__ gpiod_rst; scalar_t__ gpiod_int; } ;


 struct goodix_ts_data* FUNC_0 (struct i2c_client*) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(struct i2c_client *VAR_0)
{
 struct goodix_ts_data *VAR_1 = FUNC_0(VAR_0);

 if (VAR_1->gpiod_int && VAR_1->gpiod_rst)
  FUNC_1(&VAR_1->firmware_loading_complete);

 return 0;
}
