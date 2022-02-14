
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pmbus_driver_info {int dummy; } ;
struct ltc2978_data {int iin_max; } ;
struct i2c_client {int dummy; } ;


 int VAR_0 ;


 int FUNC_0 (struct i2c_client*,int,int) ;
 int FUNC_1 (struct ltc2978_data*,struct i2c_client*,int,int ,int *) ;
 struct pmbus_driver_info* FUNC_2 (struct i2c_client*) ;
 struct ltc2978_data* FUNC_3 (struct pmbus_driver_info const*) ;

__attribute__((used)) static int FUNC_4(struct i2c_client *VAR_1, int VAR_2, int VAR_3)
{
 const struct pmbus_driver_info *VAR_4 = FUNC_2(VAR_1);
 struct ltc2978_data *VAR_5 = FUNC_3(VAR_4);
 int VAR_6;

 switch (VAR_3) {
 case 129:
  VAR_6 = FUNC_1(VAR_5, VAR_1, VAR_2, VAR_0,
      &VAR_5->iin_max);
  break;
 case 128:
  VAR_6 = 0;
  break;
 default:
  VAR_6 = FUNC_0(VAR_1, VAR_2, VAR_3);
  break;
 }
 return VAR_6;
}
