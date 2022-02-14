
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lp55xx_led {int led_current; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 struct lp55xx_led* FUNC_0 (struct device*) ;
 int FUNC_1 (char*,int ,char*,int ) ;

__attribute__((used)) static ssize_t FUNC_2(struct device *VAR_1,
       struct device_attribute *VAR_2,
       char *VAR_3)
{
 struct lp55xx_led *VAR_4 = FUNC_0(VAR_1);

 return FUNC_1(VAR_3, VAR_0, "%d\n", VAR_4->led_current);
}
