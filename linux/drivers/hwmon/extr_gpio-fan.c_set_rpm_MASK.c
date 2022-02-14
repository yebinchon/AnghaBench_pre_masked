
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gpio_fan_data {int lock; int pwm_enable; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 struct gpio_fan_data* FUNC_0 (struct device*) ;
 scalar_t__ FUNC_1 (char const*,int,unsigned long*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct gpio_fan_data*,unsigned long) ;
 int FUNC_5 (struct gpio_fan_data*,int ) ;

__attribute__((used)) static ssize_t FUNC_6(struct device *VAR_2, struct device_attribute *VAR_3,
         const char *VAR_4, size_t VAR_5)
{
 struct gpio_fan_data *VAR_6 = FUNC_0(VAR_2);
 unsigned long VAR_7;
 int VAR_8 = VAR_5;

 if (FUNC_1(VAR_4, 10, &VAR_7))
  return -VAR_0;

 FUNC_2(&VAR_6->lock);

 if (!VAR_6->pwm_enable) {
  VAR_8 = -VAR_1;
  goto exit_unlock;
 }

 FUNC_5(VAR_6, FUNC_4(VAR_6, VAR_7));

exit_unlock:
 FUNC_3(&VAR_6->lock);

 return VAR_8;
}
