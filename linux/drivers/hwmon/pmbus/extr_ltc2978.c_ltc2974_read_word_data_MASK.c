
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pmbus_driver_info {int dummy; } ;
struct ltc2978_data {int * iout_min; int * iout_max; } ;
struct i2c_client {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;



 int FUNC_0 (struct i2c_client*,int,int) ;
 int FUNC_1 (struct ltc2978_data*,struct i2c_client*,int,int ,int *) ;
 int FUNC_2 (struct ltc2978_data*,struct i2c_client*,int,int ,int *) ;
 struct pmbus_driver_info* FUNC_3 (struct i2c_client*) ;
 struct ltc2978_data* FUNC_4 (struct pmbus_driver_info const*) ;

__attribute__((used)) static int FUNC_5(struct i2c_client *VAR_2, int VAR_3, int VAR_4)
{
 const struct pmbus_driver_info *VAR_5 = FUNC_3(VAR_2);
 struct ltc2978_data *VAR_6 = FUNC_4(VAR_5);
 int VAR_7;

 switch (VAR_4) {
 case 130:
  VAR_7 = FUNC_1(VAR_6, VAR_2, VAR_3, VAR_1,
      &VAR_6->iout_max[VAR_3]);
  break;
 case 129:
  VAR_7 = FUNC_2(VAR_6, VAR_2, VAR_3, VAR_0,
      &VAR_6->iout_min[VAR_3]);
  break;
 case 128:
  VAR_7 = 0;
  break;
 default:
  VAR_7 = FUNC_0(VAR_2, VAR_3, VAR_4);
  break;
 }
 return VAR_7;
}
