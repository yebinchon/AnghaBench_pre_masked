
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
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (char*,int ,char*,int ) ;
 struct lm3533_led* FUNC_3 (struct led_classdev*) ;

__attribute__((used)) static ssize_t FUNC_4(struct device *VAR_1,
     struct device_attribute *VAR_2,
     char *VAR_3)
{
 struct led_classdev *VAR_4 = FUNC_0(VAR_1);
 struct lm3533_led *VAR_5 = FUNC_3(VAR_4);
 u8 VAR_6;
 int VAR_7;

 VAR_7 = FUNC_1(&VAR_5->cb, &VAR_6);
 if (VAR_7)
  return VAR_7;

 return FUNC_2(VAR_3, VAR_0, "%u\n", VAR_6);
}
