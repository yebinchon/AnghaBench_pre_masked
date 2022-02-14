
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thermal_cooling_device {struct gpio_fan_data* devdata; } ;
struct gpio_fan_data {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct gpio_fan_data*,unsigned long) ;

__attribute__((used)) static int FUNC_1(struct thermal_cooling_device *VAR_1,
      unsigned long VAR_2)
{
 struct gpio_fan_data *VAR_3 = VAR_1->devdata;

 if (!VAR_3)
  return -VAR_0;

 FUNC_0(VAR_3, VAR_2);
 return 0;
}
