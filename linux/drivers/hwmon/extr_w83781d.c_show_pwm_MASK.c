
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct w83781d_data {scalar_t__* pwm; } ;
struct sensor_device_attribute {size_t index; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int FUNC_0 (char*,char*,int) ;
 struct sensor_device_attribute* FUNC_1 (struct device_attribute*) ;
 struct w83781d_data* FUNC_2 (struct device*) ;

__attribute__((used)) static ssize_t
FUNC_3(struct device *VAR_0, struct device_attribute *VAR_1, char *VAR_2)
{
 struct sensor_device_attribute *VAR_3 = FUNC_1(VAR_1);
 struct w83781d_data *VAR_4 = FUNC_2(VAR_0);
 return FUNC_0(VAR_2, "%d\n", (int)VAR_4->pwm[VAR_3->index]);
}
