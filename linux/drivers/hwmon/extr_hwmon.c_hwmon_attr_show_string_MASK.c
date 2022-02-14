
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hwmon_device_attribute {int type; int name; scalar_t__ index; int attr; TYPE_1__* ops; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
typedef enum hwmon_sensor_types { ____Placeholder_hwmon_sensor_types } hwmon_sensor_types ;
struct TYPE_2__ {int (* read_string ) (struct device*,int,int ,scalar_t__,char const**) ;} ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (char*,char*,char const*) ;
 int FUNC_2 (struct device*,int,int ,scalar_t__,char const**) ;
 struct hwmon_device_attribute* FUNC_3 (struct device_attribute*) ;
 int FUNC_4 (scalar_t__,int ,char const*) ;

__attribute__((used)) static ssize_t FUNC_5(struct device *VAR_0,
          struct device_attribute *VAR_1,
          char *VAR_2)
{
 struct hwmon_device_attribute *VAR_3 = FUNC_3(VAR_1);
 enum hwmon_sensor_types VAR_4 = VAR_3->type;
 const char *VAR_5;
 int VAR_6;

 VAR_6 = VAR_3->ops->read_string(VAR_0, VAR_3->type, VAR_3->attr,
          VAR_3->index, &VAR_5);
 if (VAR_6 < 0)
  return VAR_6;

 FUNC_4(VAR_3->index + FUNC_0(VAR_4),
         VAR_3->name, VAR_5);

 return FUNC_1(VAR_2, "%s\n", VAR_5);
}
