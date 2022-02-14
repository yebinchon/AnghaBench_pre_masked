
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct zl6100_data {int access; } ;
struct pmbus_driver_info {int dummy; } ;
struct i2c_client {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 struct pmbus_driver_info* FUNC_1 (struct i2c_client*) ;
 int FUNC_2 (struct i2c_client*,int,int ) ;
 struct zl6100_data* FUNC_3 (struct pmbus_driver_info const*) ;
 int FUNC_4 (struct zl6100_data*) ;

__attribute__((used)) static int FUNC_5(struct i2c_client *VAR_1, int VAR_2, u8 VAR_3)
{
 const struct pmbus_driver_info *VAR_4 = FUNC_1(VAR_1);
 struct zl6100_data *VAR_5 = FUNC_3(VAR_4);
 int VAR_6;

 if (VAR_2 > 0)
  return -VAR_0;

 FUNC_4(VAR_5);
 VAR_6 = FUNC_2(VAR_1, VAR_2, VAR_3);
 VAR_5->access = FUNC_0();

 return VAR_6;
}
