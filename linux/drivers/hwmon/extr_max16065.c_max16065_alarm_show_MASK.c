
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sensor_device_attribute_2 {size_t nr; int index; } ;
struct max16065_data {int* fault; int client; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int FUNC_0 (size_t) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ,int) ;
 struct max16065_data* FUNC_2 (struct device*) ;
 int FUNC_3 (char*,int ,char*,int) ;
 struct sensor_device_attribute_2* FUNC_4 (struct device_attribute*) ;

__attribute__((used)) static ssize_t FUNC_5(struct device *VAR_1,
       struct device_attribute *VAR_2, char *VAR_3)
{
 struct sensor_device_attribute_2 *VAR_4 = FUNC_4(VAR_2);
 struct max16065_data *VAR_5 = FUNC_2(VAR_1);
 int VAR_6 = VAR_5->fault[VAR_4->nr];

 if (VAR_6 < 0)
  return VAR_6;

 VAR_6 &= (1 << VAR_4->index);
 if (VAR_6)
  FUNC_1(VAR_5->client,
       FUNC_0(VAR_4->nr), VAR_6);

 return FUNC_3(VAR_3, VAR_0, "%d\n", !!VAR_6);
}
