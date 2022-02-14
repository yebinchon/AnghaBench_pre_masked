
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gpio_fan_data {int num_speed; int lock; int pwm_enable; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int FUNC_0 (unsigned long,int) ;
 int VAR_0 ;
 int VAR_1 ;
 struct gpio_fan_data* FUNC_1 (struct device*) ;
 scalar_t__ FUNC_2 (char const*,int,unsigned long*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct gpio_fan_data*,int) ;

__attribute__((used)) static ssize_t FUNC_6(struct device *VAR_2, struct device_attribute *VAR_3,
     const char *VAR_4, size_t VAR_5)
{
 struct gpio_fan_data *VAR_6 = FUNC_1(VAR_2);
 unsigned long VAR_7;
 int VAR_8;
 int VAR_9 = VAR_5;

 if (FUNC_2(VAR_4, 10, &VAR_7) || VAR_7 > 255)
  return -VAR_0;

 FUNC_3(&VAR_6->lock);

 if (!VAR_6->pwm_enable) {
  VAR_9 = -VAR_1;
  goto exit_unlock;
 }

 VAR_8 = FUNC_0(VAR_7 * (VAR_6->num_speed - 1), 255);
 FUNC_5(VAR_6, VAR_8);

exit_unlock:
 FUNC_4(&VAR_6->lock);

 return VAR_9;
}
