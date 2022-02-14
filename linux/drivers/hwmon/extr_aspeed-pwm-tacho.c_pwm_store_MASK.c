
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sensor_device_attribute {int index; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct aspeed_pwm_tacho_data {long* pwm_port_fan_ctrl; } ;
typedef int ssize_t ;


 int VAR_0 ;
 long VAR_1 ;
 int FUNC_0 (struct aspeed_pwm_tacho_data*,int,long) ;
 struct aspeed_pwm_tacho_data* FUNC_1 (struct device*) ;
 int FUNC_2 (char const*,int,long*) ;
 struct sensor_device_attribute* FUNC_3 (struct device_attribute*) ;

__attribute__((used)) static ssize_t FUNC_4(struct device *VAR_2, struct device_attribute *VAR_3,
    const char *VAR_4, size_t VAR_5)
{
 struct sensor_device_attribute *VAR_6 = FUNC_3(VAR_3);
 int VAR_7 = VAR_6->index;
 int VAR_8;
 struct aspeed_pwm_tacho_data *VAR_9 = FUNC_1(VAR_2);
 long VAR_10;

 VAR_8 = FUNC_2(VAR_4, 10, &VAR_10);
 if (VAR_8 != 0)
  return VAR_8;

 if (VAR_10 < 0 || VAR_10 > VAR_1)
  return -VAR_0;

 if (VAR_9->pwm_port_fan_ctrl[VAR_7] == VAR_10)
  return VAR_5;

 VAR_9->pwm_port_fan_ctrl[VAR_7] = VAR_10;
 FUNC_0(VAR_9, VAR_7, VAR_10);

 return VAR_5;
}
