
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_smbus_alert_setup {int dummy; } ;
struct i2c_client {int dummy; } ;
struct i2c_board_info {struct i2c_smbus_alert_setup* platform_data; int member_0; } ;
struct i2c_adapter {int dummy; } ;


 int FUNC_0 (char*,int) ;
 struct i2c_client* FUNC_1 (struct i2c_adapter*,struct i2c_board_info*) ;

struct i2c_client *FUNC_2(struct i2c_adapter *VAR_0,
      struct i2c_smbus_alert_setup *VAR_1)
{
 struct i2c_board_info VAR_2 = {
  FUNC_0("smbus_alert", 0x0c),
  .platform_data = VAR_1,
 };

 return FUNC_1(VAR_0, &VAR_2);
}
