
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
 int FUNC_2 (char const*,int,int*) ;
 int FUNC_3 (char const*) ;

__attribute__((used)) static ssize_t FUNC_4(struct device *VAR_0,
  struct device_attribute *VAR_1, const char *VAR_2, size_t VAR_3)
{
 struct led_classdev *VAR_4 = FUNC_1(VAR_0);
 struct lm8323_pwm *VAR_5 = FUNC_0(VAR_4);
 int VAR_6, VAR_7;

 VAR_6 = FUNC_2(VAR_2, 10, &VAR_7);

 if (VAR_6)
  return VAR_6;

 VAR_5->fade_time = VAR_7;

 return FUNC_3(VAR_2);
}
