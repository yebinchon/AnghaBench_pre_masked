
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lm8323_pwm {int fade_time; } ;
struct led_classdev {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 struct lm8323_pwm* FUNC_0 (struct led_classdev*) ;
 struct led_classdev* FUNC_1 (struct device*) ;
 int FUNC_2 (char*,char*,int) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_0,
  struct device_attribute *VAR_1, char *VAR_2)
{
 struct led_classdev *VAR_3 = FUNC_1(VAR_0);
 struct lm8323_pwm *VAR_4 = FUNC_0(VAR_3);

 return FUNC_2(VAR_2, "%d\n", VAR_4->fade_time);
}
