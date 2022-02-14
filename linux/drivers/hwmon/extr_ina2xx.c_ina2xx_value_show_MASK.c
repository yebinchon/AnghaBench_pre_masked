
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sensor_device_attribute {int index; } ;
struct ina2xx_data {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 struct ina2xx_data* FUNC_0 (struct device*) ;
 int FUNC_1 (struct ina2xx_data*,int ,unsigned int) ;
 int FUNC_2 (struct device*,int ,unsigned int*) ;
 int FUNC_3 (char*,int ,char*,int) ;
 struct sensor_device_attribute* FUNC_4 (struct device_attribute*) ;

__attribute__((used)) static ssize_t FUNC_5(struct device *VAR_1,
     struct device_attribute *VAR_2, char *VAR_3)
{
 struct sensor_device_attribute *VAR_4 = FUNC_4(VAR_2);
 struct ina2xx_data *VAR_5 = FUNC_0(VAR_1);
 unsigned int VAR_6;

 int VAR_7 = FUNC_2(VAR_1, VAR_4->index, &VAR_6);

 if (VAR_7 < 0)
  return VAR_7;

 return FUNC_3(VAR_3, VAR_0, "%d\n",
   FUNC_1(VAR_5, VAR_4->index, VAR_6));
}
