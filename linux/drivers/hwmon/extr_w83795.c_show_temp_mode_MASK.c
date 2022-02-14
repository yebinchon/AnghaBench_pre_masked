
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct w83795_data {int temp_mode; } ;
struct sensor_device_attribute_2 {int index; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 struct w83795_data* FUNC_0 (struct device*) ;
 int FUNC_1 (char*,char*,int) ;
 struct sensor_device_attribute_2* FUNC_2 (struct device_attribute*) ;

__attribute__((used)) static ssize_t
FUNC_3(struct device *VAR_0, struct device_attribute *VAR_1, char *VAR_2)
{
 struct w83795_data *VAR_3 = FUNC_0(VAR_0);
 struct sensor_device_attribute_2 *VAR_4 =
     FUNC_2(VAR_1);
 int VAR_5 = VAR_4->index;
 int VAR_6;

 if (VAR_3->temp_mode & (1 << VAR_5))
  VAR_6 = 3;
 else
  VAR_6 = 4;

 return FUNC_1(VAR_2, "%d\n", VAR_6);
}
