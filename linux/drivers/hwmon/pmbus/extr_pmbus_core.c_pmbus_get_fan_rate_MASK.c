
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pmbus_sensor {int data; } ;
struct pmbus_data {int dummy; } ;
struct i2c_client {int dummy; } ;
typedef enum pmbus_fan_mode { ____Placeholder_pmbus_fan_mode } pmbus_fan_mode ;


 scalar_t__ FUNC_0 (struct pmbus_sensor*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct pmbus_sensor*) ;
 struct pmbus_data* FUNC_2 (struct i2c_client*) ;
 int * VAR_2 ;
 int * VAR_3 ;
 int* VAR_4 ;
 struct pmbus_sensor* FUNC_3 (struct pmbus_data*,int,int) ;
 int FUNC_4 (struct i2c_client*,int,int ) ;
 int FUNC_5 (struct i2c_client*,int,int ) ;
 int VAR_5 ;

__attribute__((used)) static int FUNC_6(struct i2c_client *VAR_6, int VAR_7, int VAR_8,
         enum pmbus_fan_mode VAR_9,
         bool VAR_10)
{
 struct pmbus_data *VAR_11 = FUNC_2(VAR_6);
 bool VAR_12, VAR_13;
 struct pmbus_sensor *VAR_14;
 int VAR_15;
 int VAR_16;

 VAR_12 = (VAR_9 == VAR_5);

 if (VAR_10) {
  VAR_16 = VAR_12 ? VAR_0 : VAR_1;
  VAR_14 = FUNC_3(VAR_11, VAR_7, VAR_16 + VAR_8);
  if (FUNC_0(VAR_14))
   return FUNC_1(VAR_14);

  return VAR_14->data;
 }

 VAR_15 = FUNC_4(VAR_6, VAR_7,
          VAR_3[VAR_8]);
 if (VAR_15 < 0)
  return VAR_15;

 VAR_13 = !!(VAR_15 & VAR_4[VAR_8]);
 if (VAR_12 == VAR_13)
  return FUNC_5(VAR_6, VAR_7,
         VAR_2[VAR_8]);


 return 0;
}
