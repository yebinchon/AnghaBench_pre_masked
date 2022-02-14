
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lp55xx_led {struct lp55xx_chip* chip; } ;
struct lp55xx_chip {int engine_idx; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 struct lp55xx_led* FUNC_0 (int ) ;
 int FUNC_1 (char*,char*,int) ;
 int FUNC_2 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_0,
       struct device_attribute *VAR_1,
       char *VAR_2)
{
 struct lp55xx_led *VAR_3 = FUNC_0(FUNC_2(VAR_0));
 struct lp55xx_chip *VAR_4 = VAR_3->chip;

 return FUNC_1(VAR_2, "%d\n", VAR_4->engine_idx);
}
