
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lp55xx_led {struct lp55xx_chip* chip; } ;
struct lp55xx_chip {int lock; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 struct lp55xx_led* FUNC_0 (int ) ;
 int FUNC_1 (struct lp55xx_chip*,char*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (char*,int ,char*,char*) ;
 int FUNC_5 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_6(struct device *VAR_1,
          struct device_attribute *VAR_2,
          char *VAR_3)
{
 struct lp55xx_led *VAR_4 = FUNC_0(FUNC_5(VAR_1));
 struct lp55xx_chip *VAR_5 = VAR_4->chip;
 int VAR_6;

 FUNC_2(&VAR_5->lock);
 VAR_6 = FUNC_1(VAR_5, VAR_3);
 FUNC_3(&VAR_5->lock);

 return FUNC_4(VAR_3, VAR_0, "%s\n", VAR_6 ? "FAIL" : "OK");
}
