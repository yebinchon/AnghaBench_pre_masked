
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wcove_gpio {int regmap; scalar_t__ set_irq_mask; } ;


 unsigned int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,unsigned int,unsigned int,unsigned int) ;

__attribute__((used)) static void FUNC_2(struct wcove_gpio *VAR_3, int VAR_4)
{
 unsigned int VAR_5, VAR_6;

 if (VAR_4 < VAR_0) {
  VAR_5 = VAR_2;
  VAR_6 = FUNC_0(VAR_4 % VAR_0);
 } else {
  VAR_5 = VAR_2 + 1;
  VAR_6 = FUNC_0((VAR_4 - VAR_0) % VAR_1);
 }

 if (VAR_3->set_irq_mask)
  FUNC_1(VAR_3->regmap, VAR_5, VAR_6, VAR_6);
 else
  FUNC_1(VAR_3->regmap, VAR_5, VAR_6, 0);
}
