
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pmbus_driver_info {int dummy; } ;
struct ltc2978_data {int* vout_max; int * temp_max; int vin_max; } ;
struct i2c_client {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;






 int FUNC_0 (struct ltc2978_data*,struct i2c_client*,int,int ,int *) ;
 int FUNC_1 (struct i2c_client*,int,int ) ;
 int FUNC_2 (struct i2c_client*) ;
 struct pmbus_driver_info* FUNC_3 (struct i2c_client*) ;
 struct ltc2978_data* FUNC_4 (struct pmbus_driver_info const*) ;

__attribute__((used)) static int FUNC_5(struct i2c_client *VAR_4, int VAR_5,
      int VAR_6)
{
 const struct pmbus_driver_info *VAR_7 = FUNC_3(VAR_4);
 struct ltc2978_data *VAR_8 = FUNC_4(VAR_7);
 int VAR_9;

 switch (VAR_6) {
 case 132:
  VAR_9 = FUNC_0(VAR_8, VAR_4, VAR_5, VAR_2,
      &VAR_8->vin_max);
  break;
 case 131:
  VAR_9 = FUNC_1(VAR_4, VAR_5, VAR_3);
  if (VAR_9 >= 0) {




   if (VAR_9 > VAR_8->vout_max[VAR_5])
    VAR_8->vout_max[VAR_5] = VAR_9;
   VAR_9 = VAR_8->vout_max[VAR_5];
  }
  break;
 case 133:
  VAR_9 = FUNC_0(VAR_8, VAR_4, VAR_5,
      VAR_1,
      &VAR_8->temp_max[VAR_5]);
  break;
 case 128:
 case 129:
 case 130:
  VAR_9 = 0;
  break;
 default:
  VAR_9 = FUNC_2(VAR_4);
  if (VAR_9 < 0)
   return VAR_9;
  VAR_9 = -VAR_0;
  break;
 }
 return VAR_9;
}
