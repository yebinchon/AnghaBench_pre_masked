
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sensor_device_attribute {unsigned int index; } ;
struct ina3221_input {int shunt_resistor; } ;
struct ina3221_data {struct ina3221_input* inputs; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 struct ina3221_data* FUNC_0 (struct device*) ;
 int FUNC_1 (char*,int ,char*,int) ;
 struct sensor_device_attribute* FUNC_2 (struct device_attribute*) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_1,
      struct device_attribute *VAR_2, char *VAR_3)
{
 struct sensor_device_attribute *VAR_4 = FUNC_2(VAR_2);
 struct ina3221_data *VAR_5 = FUNC_0(VAR_1);
 unsigned int VAR_6 = VAR_4->index;
 struct ina3221_input *VAR_7 = &VAR_5->inputs[VAR_6];

 return FUNC_1(VAR_3, VAR_0, "%d\n", VAR_7->shunt_resistor);
}
