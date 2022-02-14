
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sensor_device_attribute {size_t index; } ;
struct lm92_data {int * temp; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int FUNC_0 (int ) ;
 struct lm92_data* FUNC_1 (struct device*) ;
 int FUNC_2 (char*,char*,int) ;
 size_t VAR_0 ;
 struct sensor_device_attribute* FUNC_3 (struct device_attribute*) ;

__attribute__((used)) static ssize_t FUNC_4(struct device *VAR_1,
         struct device_attribute *VAR_2, char *VAR_3)
{
 struct sensor_device_attribute *VAR_4 = FUNC_3(VAR_2);
 struct lm92_data *VAR_5 = FUNC_1(VAR_1);

 return FUNC_2(VAR_3, "%d\n", FUNC_0(VAR_5->temp[VAR_4->index])
         - FUNC_0(VAR_5->temp[VAR_0]));
}
