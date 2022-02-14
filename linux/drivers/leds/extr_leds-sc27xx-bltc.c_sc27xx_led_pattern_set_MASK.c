
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u32 ;
struct sc27xx_led {int line; TYPE_1__* priv; } ;
struct regmap {int dummy; } ;
struct led_pattern {int delta_t; int brightness; } ;
struct led_classdev {int brightness; } ;
struct TYPE_2__ {scalar_t__ base; int lock; struct regmap* regmap; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct regmap*,scalar_t__,int,int) ;
 int FUNC_3 (int*) ;
 scalar_t__ FUNC_4 (struct sc27xx_led*) ;
 struct sc27xx_led* FUNC_5 (struct led_classdev*) ;

__attribute__((used)) static int FUNC_6(struct led_classdev *VAR_15,
      struct led_pattern *VAR_16,
      u32 VAR_17, int VAR_18)
{
 struct sc27xx_led *VAR_19 = FUNC_5(VAR_15);
 u32 VAR_20 = FUNC_4(VAR_19);
 u32 VAR_21 = VAR_19->priv->base + VAR_7;
 u8 VAR_22 = VAR_1 * VAR_19->line;
 struct regmap *VAR_23 = VAR_19->priv->regmap;
 int VAR_24;





 if (VAR_17 != VAR_11)
  return -VAR_0;

 FUNC_0(&VAR_19->priv->lock);

 FUNC_3(&VAR_16[0].delta_t);
 VAR_24 = FUNC_2(VAR_23, VAR_20 + VAR_8,
     VAR_3,
     VAR_16[0].delta_t / VAR_12);
 if (VAR_24)
  goto out;

 FUNC_3(&VAR_16[1].delta_t);
 VAR_24 = FUNC_2(VAR_23, VAR_20 + VAR_9,
     VAR_3,
     VAR_16[1].delta_t / VAR_12);
 if (VAR_24)
  goto out;

 FUNC_3(&VAR_16[2].delta_t);
 VAR_24 = FUNC_2(VAR_23, VAR_20 + VAR_8,
     VAR_2,
     (VAR_16[2].delta_t / VAR_12) <<
     VAR_4);
 if (VAR_24)
  goto out;

 FUNC_3(&VAR_16[3].delta_t);
 VAR_24 = FUNC_2(VAR_23, VAR_20 + VAR_9,
     VAR_2,
     (VAR_16[3].delta_t / VAR_12) <<
     VAR_4);
 if (VAR_24)
  goto out;

 VAR_24 = FUNC_2(VAR_23, VAR_20 + VAR_10,
     VAR_5,
     (VAR_16[1].brightness << VAR_6) |
     VAR_14);
 if (VAR_24)
  goto out;


 VAR_24 = FUNC_2(VAR_23, VAR_21,
     VAR_13 << VAR_22,
     VAR_13 << VAR_22);
 if (!VAR_24)
  VAR_15->brightness = VAR_16[1].brightness;

out:
 FUNC_1(&VAR_19->priv->lock);

 return VAR_24;
}
