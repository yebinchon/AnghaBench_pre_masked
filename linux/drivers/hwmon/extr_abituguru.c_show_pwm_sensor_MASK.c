
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sensor_device_attribute_2 {size_t index; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct abituguru_data {int* bank1_sensors; int** bank1_address; int** pwm_settings; } ;
typedef int ssize_t ;


 size_t VAR_0 ;
 int VAR_1 ;
 struct abituguru_data* FUNC_0 (struct device*) ;
 int FUNC_1 (char*,char*,int) ;
 struct sensor_device_attribute_2* FUNC_2 (struct device_attribute*) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_2,
 struct device_attribute *VAR_3, char *VAR_4)
{
 struct sensor_device_attribute_2 *VAR_5 = FUNC_2(VAR_3);
 struct abituguru_data *VAR_6 = FUNC_0(VAR_2);
 int VAR_7;




 for (VAR_7 = 0; VAR_7 < VAR_6->bank1_sensors[VAR_0]; VAR_7++)
  if (VAR_6->bank1_address[VAR_0][VAR_7] ==
    (VAR_6->pwm_settings[VAR_5->index][0] & 0x0F))
   return FUNC_1(VAR_4, "%d\n", VAR_7+1);

 return -VAR_1;
}
