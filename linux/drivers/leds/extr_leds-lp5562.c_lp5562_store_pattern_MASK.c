
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct lp55xx_predef_pattern {int dummy; } ;
struct lp55xx_led {struct lp55xx_chip* chip; } ;
struct lp55xx_chip {int lock; TYPE_1__* pdata; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
struct TYPE_2__ {int num_patterns; struct lp55xx_predef_pattern* patterns; } ;


 int VAR_0 ;
 struct lp55xx_led* FUNC_0 (int ) ;
 int FUNC_1 (char const*,int ,unsigned long*) ;
 int FUNC_2 (struct lp55xx_chip*,unsigned long) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_6(struct device *VAR_1,
    struct device_attribute *VAR_2,
    const char *VAR_3, size_t VAR_4)
{
 struct lp55xx_led *VAR_5 = FUNC_0(FUNC_5(VAR_1));
 struct lp55xx_chip *VAR_6 = VAR_5->chip;
 struct lp55xx_predef_pattern *VAR_7 = VAR_6->pdata->patterns;
 int VAR_8 = VAR_6->pdata->num_patterns;
 unsigned long VAR_9;
 int VAR_10;

 VAR_10 = FUNC_1(VAR_3, 0, &VAR_9);
 if (VAR_10)
  return VAR_10;

 if (VAR_9 > VAR_8 || !VAR_7)
  return -VAR_0;

 FUNC_3(&VAR_6->lock);
 VAR_10 = FUNC_2(VAR_6, VAR_9);
 FUNC_4(&VAR_6->lock);

 if (VAR_10)
  return VAR_10;

 return VAR_4;
}
