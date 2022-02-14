
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct lm3533_led {int lm3533; } ;
struct led_classdev {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef scalar_t__ ssize_t ;


 int VAR_0 ;
 struct led_classdev* FUNC_0 (struct device*) ;
 int FUNC_1 (struct lm3533_led*,int ) ;
 scalar_t__ FUNC_2 (int ,int ,int *) ;
 scalar_t__ FUNC_3 (char*,int ,char*,int ) ;
 struct lm3533_led* FUNC_4 (struct led_classdev*) ;

__attribute__((used)) static ssize_t FUNC_5(struct device *VAR_1,
     struct device_attribute *VAR_2,
     char *VAR_3, u8 VAR_4)
{
 struct led_classdev *VAR_5 = FUNC_0(VAR_1);
 struct lm3533_led *VAR_6 = FUNC_4(VAR_5);
 ssize_t VAR_7;
 u8 VAR_8;
 u8 VAR_9;

 VAR_8 = FUNC_1(VAR_6, VAR_4);
 VAR_7 = FUNC_2(VAR_6->lm3533, VAR_8, &VAR_9);
 if (VAR_7)
  return VAR_7;

 return FUNC_3(VAR_3, VAR_0, "%x\n", VAR_9);
}
