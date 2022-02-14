
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct w83795_data {int* pwm_fcms; int* pwm_tfmr; } ;
struct sensor_device_attribute_2 {int index; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int FUNC_0 (char*,char*,int) ;
 struct sensor_device_attribute_2* FUNC_1 (struct device_attribute*) ;
 struct w83795_data* FUNC_2 (struct device*) ;

__attribute__((used)) static ssize_t
FUNC_3(struct device *VAR_0, struct device_attribute *VAR_1, char *VAR_2)
{
 struct sensor_device_attribute_2 *VAR_3 =
     FUNC_1(VAR_1);
 struct w83795_data *VAR_4 = FUNC_2(VAR_0);
 int VAR_5 = VAR_3->index;
 u8 VAR_6;


 if (VAR_4->pwm_fcms[0] & (1 << VAR_5)) {
  VAR_6 = 2;
  goto out;
 }

 for (VAR_6 = 0; VAR_6 < 6; VAR_6++) {
  if (VAR_4->pwm_tfmr[VAR_6] & (1 << VAR_5)) {
   VAR_6 = 3;
   goto out;
  }
 }

 VAR_6 = 1;

out:
 return FUNC_0(VAR_2, "%u\n", VAR_6);
}
