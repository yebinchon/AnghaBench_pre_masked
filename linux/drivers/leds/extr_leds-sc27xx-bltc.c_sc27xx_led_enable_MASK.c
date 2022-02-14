
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u32 ;
struct sc27xx_led {int line; TYPE_1__* priv; } ;
struct regmap {int dummy; } ;
typedef enum led_brightness { ____Placeholder_led_brightness } led_brightness ;
struct TYPE_2__ {struct regmap* regmap; scalar_t__ base; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct regmap*,scalar_t__,int,int) ;
 scalar_t__ FUNC_1 (struct sc27xx_led*) ;

__attribute__((used)) static int FUNC_2(struct sc27xx_led *VAR_8, enum led_brightness VAR_9)
{
 u32 VAR_10 = FUNC_1(VAR_8);
 u32 VAR_11 = VAR_8->priv->base + VAR_3;
 u8 VAR_12 = VAR_0 * VAR_8->line;
 struct regmap *VAR_13 = VAR_8->priv->regmap;
 int VAR_14;

 VAR_14 = FUNC_0(VAR_13, VAR_10 + VAR_4,
     VAR_1,
     (VAR_9 << VAR_2) |
     VAR_7);
 if (VAR_14)
  return VAR_14;

 return FUNC_0(VAR_13, VAR_11,
   (VAR_5 | VAR_6) << VAR_12,
   (VAR_5 | VAR_6) << VAR_12);
}
