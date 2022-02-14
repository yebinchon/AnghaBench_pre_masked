
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct crystalcove_gpio {int regmap; scalar_t__ set_irq_mask; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int ,int,int) ;

__attribute__((used)) static void FUNC_2(struct crystalcove_gpio *VAR_2,
     int VAR_3)
{
 u8 VAR_4 = VAR_3 < 8 ? VAR_0 : VAR_1;
 int VAR_5 = FUNC_0(VAR_3 % 8);

 if (VAR_2->set_irq_mask)
  FUNC_1(VAR_2->regmap, VAR_4, VAR_5, VAR_5);
 else
  FUNC_1(VAR_2->regmap, VAR_4, VAR_5, 0);
}
