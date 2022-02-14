
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pmbus_driver_info {int dummy; } ;
struct max34440_data {int id; } ;
struct i2c_client {int dummy; } ;


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
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 struct pmbus_driver_info* FUNC_0 (struct i2c_client*) ;
 int FUNC_1 (struct i2c_client*,int,int ) ;
 struct max34440_data* FUNC_2 (struct pmbus_driver_info const*) ;

__attribute__((used)) static int FUNC_3(struct i2c_client *VAR_14, int VAR_15, int VAR_16)
{
 int VAR_17;
 const struct pmbus_driver_info *VAR_18 = FUNC_0(VAR_14);
 const struct max34440_data *VAR_19 = FUNC_2(VAR_18);

 switch (VAR_16) {
 case 132:
  VAR_17 = FUNC_1(VAR_14, VAR_15,
        VAR_4);
  break;
 case 133:
  VAR_17 = FUNC_1(VAR_14, VAR_15,
        VAR_5);
  break;
 case 139:
  if (VAR_19->id != VAR_10 && VAR_19->id != VAR_11)
   return -VAR_1;
  VAR_17 = FUNC_1(VAR_14, VAR_15,
        VAR_6);
  break;
 case 138:
  VAR_17 = FUNC_1(VAR_14, VAR_15,
        VAR_2);
  break;
 case 137:
  if (VAR_19->id != VAR_10)
   return -VAR_1;
  VAR_17 = FUNC_1(VAR_14, VAR_15,
        VAR_7);
  break;
 case 136:
  if (VAR_19->id != VAR_10)
   return -VAR_1;
  VAR_17 = FUNC_1(VAR_14, VAR_15,
        VAR_8);
  break;
 case 135:
  if (VAR_19->id != VAR_10 && VAR_19->id != VAR_12 &&
      VAR_19->id != VAR_13)
   return -VAR_1;
  VAR_17 = FUNC_1(VAR_14, VAR_15,
        VAR_9);
  break;
 case 134:
  VAR_17 = FUNC_1(VAR_14, VAR_15,
        VAR_3);
  break;
 case 130:
  if (VAR_19->id != VAR_10)
   return -VAR_1;
  VAR_17 = 0;
  break;
 case 128:
 case 131:
 case 129:
  VAR_17 = 0;
  break;
 default:
  VAR_17 = -VAR_0;
  break;
 }
 return VAR_17;
}
