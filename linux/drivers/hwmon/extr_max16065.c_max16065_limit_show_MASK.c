
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sensor_device_attribute_2 {size_t nr; size_t index; } ;
struct max16065_data {int** limit; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 struct max16065_data* FUNC_0 (struct device*) ;
 int FUNC_1 (char*,int ,char*,int) ;
 struct sensor_device_attribute_2* FUNC_2 (struct device_attribute*) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_1,
       struct device_attribute *VAR_2, char *VAR_3)
{
 struct sensor_device_attribute_2 *VAR_4 = FUNC_2(VAR_2);
 struct max16065_data *VAR_5 = FUNC_0(VAR_1);

 return FUNC_1(VAR_3, VAR_0, "%d\n",
   VAR_5->limit[VAR_4->nr][VAR_4->index]);
}
