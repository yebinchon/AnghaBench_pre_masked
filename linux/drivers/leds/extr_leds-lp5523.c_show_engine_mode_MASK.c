
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct lp55xx_led {struct lp55xx_chip* chip; } ;
struct lp55xx_chip {TYPE_1__* engines; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
typedef enum lp55xx_engine_mode { ____Placeholder_lp55xx_engine_mode } lp55xx_engine_mode ;
struct TYPE_2__ {int mode; } ;





 struct lp55xx_led* FUNC_0 (int ) ;
 int FUNC_1 (char*,char*) ;
 int FUNC_2 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_0,
    struct device_attribute *VAR_1,
    char *VAR_2, int VAR_3)
{
 struct lp55xx_led *VAR_4 = FUNC_0(FUNC_2(VAR_0));
 struct lp55xx_chip *VAR_5 = VAR_4->chip;
 enum lp55xx_engine_mode VAR_6 = VAR_5->engines[VAR_3 - 1].mode;

 switch (VAR_6) {
 case 128:
  return FUNC_1(VAR_2, "run\n");
 case 129:
  return FUNC_1(VAR_2, "load\n");
 case 130:
 default:
  return FUNC_1(VAR_2, "disabled\n");
 }
}
