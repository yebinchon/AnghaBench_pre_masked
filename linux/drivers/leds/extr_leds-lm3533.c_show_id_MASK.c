
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lm3533_led {int id; } ;
struct led_classdev {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 struct led_classdev* FUNC_0 (struct device*) ;
 int FUNC_1 (char*,int ,char*,int ) ;
 struct lm3533_led* FUNC_2 (struct led_classdev*) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_1,
    struct device_attribute *VAR_2, char *VAR_3)
{
 struct led_classdev *VAR_4 = FUNC_0(VAR_1);
 struct lm3533_led *VAR_5 = FUNC_2(VAR_4);

 return FUNC_1(VAR_3, VAR_0, "%d\n", VAR_5->id);
}
