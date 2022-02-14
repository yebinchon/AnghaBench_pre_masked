
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pwm_fan_ctx {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 int FUNC_0 (struct pwm_fan_ctx*,unsigned long) ;
 struct pwm_fan_ctx* FUNC_1 (struct device*) ;
 scalar_t__ FUNC_2 (char const*,int,unsigned long*) ;
 int FUNC_3 (struct pwm_fan_ctx*,unsigned long) ;

__attribute__((used)) static ssize_t FUNC_4(struct device *VAR_2, struct device_attribute *VAR_3,
    const char *VAR_4, size_t VAR_5)
{
 struct pwm_fan_ctx *VAR_6 = FUNC_1(VAR_2);
 unsigned long VAR_7;
 int VAR_8;

 if (FUNC_2(VAR_4, 10, &VAR_7) || VAR_7 > VAR_1)
  return -VAR_0;

 VAR_8 = FUNC_0(VAR_6, VAR_7);
 if (VAR_8)
  return VAR_8;

 FUNC_3(VAR_6, VAR_7);
 return VAR_5;
}
