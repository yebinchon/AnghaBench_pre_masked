
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
struct TYPE_2__ {int led_mux; } ;


 int VAR_0 ;
 struct lp55xx_led* FUNC_0 (int ) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (char*,char*,char*) ;
 int FUNC_3 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_4(struct device *VAR_1,
       struct device_attribute *VAR_2,
       char *VAR_3, int VAR_4)
{
 struct lp55xx_led *VAR_5 = FUNC_0(FUNC_3(VAR_1));
 struct lp55xx_chip *VAR_6 = VAR_5->chip;
 char VAR_7[VAR_0 + 1];

 FUNC_1(VAR_6->engines[VAR_4 - 1].led_mux, VAR_7);

 return FUNC_2(VAR_3, "%s\n", VAR_7);
}
