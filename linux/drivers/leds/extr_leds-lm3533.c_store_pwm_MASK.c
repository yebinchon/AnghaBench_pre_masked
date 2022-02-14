
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct lm3533_led {int cb; } ;
struct led_classdev {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 struct led_classdev* FUNC_0 (struct device*) ;
 scalar_t__ FUNC_1 (char const*,int ,int *) ;
 int FUNC_2 (int *,int ) ;
 struct lm3533_led* FUNC_3 (struct led_classdev*) ;

__attribute__((used)) static ssize_t FUNC_4(struct device *VAR_1,
     struct device_attribute *VAR_2,
     const char *VAR_3, size_t VAR_4)
{
 struct led_classdev *VAR_5 = FUNC_0(VAR_1);
 struct lm3533_led *VAR_6 = FUNC_3(VAR_5);
 u8 VAR_7;
 int VAR_8;

 if (FUNC_1(VAR_3, 0, &VAR_7))
  return -VAR_0;

 VAR_8 = FUNC_2(&VAR_6->cb, VAR_7);
 if (VAR_8)
  return VAR_8;

 return VAR_4;
}
