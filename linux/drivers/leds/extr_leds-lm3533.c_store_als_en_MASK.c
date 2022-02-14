
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
 int VAR_2 ;
 struct led_classdev* FUNC_0 (struct device*) ;
 scalar_t__ FUNC_1 (char const*,int ,unsigned int*) ;
 scalar_t__ FUNC_2 (struct lm3533_led*,int ) ;
 int FUNC_3 (int ,scalar_t__,scalar_t__,scalar_t__) ;
 struct lm3533_led* FUNC_4 (struct led_classdev*) ;

__attribute__((used)) static ssize_t FUNC_5(struct device *VAR_3,
     struct device_attribute *VAR_4,
     const char *VAR_5, size_t VAR_6)
{
 struct led_classdev *VAR_7 = FUNC_0(VAR_3);
 struct lm3533_led *VAR_8 = FUNC_4(VAR_7);
 unsigned VAR_9;
 u8 VAR_10;
 u8 VAR_11;
 u8 VAR_12;
 int VAR_13;

 if (FUNC_1(VAR_5, 0, &VAR_9))
  return -VAR_0;

 VAR_10 = FUNC_2(VAR_8, VAR_2);
 VAR_11 = VAR_1;

 if (VAR_9)
  VAR_12 = VAR_11;
 else
  VAR_12 = 0;

 VAR_13 = FUNC_3(VAR_8->lm3533, VAR_10, VAR_12, VAR_11);
 if (VAR_13)
  return VAR_13;

 return VAR_6;
}
