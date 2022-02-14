
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct tlc591xx_priv {int regmap; } ;
struct tlc591xx_led {int led_no; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int ) ;

__attribute__((used)) static int
FUNC_2(struct tlc591xx_priv *VAR_0, struct tlc591xx_led *VAR_1,
   u8 VAR_2)
{
 u8 VAR_3 = FUNC_0(VAR_1->led_no);

 return FUNC_1(VAR_0->regmap, VAR_3, VAR_2);
}
