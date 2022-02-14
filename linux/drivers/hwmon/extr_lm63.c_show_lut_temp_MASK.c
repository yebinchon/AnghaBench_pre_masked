
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sensor_device_attribute {int index; } ;
struct lm63_data {int temp2_offset; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 struct lm63_data* FUNC_0 (struct device*) ;
 int FUNC_1 (struct lm63_data*,int ) ;
 int FUNC_2 (char*,char*,int) ;
 struct sensor_device_attribute* FUNC_3 (struct device_attribute*) ;

__attribute__((used)) static ssize_t FUNC_4(struct device *VAR_0,
         struct device_attribute *VAR_1,
         char *VAR_2)
{
 struct sensor_device_attribute *VAR_3 = FUNC_3(VAR_1);
 struct lm63_data *VAR_4 = FUNC_0(VAR_0);
 return FUNC_2(VAR_2, "%d\n", FUNC_1(VAR_4, VAR_3->index)
         + VAR_4->temp2_offset);
}
