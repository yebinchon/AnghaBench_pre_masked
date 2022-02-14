
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pmbus_driver_info {int dummy; } ;
struct ltc2978_data {int pin_min; int pin_max; int iin_min; int iin_max; } ;
struct i2c_client {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;






 int FUNC_0 (struct i2c_client*,int,int) ;
 int FUNC_1 (struct ltc2978_data*,struct i2c_client*,int,int ,int *) ;
 int FUNC_2 (struct ltc2978_data*,struct i2c_client*,int,int ,int *) ;
 struct pmbus_driver_info* FUNC_3 (struct i2c_client*) ;
 struct ltc2978_data* FUNC_4 (struct pmbus_driver_info const*) ;

__attribute__((used)) static int FUNC_5(struct i2c_client *VAR_4, int VAR_5, int VAR_6)
{
 const struct pmbus_driver_info *VAR_7 = FUNC_3(VAR_4);
 struct ltc2978_data *VAR_8 = FUNC_4(VAR_7);
 int VAR_9;

 switch (VAR_6) {
 case 133:
  VAR_9 = FUNC_1(VAR_8, VAR_4, VAR_5, VAR_1,
      &VAR_8->iin_max);
  break;
 case 132:
  VAR_9 = FUNC_2(VAR_8, VAR_4, VAR_5, VAR_0,
      &VAR_8->iin_min);
  break;
 case 131:
  VAR_9 = FUNC_1(VAR_8, VAR_4, VAR_5, VAR_3,
      &VAR_8->pin_max);
  break;
 case 130:
  VAR_9 = FUNC_2(VAR_8, VAR_4, VAR_5, VAR_2,
      &VAR_8->pin_min);
  break;
 case 129:
 case 128:
  VAR_9 = 0;
  break;
 default:
  VAR_9 = FUNC_0(VAR_4, VAR_5, VAR_6);
  break;
 }
 return VAR_9;
}
