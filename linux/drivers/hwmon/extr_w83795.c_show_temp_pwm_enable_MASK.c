
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct w83795_data {int* pwm_fcms; int* pwm_tfmr; } ;
struct sensor_device_attribute_2 {int nr; int index; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;




 int FUNC_0 (char*,char*,int) ;
 struct sensor_device_attribute_2* FUNC_1 (struct device_attribute*) ;
 struct w83795_data* FUNC_2 (struct device*) ;

__attribute__((used)) static ssize_t
FUNC_3(struct device *VAR_0, struct device_attribute *VAR_1,
       char *VAR_2)
{
 struct w83795_data *VAR_3 = FUNC_2(VAR_0);
 struct sensor_device_attribute_2 *VAR_4 =
     FUNC_1(VAR_1);
 int VAR_5 = VAR_4->nr;
 int VAR_6 = VAR_4->index;
 u8 VAR_7 = 0xff;

 switch (VAR_5) {
 case 129:
  VAR_7 = (VAR_3->pwm_fcms[1] >> VAR_6) & 1;
  if (VAR_7)
   VAR_7 = 4;
  else
   VAR_7 = 3;
  break;
 case 128:
  VAR_7 = VAR_3->pwm_tfmr[VAR_6];
  break;
 }

 return FUNC_0(VAR_2, "%u\n", VAR_7);
}
