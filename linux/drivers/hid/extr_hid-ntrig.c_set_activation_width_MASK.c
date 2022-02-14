
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ntrig_data {unsigned long sensor_physical_width; unsigned long activation_width; unsigned long sensor_logical_width; } ;
struct hid_device {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef size_t ssize_t ;


 size_t VAR_0 ;
 struct ntrig_data* FUNC_0 (struct hid_device*) ;
 scalar_t__ FUNC_1 (char const*,int ,unsigned long*) ;
 struct hid_device* FUNC_2 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_1,
        struct device_attribute *VAR_2,
        const char *VAR_3, size_t VAR_4)
{
 struct hid_device *VAR_5 = FUNC_2(VAR_1);
 struct ntrig_data *VAR_6 = FUNC_0(VAR_5);

 unsigned long VAR_7;

 if (FUNC_1(VAR_3, 0, &VAR_7))
  return -VAR_0;

 if (VAR_7 > VAR_6->sensor_physical_width)
  return -VAR_0;

 VAR_6->activation_width = VAR_7 * VAR_6->sensor_logical_width /
         VAR_6->sensor_physical_width;

 return VAR_4;
}
