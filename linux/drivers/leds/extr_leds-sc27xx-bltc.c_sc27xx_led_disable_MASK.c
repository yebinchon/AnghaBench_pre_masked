
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u32 ;
struct sc27xx_led {int line; TYPE_1__* priv; } ;
struct regmap {int dummy; } ;
struct TYPE_2__ {scalar_t__ base; struct regmap* regmap; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct regmap*,scalar_t__,int,int ) ;

__attribute__((used)) static int FUNC_1(struct sc27xx_led *VAR_4)
{
 struct regmap *VAR_5 = VAR_4->priv->regmap;
 u32 VAR_6 = VAR_4->priv->base + VAR_1;
 u8 VAR_7 = VAR_0 * VAR_4->line;

 return FUNC_0(VAR_5, VAR_6,
   (VAR_2 | VAR_3) << VAR_7, 0);
}
