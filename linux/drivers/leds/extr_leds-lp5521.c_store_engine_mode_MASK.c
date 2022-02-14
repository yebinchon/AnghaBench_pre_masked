
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lp55xx_led {struct lp55xx_chip* chip; } ;
struct lp55xx_engine {int mode; } ;
struct lp55xx_chip {int engine_idx; int lock; struct lp55xx_engine* engines; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef size_t ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct lp55xx_led* FUNC_0 (int ) ;
 int FUNC_1 (struct lp55xx_chip*) ;
 int FUNC_2 (struct lp55xx_chip*,int) ;
 int FUNC_3 (struct lp55xx_chip*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (char const*,char*,int) ;
 int FUNC_7 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_8(struct device *VAR_3,
     struct device_attribute *VAR_4,
     const char *VAR_5, size_t VAR_6, int VAR_7)
{
 struct lp55xx_led *VAR_8 = FUNC_0(FUNC_7(VAR_3));
 struct lp55xx_chip *VAR_9 = VAR_8->chip;
 struct lp55xx_engine *VAR_10 = &VAR_9->engines[VAR_7 - 1];

 FUNC_4(&VAR_9->lock);

 VAR_9->engine_idx = VAR_7;

 if (!FUNC_6(VAR_5, "run", 3)) {
  FUNC_2(VAR_9, 1);
  VAR_10->mode = VAR_2;
 } else if (!FUNC_6(VAR_5, "load", 4)) {
  FUNC_3(VAR_9);
  FUNC_1(VAR_9);
  VAR_10->mode = VAR_1;
 } else if (!FUNC_6(VAR_5, "disabled", 8)) {
  FUNC_3(VAR_9);
  VAR_10->mode = VAR_0;
 }

 FUNC_5(&VAR_9->lock);

 return VAR_6;
}
