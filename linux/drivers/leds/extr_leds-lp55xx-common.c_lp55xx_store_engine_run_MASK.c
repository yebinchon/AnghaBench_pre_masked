
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lp55xx_led {struct lp55xx_chip* chip; } ;
struct lp55xx_chip {int lock; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef size_t ssize_t ;


 size_t VAR_0 ;
 struct lp55xx_led* FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (char const*,int ,unsigned long*) ;
 int FUNC_2 (struct lp55xx_chip*,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_6(struct device *VAR_1,
        struct device_attribute *VAR_2,
        const char *VAR_3, size_t VAR_4)
{
 struct lp55xx_led *VAR_5 = FUNC_0(FUNC_5(VAR_1));
 struct lp55xx_chip *VAR_6 = VAR_5->chip;
 unsigned long VAR_7;

 if (FUNC_1(VAR_3, 0, &VAR_7))
  return -VAR_0;



 if (VAR_7 <= 0) {
  FUNC_2(VAR_6, 0);
  return VAR_4;
 }

 FUNC_3(&VAR_6->lock);
 FUNC_2(VAR_6, 1);
 FUNC_4(&VAR_6->lock);

 return VAR_4;
}
