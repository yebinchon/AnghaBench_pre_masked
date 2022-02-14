
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sensor_device_attribute {size_t index; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct abx500_temp {int* max_alarm; } ;
typedef int ssize_t ;


 struct abx500_temp* FUNC_0 (struct device*) ;
 int FUNC_1 (char*,char*,int) ;
 struct sensor_device_attribute* FUNC_2 (struct device_attribute*) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_0,
         struct device_attribute *VAR_1, char *VAR_2)
{
 struct abx500_temp *VAR_3 = FUNC_0(VAR_0);
 struct sensor_device_attribute *VAR_4 = FUNC_2(VAR_1);

 return FUNC_1(VAR_2, "%d\n", VAR_3->max_alarm[VAR_4->index]);
}
