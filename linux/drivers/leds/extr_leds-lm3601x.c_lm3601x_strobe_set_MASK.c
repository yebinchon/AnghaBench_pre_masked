
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lm3601x_led {int flash_timeout; int lock; int regmap; } ;
struct led_classdev_flash {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 struct lm3601x_led* FUNC_0 (struct led_classdev_flash*) ;
 int FUNC_1 (struct lm3601x_led*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,int ,int*) ;
 int FUNC_5 (int ,int ,int,int) ;

__attribute__((used)) static int FUNC_6(struct led_classdev_flash *VAR_10,
    bool VAR_11)
{
 struct lm3601x_led *VAR_12 = FUNC_0(VAR_10);
 int VAR_13;
 int VAR_14;
 int VAR_15;

 FUNC_2(&VAR_12->lock);

 VAR_15 = FUNC_4(VAR_12->regmap, VAR_1, &VAR_14);
 if (VAR_15 < 0)
  goto out;

 if (VAR_12->flash_timeout >= VAR_8)
  VAR_13 = VAR_12->flash_timeout / VAR_9 + 0x07;
 else
  VAR_13 = VAR_12->flash_timeout / VAR_3 - 0x01;

 if (VAR_12->flash_timeout != VAR_14)
  VAR_15 = FUNC_5(VAR_12->regmap, VAR_1,
     VAR_7, VAR_13);

 if (VAR_11)
  VAR_15 = FUNC_5(VAR_12->regmap, VAR_2,
     VAR_6 | VAR_4,
     VAR_5);
 else
  VAR_15 = FUNC_5(VAR_12->regmap, VAR_2,
     VAR_5, VAR_0);

 VAR_15 = FUNC_1(VAR_12);
out:
 FUNC_3(&VAR_12->lock);
 return VAR_15;
}
