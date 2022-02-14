
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sensor_device_attribute_2 {size_t index; int nr; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct abituguru_data {int** bank2_settings; } ;
typedef int ssize_t ;


 struct abituguru_data* FUNC_0 (struct device*) ;
 int FUNC_1 (char*,char*) ;
 struct sensor_device_attribute_2* FUNC_2 (struct device_attribute*) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_0,
 struct device_attribute *VAR_1, char *VAR_2)
{
 struct sensor_device_attribute_2 *VAR_3 = FUNC_2(VAR_1);
 struct abituguru_data *VAR_4 = FUNC_0(VAR_0);
 if (VAR_4->bank2_settings[VAR_3->index][0] & VAR_3->nr)
  return FUNC_1(VAR_2, "1\n");
 else
  return FUNC_1(VAR_2, "0\n");
}
