
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct pmbus_driver_info {int dummy; } ;
struct ltc2978_data {int iin_max; int iin_min; int pin_max; int pin_min; int* iout_max; int* iout_min; int temp2_max; int* vout_min; int vin_min; int vin_max; int* temp_min; int* temp_max; int * vout_max; } ;
struct i2c_client {int dummy; } ;


 int VAR_0 ;







 int FUNC_0 (struct ltc2978_data*,struct i2c_client*,int) ;
 int FUNC_1 (struct i2c_client*) ;
 struct pmbus_driver_info* FUNC_2 (struct i2c_client*) ;
 struct ltc2978_data* FUNC_3 (struct pmbus_driver_info const*) ;

__attribute__((used)) static int FUNC_4(struct i2c_client *VAR_1, int VAR_2,
        int VAR_3, u16 VAR_4)
{
 const struct pmbus_driver_info *VAR_5 = FUNC_2(VAR_1);
 struct ltc2978_data *VAR_6 = FUNC_3(VAR_5);
 int VAR_7;

 switch (VAR_3) {
 case 134:
  VAR_6->iin_max = 0x7c00;
  VAR_6->iin_min = 0x7bff;
  VAR_7 = FUNC_0(VAR_6, VAR_1, 0);
  break;
 case 132:
  VAR_6->pin_max = 0x7c00;
  VAR_6->pin_min = 0x7bff;
  VAR_7 = FUNC_0(VAR_6, VAR_1, 0);
  break;
 case 133:
  VAR_6->iout_max[VAR_2] = 0x7c00;
  VAR_6->iout_min[VAR_2] = 0xfbff;
  VAR_7 = FUNC_0(VAR_6, VAR_1, VAR_2);
  break;
 case 131:
  VAR_6->temp2_max = 0x7c00;
  VAR_7 = FUNC_0(VAR_6, VAR_1, VAR_2);
  break;
 case 128:
  VAR_6->vout_min[VAR_2] = 0xffff;
  VAR_6->vout_max[VAR_2] = 0;
  VAR_7 = FUNC_0(VAR_6, VAR_1, VAR_2);
  break;
 case 129:
  VAR_6->vin_min = 0x7bff;
  VAR_6->vin_max = 0x7c00;
  VAR_7 = FUNC_0(VAR_6, VAR_1, VAR_2);
  break;
 case 130:
  VAR_6->temp_min[VAR_2] = 0x7bff;
  VAR_6->temp_max[VAR_2] = 0x7c00;
  VAR_7 = FUNC_0(VAR_6, VAR_1, VAR_2);
  break;
 default:
  VAR_7 = FUNC_1(VAR_1);
  if (VAR_7 < 0)
   return VAR_7;
  VAR_7 = -VAR_0;
  break;
 }
 return VAR_7;
}
