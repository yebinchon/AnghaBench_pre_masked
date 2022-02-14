
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sensor_device_attribute {int index; } ;
struct it87_data {int* pwm_temp_map; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 scalar_t__ FUNC_0 (int) ;
 struct it87_data* FUNC_1 (struct device*) ;
 int FUNC_2 (char*,char*,int) ;
 struct sensor_device_attribute* FUNC_3 (struct device_attribute*) ;

__attribute__((used)) static ssize_t FUNC_4(struct device *VAR_0,
     struct device_attribute *VAR_1, char *VAR_2)
{
 struct sensor_device_attribute *VAR_3 = FUNC_3(VAR_1);
 struct it87_data *VAR_4 = FUNC_1(VAR_0);
 int VAR_5 = VAR_3->index;
 int VAR_6;

 VAR_6 = VAR_4->pwm_temp_map[VAR_5];
 if (VAR_6 >= 3)
  VAR_6 = 0;
 if (VAR_5 >= 3)
  VAR_6 += 3;

 return FUNC_2(VAR_2, "%d\n", (int)FUNC_0(VAR_6));
}
