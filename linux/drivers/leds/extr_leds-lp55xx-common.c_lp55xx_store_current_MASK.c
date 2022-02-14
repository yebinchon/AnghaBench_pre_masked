
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct lp55xx_led {unsigned long max_current; struct lp55xx_chip* chip; } ;
struct lp55xx_chip {int lock; TYPE_1__* cfg; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef size_t ssize_t ;
struct TYPE_2__ {int (* set_led_current ) (struct lp55xx_led*,int ) ;} ;


 size_t VAR_0 ;
 struct lp55xx_led* FUNC_0 (struct device*) ;
 scalar_t__ FUNC_1 (char const*,int ,unsigned long*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct lp55xx_led*,int ) ;

__attribute__((used)) static ssize_t FUNC_5(struct device *VAR_1,
        struct device_attribute *VAR_2,
        const char *VAR_3, size_t VAR_4)
{
 struct lp55xx_led *VAR_5 = FUNC_0(VAR_1);
 struct lp55xx_chip *VAR_6 = VAR_5->chip;
 unsigned long VAR_7;

 if (FUNC_1(VAR_3, 0, &VAR_7))
  return -VAR_0;

 if (VAR_7 > VAR_5->max_current)
  return -VAR_0;

 if (!VAR_6->cfg->set_led_current)
  return VAR_4;

 FUNC_2(&VAR_6->lock);
 VAR_6->cfg->set_led_current(VAR_5, (u8)VAR_7);
 FUNC_3(&VAR_6->lock);

 return VAR_4;
}
