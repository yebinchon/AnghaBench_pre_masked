
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct led_classdev {unsigned long blink_delay_off; int blink_delay_on; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef size_t ssize_t ;


 size_t VAR_0 ;
 size_t FUNC_0 (char const*,int,unsigned long*) ;
 int FUNC_1 (struct led_classdev*,int *,unsigned long*) ;
 struct led_classdev* FUNC_2 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_1,
  struct device_attribute *VAR_2, const char *VAR_3, size_t VAR_4)
{
 struct led_classdev *VAR_5 = FUNC_2(VAR_1);
 unsigned long VAR_6;
 ssize_t VAR_7 = -VAR_0;

 VAR_7 = FUNC_0(VAR_3, 10, &VAR_6);
 if (VAR_7)
  return VAR_7;

 FUNC_1(VAR_5, &VAR_5->blink_delay_on, &VAR_6);
 VAR_5->blink_delay_off = VAR_6;

 return VAR_4;
}
