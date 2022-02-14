
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pmbus_driver_info {int dummy; } ;
struct i2c_client {int dummy; } ;
struct adm1275_data {int have_power_sampling; int have_temp_max; int have_pin_max; int have_pin_min; int have_iout_min; int have_vout; int have_oc_fault; int have_uc_fault; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (int) ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_1 (struct adm1275_data const*,struct i2c_client*,int) ;
 struct pmbus_driver_info* FUNC_2 (struct i2c_client*) ;
 int FUNC_3 (struct i2c_client*,int ,int ) ;
 struct adm1275_data* FUNC_4 (struct pmbus_driver_info const*) ;

__attribute__((used)) static int FUNC_5(struct i2c_client *VAR_13, int VAR_14, int VAR_15)
{
 const struct pmbus_driver_info *VAR_16 = FUNC_2(VAR_13);
 const struct adm1275_data *VAR_17 = FUNC_4(VAR_16);
 int VAR_18 = 0;

 if (VAR_14 > 0)
  return -VAR_12;

 switch (VAR_15) {
 case 146:
  if (!VAR_17->have_uc_fault)
   return -VAR_12;
  VAR_18 = FUNC_3(VAR_13, 0, VAR_3);
  break;
 case 147:
  if (!VAR_17->have_oc_fault)
   return -VAR_12;
  VAR_18 = FUNC_3(VAR_13, 0, VAR_3);
  break;
 case 129:
  if (VAR_17->have_vout)
   return -VAR_11;
  VAR_18 = FUNC_3(VAR_13, 0,
        VAR_1);
  break;
 case 128:
  if (VAR_17->have_vout)
   return -VAR_11;
  VAR_18 = FUNC_3(VAR_13, 0,
        VAR_2);
  break;
 case 145:
  if (VAR_17->have_vout)
   return -VAR_11;
  VAR_18 = FUNC_3(VAR_13, 0, VAR_0);
  break;
 case 140:
  if (!VAR_17->have_iout_min)
   return -VAR_12;
  VAR_18 = FUNC_3(VAR_13, 0, VAR_9);
  break;
 case 141:
  VAR_18 = FUNC_3(VAR_13, 0, VAR_4);
  break;
 case 135:
  VAR_18 = FUNC_3(VAR_13, 0, VAR_6);
  break;
 case 136:
  VAR_18 = FUNC_3(VAR_13, 0, VAR_5);
  break;
 case 138:
  if (!VAR_17->have_pin_min)
   return -VAR_12;
  VAR_18 = FUNC_3(VAR_13, 0, VAR_10);
  break;
 case 139:
  if (!VAR_17->have_pin_max)
   return -VAR_12;
  VAR_18 = FUNC_3(VAR_13, 0, VAR_7);
  break;
 case 137:
  if (!VAR_17->have_temp_max)
   return -VAR_12;
  VAR_18 = FUNC_3(VAR_13, 0, VAR_8);
  break;
 case 134:
 case 130:
 case 131:
  break;
 case 133:
  if (!VAR_17->have_pin_max)
   return -VAR_12;
  break;
 case 132:
  if (!VAR_17->have_temp_max)
   return -VAR_12;
  break;
 case 142:
  if (!VAR_17->have_power_sampling)
   return -VAR_12;
  VAR_18 = FUNC_1(VAR_17, VAR_13, 1);
  if (VAR_18 < 0)
   break;
  VAR_18 = FUNC_0(VAR_18);
  break;
 case 143:
 case 144:
  VAR_18 = FUNC_1(VAR_17, VAR_13, 0);
  if (VAR_18 < 0)
   break;
  VAR_18 = FUNC_0(VAR_18);
  break;
 default:
  VAR_18 = -VAR_11;
  break;
 }
 return VAR_18;
}
