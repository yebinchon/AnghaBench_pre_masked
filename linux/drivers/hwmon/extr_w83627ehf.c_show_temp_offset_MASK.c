
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct w83627ehf_data {int* temp_offset; } ;
struct sensor_device_attribute {size_t index; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int FUNC_0 (char*,char*,int) ;
 struct sensor_device_attribute* FUNC_1 (struct device_attribute*) ;
 struct w83627ehf_data* FUNC_2 (struct device*) ;

__attribute__((used)) static ssize_t
FUNC_3(struct device *VAR_0, struct device_attribute *VAR_1, char *VAR_2)
{
 struct w83627ehf_data *VAR_3 = FUNC_2(VAR_0);
 struct sensor_device_attribute *VAR_4 = FUNC_1(VAR_1);

 return FUNC_0(VAR_2, "%d\n",
         VAR_3->temp_offset[VAR_4->index] * 1000);
}
