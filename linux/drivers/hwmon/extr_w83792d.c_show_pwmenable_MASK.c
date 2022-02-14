
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct w83792d_data {int* pwmenable; } ;
struct sensor_device_attribute {int index; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int FUNC_0 (char*,char*,long) ;
 struct sensor_device_attribute* FUNC_1 (struct device_attribute*) ;
 struct w83792d_data* FUNC_2 (struct device*) ;

__attribute__((used)) static ssize_t
FUNC_3(struct device *VAR_0, struct device_attribute *VAR_1,
   char *VAR_2)
{
 struct sensor_device_attribute *VAR_3 = FUNC_1(VAR_1);
 int VAR_4 = VAR_3->index - 1;
 struct w83792d_data *VAR_5 = FUNC_2(VAR_0);
 long VAR_6 = 1;

 switch (VAR_5->pwmenable[VAR_4]) {
 case 0:
  VAR_6 = 1;
  break;
 case 1:
  VAR_6 = 3;
  break;
 case 2:
  VAR_6 = 2;
  break;
 }

 return FUNC_0(VAR_2, "%ld\n", VAR_6);
}
