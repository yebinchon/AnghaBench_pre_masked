
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct pmbus_driver_info {int dummy; } ;
struct i2c_client {int dummy; } ;
struct adm1275_data {int have_power_sampling; int have_pin_min; int have_iout_min; } ;


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
 int FUNC_0 (struct adm1275_data const*,struct i2c_client*,int,int ) ;
 int FUNC_1 (int ,int,int ) ;
 int FUNC_2 (int ) ;
 struct pmbus_driver_info* FUNC_3 (struct i2c_client*) ;
 int FUNC_4 (struct i2c_client*,int ,int ,int ) ;
 struct adm1275_data* FUNC_5 (struct pmbus_driver_info const*) ;

__attribute__((used)) static int FUNC_6(struct i2c_client *VAR_11, int VAR_12, int VAR_13,
       u16 VAR_14)
{
 const struct pmbus_driver_info *VAR_15 = FUNC_3(VAR_11);
 const struct adm1275_data *VAR_16 = FUNC_5(VAR_15);
 int VAR_17;

 if (VAR_12 > 0)
  return -VAR_10;

 switch (VAR_13) {
 case 136:
 case 137:
  VAR_17 = FUNC_4(VAR_11, 0, VAR_0,
         VAR_14);
  break;
 case 132:
  VAR_17 = FUNC_4(VAR_11, 0, VAR_1, 0);
  if (!VAR_17 && VAR_16->have_iout_min)
   VAR_17 = FUNC_4(VAR_11, 0,
          VAR_7, 0);
  break;
 case 128:
  VAR_17 = FUNC_4(VAR_11, 0, VAR_3, 0);
  break;
 case 129:
  VAR_17 = FUNC_4(VAR_11, 0, VAR_2, 0);
  break;
 case 131:
  VAR_17 = FUNC_4(VAR_11, 0, VAR_5, 0);
  if (!VAR_17 && VAR_16->have_pin_min)
   VAR_17 = FUNC_4(VAR_11, 0,
          VAR_8, 0);
  break;
 case 130:
  VAR_17 = FUNC_4(VAR_11, 0, VAR_6, 0);
  break;
 case 133:
  if (!VAR_16->have_power_sampling)
   return -VAR_10;
  VAR_14 = FUNC_1(VAR_14, 1, VAR_4);
  VAR_17 = FUNC_0(VAR_16, VAR_11, 1,
      FUNC_2(VAR_14));
  break;
 case 134:
 case 135:
  VAR_14 = FUNC_1(VAR_14, 1, VAR_4);
  VAR_17 = FUNC_0(VAR_16, VAR_11, 0,
      FUNC_2(VAR_14));
  break;
 default:
  VAR_17 = -VAR_9;
  break;
 }
 return VAR_17;
}
