
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


 scalar_t__ VAR_0 ;
 struct lp55xx_led* FUNC_0 (int ) ;
 int FUNC_1 (struct lp55xx_chip*,scalar_t__,int*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (char*,char*,int) ;
 int FUNC_5 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_6(struct device *VAR_1,
     struct device_attribute *VAR_2,
     char *VAR_3, int VAR_4)
{
 struct lp55xx_led *VAR_5 = FUNC_0(FUNC_5(VAR_1));
 struct lp55xx_chip *VAR_6 = VAR_5->chip;
 int VAR_7;
 u8 VAR_8;

 FUNC_2(&VAR_6->lock);
 VAR_7 = FUNC_1(VAR_6, VAR_0 + VAR_4 - 1, &VAR_8);
 FUNC_3(&VAR_6->lock);

 if (VAR_7 == 0)
  VAR_7 = FUNC_4(VAR_3, "%u\n", VAR_8);

 return VAR_7;
}
