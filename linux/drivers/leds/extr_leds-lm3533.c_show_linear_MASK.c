
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct lm3533_led {int lm3533; } ;
struct led_classdev {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct led_classdev* FUNC_0 (struct device*) ;
 int FUNC_1 (struct lm3533_led*,int ) ;
 int FUNC_2 (int ,int,int*) ;
 int FUNC_3 (char*,int ,char*,int) ;
 struct lm3533_led* FUNC_4 (struct led_classdev*) ;

__attribute__((used)) static ssize_t FUNC_5(struct device *VAR_3,
    struct device_attribute *VAR_4, char *VAR_5)
{
 struct led_classdev *VAR_6 = FUNC_0(VAR_3);
 struct lm3533_led *VAR_7 = FUNC_4(VAR_6);
 u8 VAR_8;
 u8 VAR_9;
 int VAR_10;
 int VAR_11;

 VAR_8 = FUNC_1(VAR_7, VAR_0);
 VAR_11 = FUNC_2(VAR_7->lm3533, VAR_8, &VAR_9);
 if (VAR_11)
  return VAR_11;

 if (VAR_9 & VAR_1)
  VAR_10 = 1;
 else
  VAR_10 = 0;

 return FUNC_3(VAR_5, VAR_2, "%x\n", VAR_10);
}
