
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct led_classdev {unsigned long blink_delay_on; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int FUNC_0 (char const*,int ,unsigned long*) ;
 struct led_classdev* FUNC_1 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_2(struct device *VAR_0,
  struct device_attribute *VAR_1, const char *VAR_2, size_t VAR_3)
{
 struct led_classdev *VAR_4 = FUNC_1(VAR_0);
 unsigned long VAR_5;
 int VAR_6;

 VAR_6 = FUNC_0(VAR_2, 0, &VAR_5);
 if (VAR_6)
  return VAR_6;

 VAR_4->blink_delay_on = VAR_5;

 return VAR_3;
}
