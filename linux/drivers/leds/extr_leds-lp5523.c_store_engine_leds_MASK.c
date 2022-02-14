
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct lp55xx_led {struct lp55xx_chip* chip; } ;
struct lp55xx_engine {scalar_t__ mode; } ;
struct lp55xx_chip {int engine_idx; int lock; struct lp55xx_engine* engines; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef size_t ssize_t ;


 size_t VAR_0 ;
 scalar_t__ VAR_1 ;
 struct lp55xx_led* FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct lp55xx_chip*,int ,int) ;
 scalar_t__ FUNC_2 (char const*,int *,size_t) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_6(struct device *VAR_2,
        struct device_attribute *VAR_3,
        const char *VAR_4, size_t VAR_5, int VAR_6)
{
 struct lp55xx_led *VAR_7 = FUNC_0(FUNC_5(VAR_2));
 struct lp55xx_chip *VAR_8 = VAR_7->chip;
 struct lp55xx_engine *VAR_9 = &VAR_8->engines[VAR_6 - 1];
 u16 VAR_10 = 0;
 ssize_t VAR_11;

 if (FUNC_2(VAR_4, &VAR_10, VAR_5))
  return -VAR_0;

 FUNC_3(&VAR_8->lock);

 VAR_8->engine_idx = VAR_6;
 VAR_11 = -VAR_0;

 if (VAR_9->mode != VAR_1)
  goto leave;

 if (FUNC_1(VAR_8, VAR_10, VAR_6))
  goto leave;

 VAR_11 = VAR_5;
leave:
 FUNC_4(&VAR_8->lock);
 return VAR_11;
}
