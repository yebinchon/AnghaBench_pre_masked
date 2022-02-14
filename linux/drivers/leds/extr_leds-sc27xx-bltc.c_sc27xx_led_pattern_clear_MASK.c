
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u32 ;
struct sc27xx_led {int line; TYPE_1__* priv; } ;
struct regmap {int dummy; } ;
struct led_classdev {int brightness; } ;
struct TYPE_2__ {int lock; scalar_t__ base; struct regmap* regmap; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct regmap*,scalar_t__,int,int ) ;
 int FUNC_3 (struct regmap*,scalar_t__,int ) ;
 scalar_t__ FUNC_4 (struct sc27xx_led*) ;
 struct sc27xx_led* FUNC_5 (struct led_classdev*) ;

__attribute__((used)) static int FUNC_6(struct led_classdev *VAR_7)
{
 struct sc27xx_led *VAR_8 = FUNC_5(VAR_7);
 struct regmap *VAR_9 = VAR_8->priv->regmap;
 u32 VAR_10 = FUNC_4(VAR_8);
 u32 VAR_11 = VAR_8->priv->base + VAR_2;
 u8 VAR_12 = VAR_1 * VAR_8->line;
 int VAR_13;

 FUNC_0(&VAR_8->priv->lock);


 FUNC_3(VAR_9, VAR_10 + VAR_3, 0);
 FUNC_3(VAR_9, VAR_10 + VAR_4, 0);

 VAR_13 = FUNC_2(VAR_9, VAR_11,
   (VAR_5 | VAR_6) << VAR_12, 0);

 VAR_7->brightness = VAR_0;

 FUNC_1(&VAR_8->priv->lock);

 return VAR_13;
}
