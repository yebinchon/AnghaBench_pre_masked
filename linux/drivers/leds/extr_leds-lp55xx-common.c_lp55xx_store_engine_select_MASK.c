
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lp55xx_led {struct lp55xx_chip* chip; } ;
struct lp55xx_chip {unsigned long engine_idx; int lock; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;



 int FUNC_0 (struct device*,char*,int) ;
 struct lp55xx_led* FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (char const*,int ,unsigned long*) ;
 int FUNC_3 (struct lp55xx_chip*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_7(struct device *VAR_1,
        struct device_attribute *VAR_2,
        const char *VAR_3, size_t VAR_4)
{
 struct lp55xx_led *VAR_5 = FUNC_1(FUNC_6(VAR_1));
 struct lp55xx_chip *VAR_6 = VAR_5->chip;
 unsigned long VAR_7;
 int VAR_8;

 if (FUNC_2(VAR_3, 0, &VAR_7))
  return -VAR_0;



 switch (VAR_7) {
 case 130:
 case 129:
 case 128:
  FUNC_4(&VAR_6->lock);
  VAR_6->engine_idx = VAR_7;
  VAR_8 = FUNC_3(VAR_6);
  FUNC_5(&VAR_6->lock);
  break;
 default:
  FUNC_0(VAR_1, "%lu: invalid engine index. (1, 2, 3)\n", VAR_7);
  return -VAR_0;
 }

 if (VAR_8) {
  FUNC_0(VAR_1, "request firmware err: %d\n", VAR_8);
  return VAR_8;
 }

 return VAR_4;
}
