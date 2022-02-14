
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct w83795_data {unsigned int** pwm; int clkin; } ;
struct sensor_device_attribute_2 {int nr; int index; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;



 int VAR_0 ;

 unsigned int FUNC_0 (unsigned int,int ) ;
 int FUNC_1 (char*,char*,unsigned int) ;
 unsigned int FUNC_2 (unsigned int) ;
 struct sensor_device_attribute_2* FUNC_3 (struct device_attribute*) ;
 struct w83795_data* FUNC_4 (struct device*) ;
 struct w83795_data* FUNC_5 (struct device*) ;

__attribute__((used)) static ssize_t
FUNC_6(struct device *VAR_1, struct device_attribute *VAR_2, char *VAR_3)
{
 struct w83795_data *VAR_4;
 struct sensor_device_attribute_2 *VAR_5 =
     FUNC_3(VAR_2);
 int VAR_6 = VAR_5->nr;
 int VAR_7 = VAR_5->index;
 unsigned int VAR_8;

 VAR_4 = VAR_6 == VAR_0 ? FUNC_4(VAR_1)
    : FUNC_5(VAR_1);

 switch (VAR_6) {
 case 128:
  VAR_8 = FUNC_2(VAR_4->pwm[VAR_7][VAR_6]);
  break;
 case 129:
  VAR_8 = FUNC_0(VAR_4->pwm[VAR_7][VAR_6], VAR_4->clkin);
  break;
 default:
  VAR_8 = VAR_4->pwm[VAR_7][VAR_6];
  break;
 }

 return FUNC_1(VAR_3, "%u\n", VAR_8);
}
