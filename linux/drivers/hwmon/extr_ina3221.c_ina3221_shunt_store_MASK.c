
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
 int FUNC_0 (int,int,int ) ;
 struct ina3221_data* FUNC_1 (struct device*) ;
 int FUNC_2 (char const*,int ,int*) ;
 struct sensor_device_attribute* FUNC_3 (struct device_attribute*) ;

__attribute__((used)) static ssize_t FUNC_4(struct device *VAR_1,
       struct device_attribute *VAR_2,
       const char *VAR_3, size_t VAR_4)
{
 struct sensor_device_attribute *VAR_5 = FUNC_3(VAR_2);
 struct ina3221_data *VAR_6 = FUNC_1(VAR_1);
 unsigned int VAR_7 = VAR_5->index;
 struct ina3221_input *VAR_8 = &VAR_6->inputs[VAR_7];
 int VAR_9;
 int VAR_10;

 VAR_10 = FUNC_2(VAR_3, 0, &VAR_9);
 if (VAR_10)
  return VAR_10;

 VAR_9 = FUNC_0(VAR_9, 1, VAR_0);

 VAR_8->shunt_resistor = VAR_9;

 return VAR_4;
}
