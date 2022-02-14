
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sensor_device_attribute {size_t index; } ;
struct pc87360_data {int * fan_status; int * fan_min; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 struct pc87360_data* FUNC_2 (struct device*) ;
 int FUNC_3 (char*,char*,int) ;
 struct sensor_device_attribute* FUNC_4 (struct device_attribute*) ;

__attribute__((used)) static ssize_t FUNC_5(struct device *VAR_0,
       struct device_attribute *VAR_1, char *VAR_2)
{
 struct sensor_device_attribute *VAR_3 = FUNC_4(VAR_1);
 struct pc87360_data *VAR_4 = FUNC_2(VAR_0);
 return FUNC_3(VAR_2, "%u\n", FUNC_1(VAR_4->fan_min[VAR_3->index],
         FUNC_0(VAR_4->fan_status[VAR_3->index])));
}
