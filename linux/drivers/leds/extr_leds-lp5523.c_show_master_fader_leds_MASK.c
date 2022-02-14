
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
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 struct lp55xx_led* FUNC_0 (int ) ;
 int FUNC_1 (struct lp55xx_chip*,scalar_t__,int*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_5(struct device *VAR_5,
          struct device_attribute *VAR_6,
          char *VAR_7)
{
 struct lp55xx_led *VAR_8 = FUNC_0(FUNC_4(VAR_5));
 struct lp55xx_chip *VAR_9 = VAR_8->chip;
 int VAR_10, VAR_11, VAR_12 = 0;
 u8 VAR_13;

 FUNC_2(&VAR_9->lock);

 for (VAR_10 = 0; VAR_10 < VAR_3; VAR_10++) {
  VAR_11 = FUNC_1(VAR_9, VAR_4 + VAR_10, &VAR_13);
  if (VAR_11)
   goto leave;

  VAR_13 = (VAR_13 & VAR_1)
   >> VAR_2;
  if (VAR_13 > 3) {
   VAR_11 = -VAR_0;
   goto leave;
  }
  VAR_7[VAR_12++] = VAR_13 + '0';
 }
 VAR_7[VAR_12++] = '\n';
 VAR_11 = VAR_12;
leave:
 FUNC_3(&VAR_9->lock);
 return VAR_11;
}
