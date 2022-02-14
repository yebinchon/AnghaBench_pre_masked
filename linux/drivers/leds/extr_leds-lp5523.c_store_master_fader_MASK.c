
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct lp55xx_led {struct lp55xx_chip* chip; } ;
struct lp55xx_chip {int lock; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 struct lp55xx_led* FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (char const*,int ,unsigned long*) ;
 int FUNC_2 (struct lp55xx_chip*,scalar_t__,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_6(struct device *VAR_2,
      struct device_attribute *VAR_3,
      const char *VAR_4, size_t VAR_5, int VAR_6)
{
 struct lp55xx_led *VAR_7 = FUNC_0(FUNC_5(VAR_2));
 struct lp55xx_chip *VAR_8 = VAR_7->chip;
 int VAR_9;
 unsigned long VAR_10;

 if (FUNC_1(VAR_4, 0, &VAR_10))
  return -VAR_0;

 if (VAR_10 > 0xff)
  return -VAR_0;

 FUNC_3(&VAR_8->lock);
 VAR_9 = FUNC_2(VAR_8, VAR_1 + VAR_6 - 1,
      (u8)VAR_10);
 FUNC_4(&VAR_8->lock);

 if (VAR_9 == 0)
  VAR_9 = VAR_5;

 return VAR_9;
}
