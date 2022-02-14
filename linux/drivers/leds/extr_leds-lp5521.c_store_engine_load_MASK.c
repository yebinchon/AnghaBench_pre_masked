
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lp55xx_led {struct lp55xx_chip* chip; } ;
struct lp55xx_chip {int engine_idx; int lock; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 struct lp55xx_led* FUNC_0 (int ) ;
 int FUNC_1 (struct lp55xx_chip*) ;
 int FUNC_2 (struct lp55xx_chip*,char const*,size_t) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_6(struct device *VAR_0,
        struct device_attribute *VAR_1,
        const char *VAR_2, size_t VAR_3, int VAR_4)
{
 struct lp55xx_led *VAR_5 = FUNC_0(FUNC_5(VAR_0));
 struct lp55xx_chip *VAR_6 = VAR_5->chip;
 int VAR_7;

 FUNC_3(&VAR_6->lock);

 VAR_6->engine_idx = VAR_4;
 FUNC_1(VAR_6);
 VAR_7 = FUNC_2(VAR_6, VAR_2, VAR_3);

 FUNC_4(&VAR_6->lock);

 return VAR_7;
}
