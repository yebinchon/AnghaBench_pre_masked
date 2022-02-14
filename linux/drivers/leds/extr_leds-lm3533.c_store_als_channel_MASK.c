
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u8 ;
struct lm3533_led {int lm3533; } ;
struct led_classdev {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 struct led_classdev* FUNC_0 (struct device*) ;
 scalar_t__ FUNC_1 (char const*,int ,unsigned int*) ;
 unsigned int FUNC_2 (struct lm3533_led*,int ) ;
 int FUNC_3 (int ,unsigned int,unsigned int,unsigned int) ;
 struct lm3533_led* FUNC_4 (struct led_classdev*) ;

__attribute__((used)) static ssize_t FUNC_5(struct device *VAR_5,
     struct device_attribute *VAR_6,
     const char *VAR_7, size_t VAR_8)
{
 struct led_classdev *VAR_9 = FUNC_0(VAR_5);
 struct lm3533_led *VAR_10 = FUNC_4(VAR_9);
 unsigned VAR_11;
 u8 VAR_12;
 u8 VAR_13;
 u8 VAR_14;
 int VAR_15;

 if (FUNC_1(VAR_7, 0, &VAR_11))
  return -VAR_0;

 if (VAR_11 < VAR_2 ||
     VAR_11 > VAR_1)
  return -VAR_0;

 VAR_12 = FUNC_2(VAR_10, VAR_4);
 VAR_14 = VAR_3;
 VAR_13 = VAR_11 - 1;

 VAR_15 = FUNC_3(VAR_10->lm3533, VAR_12, VAR_13, VAR_14);
 if (VAR_15)
  return VAR_15;

 return VAR_8;
}
