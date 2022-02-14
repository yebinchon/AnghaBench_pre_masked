
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pmbus_sensor {scalar_t__ data; } ;
struct pmbus_data {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef scalar_t__ ssize_t ;


 int VAR_0 ;
 int FUNC_0 (struct pmbus_data*,struct pmbus_sensor*) ;
 struct pmbus_data* FUNC_1 (struct device*) ;
 scalar_t__ FUNC_2 (char*,int ,char*,int ) ;
 struct pmbus_sensor* FUNC_3 (struct device_attribute*) ;

__attribute__((used)) static ssize_t FUNC_4(struct device *VAR_1,
     struct device_attribute *VAR_2, char *VAR_3)
{
 struct pmbus_data *VAR_4 = FUNC_1(VAR_1);
 struct pmbus_sensor *VAR_5 = FUNC_3(VAR_2);

 if (VAR_5->data < 0)
  return VAR_5->data;

 return FUNC_2(VAR_3, VAR_0, "%ld\n", FUNC_0(VAR_4, VAR_5));
}
