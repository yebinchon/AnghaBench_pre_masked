
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sensor_device_attribute {int index; } ;
struct lm63_data {int* pwm1; int pwm1_freq; scalar_t__ pwm_highres; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 struct lm63_data* FUNC_0 (struct device*) ;
 int FUNC_1 (char*,char*,int) ;
 struct sensor_device_attribute* FUNC_2 (struct device_attribute*) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_0, struct device_attribute *VAR_1,
    char *VAR_2)
{
 struct sensor_device_attribute *VAR_3 = FUNC_2(VAR_1);
 struct lm63_data *VAR_4 = FUNC_0(VAR_0);
 int VAR_5 = VAR_3->index;
 int VAR_6;

 if (VAR_4->pwm_highres)
  VAR_6 = VAR_4->pwm1[VAR_5];
 else
  VAR_6 = VAR_4->pwm1[VAR_5] >= 2 * VAR_4->pwm1_freq ?
         255 : (VAR_4->pwm1[VAR_5] * 255 + VAR_4->pwm1_freq) /
         (2 * VAR_4->pwm1_freq);

 return FUNC_1(VAR_2, "%d\n", VAR_6);
}
