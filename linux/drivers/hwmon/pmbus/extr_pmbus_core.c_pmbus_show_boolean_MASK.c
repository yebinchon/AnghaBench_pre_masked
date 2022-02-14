
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sensor_device_attribute {int index; } ;
struct pmbus_data {int dummy; } ;
struct pmbus_boolean {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int FUNC_0 (struct pmbus_data*,struct pmbus_boolean*,int ) ;
 struct pmbus_data* FUNC_1 (struct device*) ;
 int FUNC_2 (char*,int ,char*,int) ;
 struct pmbus_boolean* FUNC_3 (struct sensor_device_attribute*) ;
 struct sensor_device_attribute* FUNC_4 (struct device_attribute*) ;

__attribute__((used)) static ssize_t FUNC_5(struct device *VAR_1,
      struct device_attribute *VAR_2, char *VAR_3)
{
 struct sensor_device_attribute *VAR_4 = FUNC_4(VAR_2);
 struct pmbus_boolean *VAR_5 = FUNC_3(VAR_4);
 struct pmbus_data *VAR_6 = FUNC_1(VAR_1);
 int VAR_7;

 VAR_7 = FUNC_0(VAR_6, VAR_5, VAR_4->index);
 if (VAR_7 < 0)
  return VAR_7;
 return FUNC_2(VAR_3, VAR_0, "%d\n", VAR_7);
}
