
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sensor_device_attribute_2 {size_t index; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct adt7475_data {int* pwmchan; } ;
typedef int ssize_t ;


 scalar_t__ FUNC_0 (struct adt7475_data*) ;
 int FUNC_1 (struct adt7475_data*) ;
 struct adt7475_data* FUNC_2 (struct device*) ;
 int FUNC_3 (char*,char*,int) ;
 struct sensor_device_attribute_2* FUNC_4 (struct device_attribute*) ;

__attribute__((used)) static ssize_t FUNC_5(struct device *VAR_0, struct device_attribute *VAR_1,
       char *VAR_2)
{
 struct adt7475_data *VAR_3 = FUNC_2(VAR_0);
 struct sensor_device_attribute_2 *VAR_4 = FUNC_4(VAR_1);

 if (FUNC_0(VAR_3))
  return FUNC_1(VAR_3);

 return FUNC_3(VAR_2, "%d\n", VAR_3->pwmchan[VAR_4->index]);
}
