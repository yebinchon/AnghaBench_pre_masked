
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct led_classdev {int dummy; } ;
struct gpio_trig_data {unsigned long inverted; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int FUNC_0 (int ,struct led_classdev*) ;
 int FUNC_1 (char const*,int,unsigned long*) ;
 struct gpio_trig_data* FUNC_2 (struct device*) ;
 struct led_classdev* FUNC_3 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_4(struct device *VAR_1,
  struct device_attribute *VAR_2, const char *VAR_3, size_t VAR_4)
{
 struct led_classdev *VAR_5 = FUNC_3(VAR_1);
 struct gpio_trig_data *VAR_6 = FUNC_2(VAR_1);
 unsigned long VAR_7;
 int VAR_8;

 VAR_8 = FUNC_1(VAR_3, 10, &VAR_7);
 if (VAR_8 < 0)
  return VAR_8;

 if (VAR_7 > 1)
  return -VAR_0;

 VAR_6->inverted = VAR_7;


 FUNC_0(0, VAR_5);

 return VAR_4;
}
