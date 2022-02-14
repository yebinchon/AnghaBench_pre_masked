
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sensor_device_attribute_2 {int index; int nr; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct abituguru_data {int* alarms; int** bank1_settings; } ;
typedef int ssize_t ;


 int VAR_0 ;
 struct abituguru_data* FUNC_0 (struct device*) ;
 int FUNC_1 (char*,char*) ;
 struct sensor_device_attribute_2* FUNC_2 (struct device_attribute*) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_1,
 struct device_attribute *VAR_2, char *VAR_3)
{
 struct sensor_device_attribute_2 *VAR_4 = FUNC_2(VAR_2);
 struct abituguru_data *VAR_5 = FUNC_0(VAR_1);
 if (!VAR_5)
  return -VAR_0;







 if ((VAR_5->alarms[VAR_4->index / 8] & (0x01 << (VAR_4->index % 8))) &&
   (VAR_5->bank1_settings[VAR_4->index][0] & VAR_4->nr))
  return FUNC_1(VAR_3, "1\n");
 else
  return FUNC_1(VAR_3, "0\n");
}
