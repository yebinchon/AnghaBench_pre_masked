
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sensor_device_attribute_2 {size_t nr; } ;
struct max6642_data {int * temp_high; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 struct max6642_data* FUNC_0 (struct device*) ;
 int FUNC_1 (char*,char*,int) ;
 int FUNC_2 (int ) ;
 struct sensor_device_attribute_2* FUNC_3 (struct device_attribute*) ;

__attribute__((used)) static ssize_t FUNC_4(struct device *VAR_0,
        struct device_attribute *VAR_1, char *VAR_2)
{
 struct sensor_device_attribute_2 *VAR_3 = FUNC_3(VAR_1);
 struct max6642_data *VAR_4 = FUNC_0(VAR_0);

 return FUNC_1(VAR_2, "%d\n", FUNC_2(VAR_4->temp_high[VAR_3->nr]));
}
