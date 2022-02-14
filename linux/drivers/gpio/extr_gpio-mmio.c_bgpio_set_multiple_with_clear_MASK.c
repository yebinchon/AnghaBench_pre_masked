
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gpio_chip {int reg_clr; int (* write_reg ) (int ,unsigned long) ;int reg_set; } ;


 int FUNC_0 (struct gpio_chip*,unsigned long*,unsigned long*,unsigned long*,unsigned long*) ;
 int FUNC_1 (int ,unsigned long) ;
 int FUNC_2 (int ,unsigned long) ;

__attribute__((used)) static void FUNC_3(struct gpio_chip *VAR_0,
       unsigned long *VAR_1,
       unsigned long *VAR_2)
{
 unsigned long VAR_3, VAR_4;

 FUNC_0(VAR_0, VAR_1, VAR_2, &VAR_3, &VAR_4);

 if (VAR_3)
  VAR_0->write_reg(VAR_0->reg_set, VAR_3);
 if (VAR_4)
  VAR_0->write_reg(VAR_0->reg_clr, VAR_4);
}
