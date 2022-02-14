
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pmbus_sensor_attr {int func; } ;
struct pmbus_driver_info {int pages; int* func; } ;
struct pmbus_data {struct pmbus_driver_info* info; } ;
struct i2c_client {int dummy; } ;


 int FUNC_0 (struct i2c_client*,struct pmbus_data*,struct pmbus_driver_info const*,char const*,int,int,struct pmbus_sensor_attr const*,int) ;
 int FUNC_1 (struct pmbus_driver_info const*,struct pmbus_sensor_attr const*) ;

__attribute__((used)) static int FUNC_2(struct i2c_client *VAR_0,
      struct pmbus_data *VAR_1,
      const char *VAR_2,
      const struct pmbus_sensor_attr *VAR_3,
      int VAR_4)
{
 const struct pmbus_driver_info *VAR_5 = VAR_1->info;
 int VAR_6, VAR_7;
 int VAR_8;

 VAR_6 = 1;
 for (VAR_7 = 0; VAR_7 < VAR_4; VAR_7++) {
  int VAR_9, VAR_10;
  bool VAR_11 = FUNC_1(VAR_5, VAR_3);

  VAR_10 = VAR_11 ? VAR_5->pages : 1;
  for (VAR_9 = 0; VAR_9 < VAR_10; VAR_9++) {
   if (!(VAR_5->func[VAR_9] & VAR_3->func))
    continue;
   VAR_8 = FUNC_0(VAR_0, VAR_1, VAR_5,
        VAR_2, VAR_6, VAR_9,
        VAR_3, VAR_11);
   if (VAR_8)
    return VAR_8;
   VAR_6++;
  }
  VAR_3++;
 }
 return 0;
}
