
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct lm3601x_led {int lock; int regmap; } ;
struct led_classdev_flash {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct lm3601x_led* FUNC_0 (struct led_classdev_flash*) ;
 int FUNC_1 (struct lm3601x_led*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,int ,int ,int) ;
 int FUNC_5 (int ,int ,int) ;

__attribute__((used)) static int FUNC_6(struct led_classdev_flash *VAR_5,
     u32 VAR_6)
{
 struct lm3601x_led *VAR_7 = FUNC_0(VAR_5);
 u8 VAR_8;
 int VAR_9;

 FUNC_2(&VAR_7->lock);
 VAR_9 = FUNC_1(VAR_7);
 if (VAR_9 < 0)
  goto out;

 if (VAR_6 == VAR_0) {
  VAR_9 = FUNC_4(VAR_7->regmap, VAR_1,
     VAR_3, VAR_0);
  goto out;
 }

 VAR_8 = VAR_6 / VAR_4;

 VAR_9 = FUNC_5(VAR_7->regmap, VAR_2, VAR_8);
out:
 FUNC_3(&VAR_7->lock);
 return VAR_9;
}
