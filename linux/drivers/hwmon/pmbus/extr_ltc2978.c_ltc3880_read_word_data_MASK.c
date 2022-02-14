
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pmbus_driver_info {int dummy; } ;
struct ltc2978_data {int temp2_max; int * iout_max; } ;
struct i2c_client {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;







 int FUNC_0 (struct i2c_client*,int,int) ;
 int FUNC_1 (struct ltc2978_data*,struct i2c_client*,int,int ,int *) ;
 struct pmbus_driver_info* FUNC_2 (struct i2c_client*) ;
 struct ltc2978_data* FUNC_3 (struct pmbus_driver_info const*) ;

__attribute__((used)) static int FUNC_4(struct i2c_client *VAR_3, int VAR_4, int VAR_5)
{
 const struct pmbus_driver_info *VAR_6 = FUNC_2(VAR_3);
 struct ltc2978_data *VAR_7 = FUNC_3(VAR_6);
 int VAR_8;

 switch (VAR_5) {
 case 134:
  VAR_8 = FUNC_1(VAR_7, VAR_3, VAR_4, VAR_1,
      &VAR_7->iout_max[VAR_4]);
  break;
 case 133:
  VAR_8 = FUNC_1(VAR_7, VAR_3, VAR_4,
      VAR_2,
      &VAR_7->temp2_max);
  break;
 case 131:
 case 130:
 case 132:
  VAR_8 = -VAR_0;
  break;
 case 129:
 case 128:
  VAR_8 = 0;
  break;
 default:
  VAR_8 = FUNC_0(VAR_3, VAR_4, VAR_5);
  break;
 }
 return VAR_8;
}
