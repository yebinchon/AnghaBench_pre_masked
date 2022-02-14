
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pmbus_sensor_attr {int gbit; scalar_t__ sfunc; int class; int reg; scalar_t__ label; } ;
struct pmbus_sensor {int dummy; } ;
struct pmbus_driver_info {int dummy; } ;
struct pmbus_data {scalar_t__ has_status_word; } ;
struct i2c_client {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct pmbus_data*,char const*,char*,int,int *,int *,scalar_t__,int) ;
 int FUNC_1 (struct pmbus_data*,char const*,int,scalar_t__,int) ;
 int FUNC_2 (struct i2c_client*,struct pmbus_data*,struct pmbus_driver_info const*,char const*,int,int,struct pmbus_sensor*,struct pmbus_sensor_attr const*) ;
 struct pmbus_sensor* FUNC_3 (struct pmbus_data*,char const*,char*,int,int,int ,int ,int,int,int) ;
 scalar_t__ FUNC_4 (struct i2c_client*,int) ;

__attribute__((used)) static int FUNC_5(struct i2c_client *VAR_2,
          struct pmbus_data *VAR_3,
          const struct pmbus_driver_info *VAR_4,
          const char *VAR_5,
          int VAR_6, int VAR_7,
          const struct pmbus_sensor_attr *VAR_8,
          bool VAR_9)
{
 struct pmbus_sensor *VAR_10;
 bool VAR_11 = !!(VAR_8->gbit & 0xff00);
 int VAR_12;

 if (VAR_8->label) {
  VAR_12 = FUNC_1(VAR_3, VAR_5, VAR_6, VAR_8->label,
          VAR_9 ? VAR_7 + 1 : 0);
  if (VAR_12)
   return VAR_12;
 }
 VAR_10 = FUNC_3(VAR_3, VAR_5, "input", VAR_6, VAR_7, VAR_8->reg,
    VAR_8->class, 1, 1, 1);
 if (!VAR_10)
  return -VAR_0;
 if (VAR_8->sfunc) {
  VAR_12 = FUNC_2(VAR_2, VAR_3, VAR_4, VAR_5,
         VAR_6, VAR_7, VAR_10, VAR_8);
  if (VAR_12 < 0)
   return VAR_12;






  if (!VAR_12 && VAR_8->gbit &&
      (!VAR_11 || (VAR_11 && VAR_3->has_status_word)) &&
      FUNC_4(VAR_2, VAR_7)) {
   VAR_12 = FUNC_0(VAR_3, VAR_5, "alarm", VAR_6,
      ((void*)0), ((void*)0),
      VAR_1 + VAR_7,
      VAR_8->gbit);
   if (VAR_12)
    return VAR_12;
  }
 }
 return 0;
}
