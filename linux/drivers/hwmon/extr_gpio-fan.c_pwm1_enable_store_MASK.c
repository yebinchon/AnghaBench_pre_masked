
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gpio_fan_data {unsigned long pwm_enable; int lock; scalar_t__ num_speed; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef size_t ssize_t ;


 size_t VAR_0 ;
 struct gpio_fan_data* FUNC_0 (struct device*) ;
 scalar_t__ FUNC_1 (char const*,int,unsigned long*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct gpio_fan_data*,scalar_t__) ;

__attribute__((used)) static ssize_t FUNC_5(struct device *VAR_1,
     struct device_attribute *VAR_2,
     const char *VAR_3, size_t VAR_4)
{
 struct gpio_fan_data *VAR_5 = FUNC_0(VAR_1);
 unsigned long VAR_6;

 if (FUNC_1(VAR_3, 10, &VAR_6) || VAR_6 > 1)
  return -VAR_0;

 if (VAR_5->pwm_enable == VAR_6)
  return VAR_4;

 FUNC_2(&VAR_5->lock);

 VAR_5->pwm_enable = VAR_6;


 if (VAR_6 == 0)
  FUNC_4(VAR_5, VAR_5->num_speed - 1);

 FUNC_3(&VAR_5->lock);

 return VAR_4;
}
