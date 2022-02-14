
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct lp55xx_led {struct lp55xx_chip* chip; } ;
struct lp55xx_chip {int engine_idx; int lock; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef size_t ssize_t ;
typedef enum lp55xx_engine_index { ____Placeholder_lp55xx_engine_index } lp55xx_engine_index ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;



 int FUNC_0 (struct device*,char*) ;
 struct lp55xx_led* FUNC_1 (int ) ;
 int FUNC_2 (struct lp55xx_chip*,int ,int ,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (char const*,char*) ;
 int FUNC_6 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_7(struct device *VAR_8,
         struct device_attribute *VAR_9,
         const char *VAR_10, size_t VAR_11)
{
 struct lp55xx_led *VAR_12 = FUNC_1(FUNC_6(VAR_8));
 struct lp55xx_chip *VAR_13 = VAR_12->chip;
 u8 VAR_14;
 u8 VAR_15;
 if (FUNC_5(VAR_10, "RGB")) {
  VAR_14 = VAR_4;
  VAR_15 = VAR_6;
 } else if (FUNC_5(VAR_10, "W")) {
  enum lp55xx_engine_index VAR_16 = VAR_13->engine_idx;

  VAR_14 = VAR_5;
  switch (VAR_16) {
  case 130:
   VAR_15 = VAR_1;
   break;
  case 129:
   VAR_15 = VAR_2;
   break;
  case 128:
   VAR_15 = VAR_3;
   break;
  default:
   return -VAR_0;
  }

 } else {
  FUNC_0(VAR_8, "choose RGB or W\n");
  return -VAR_0;
 }

 FUNC_3(&VAR_13->lock);
 FUNC_2(VAR_13, VAR_7, VAR_14, VAR_15);
 FUNC_4(&VAR_13->lock);

 return VAR_11;
}
