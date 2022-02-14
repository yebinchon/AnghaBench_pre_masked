
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lm3601x_led {int lock; int regmap; } ;
struct led_classdev_flash {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct lm3601x_led* FUNC_0 (struct led_classdev_flash*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int ,int*) ;

__attribute__((used)) static int FUNC_4(struct led_classdev_flash *VAR_2, bool *VAR_3)
{
 struct lm3601x_led *VAR_4 = FUNC_0(VAR_2);
 int VAR_5;
 int VAR_6;

 FUNC_1(&VAR_4->lock);

 VAR_6 = FUNC_3(VAR_4->regmap, VAR_0, &VAR_5);
 if (VAR_6 < 0)
  goto out;

 *VAR_3 = VAR_5 & VAR_1;

out:
 FUNC_2(&VAR_4->lock);
 return VAR_6;
}
