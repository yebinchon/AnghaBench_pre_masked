
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u8 ;
struct tlc591xx_priv {int reg_ledout_offset; int regmap; } ;
struct tlc591xx_led {int led_no; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (int ,unsigned int,unsigned int,unsigned int) ;

__attribute__((used)) static int
FUNC_1(struct tlc591xx_priv *VAR_1, struct tlc591xx_led *VAR_2,
      u8 VAR_3)
{
 unsigned int VAR_4 = (VAR_2->led_no % 4) * 2;
 unsigned int VAR_5 = VAR_0 << VAR_4;
 unsigned int VAR_6 = VAR_1->reg_ledout_offset + (VAR_2->led_no >> 2);

 VAR_3 = VAR_3 << VAR_4;

 return FUNC_0(VAR_1->regmap, VAR_6, VAR_5, VAR_3);
}
