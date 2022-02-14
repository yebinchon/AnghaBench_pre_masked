
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct lm3533_led {int lm3533; } ;
struct led_classdev {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 struct led_classdev* FUNC_0 (struct device*) ;
 scalar_t__ FUNC_1 (char const*,int ,scalar_t__*) ;
 scalar_t__ FUNC_2 (struct lm3533_led*,scalar_t__) ;
 int FUNC_3 (int ,scalar_t__,scalar_t__) ;
 struct lm3533_led* FUNC_4 (struct led_classdev*) ;

__attribute__((used)) static ssize_t FUNC_5(struct device *VAR_2,
     struct device_attribute *VAR_3,
     const char *VAR_4, size_t VAR_5, u8 VAR_6)
{
 struct led_classdev *VAR_7 = FUNC_0(VAR_2);
 struct lm3533_led *VAR_8 = FUNC_4(VAR_7);
 u8 VAR_9;
 u8 VAR_10;
 int VAR_11;

 if (FUNC_1(VAR_4, 0, &VAR_9) || VAR_9 > VAR_1)
  return -VAR_0;

 VAR_10 = FUNC_2(VAR_8, VAR_6);
 VAR_11 = FUNC_3(VAR_8->lm3533, VAR_10, VAR_9);
 if (VAR_11)
  return VAR_11;

 return VAR_5;
}
