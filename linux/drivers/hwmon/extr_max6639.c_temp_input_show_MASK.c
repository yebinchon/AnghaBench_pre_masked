
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sensor_device_attribute {size_t index; } ;
struct max6639_data {int* temp; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 scalar_t__ FUNC_0 (struct max6639_data*) ;
 int FUNC_1 (struct max6639_data*) ;
 struct max6639_data* FUNC_2 (struct device*) ;
 int FUNC_3 (char*,char*,long) ;
 struct sensor_device_attribute* FUNC_4 (struct device_attribute*) ;

__attribute__((used)) static ssize_t FUNC_5(struct device *VAR_0,
          struct device_attribute *VAR_1, char *VAR_2)
{
 long VAR_3;
 struct max6639_data *VAR_4 = FUNC_2(VAR_0);
 struct sensor_device_attribute *VAR_5 = FUNC_4(VAR_1);

 if (FUNC_0(VAR_4))
  return FUNC_1(VAR_4);

 VAR_3 = VAR_4->temp[VAR_5->index] * 125;
 return FUNC_3(VAR_2, "%ld\n", VAR_3);
}
