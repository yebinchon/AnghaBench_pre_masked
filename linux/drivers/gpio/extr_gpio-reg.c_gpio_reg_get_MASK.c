
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct gpio_reg {int direction; int out; int reg; } ;
struct gpio_chip {int dummy; } ;


 int FUNC_0 (unsigned int) ;
 int FUNC_1 (int ) ;
 struct gpio_reg* FUNC_2 (struct gpio_chip*) ;

__attribute__((used)) static int FUNC_3(struct gpio_chip *VAR_0, unsigned VAR_1)
{
 struct gpio_reg *VAR_2 = FUNC_2(VAR_0);
 u32 VAR_3, VAR_4 = FUNC_0(VAR_1);

 if (VAR_2->direction & VAR_4) {




  FUNC_1(VAR_2->reg);
  VAR_3 = FUNC_1(VAR_2->reg);
 } else {
  VAR_3 = VAR_2->out;
 }
 return !!(VAR_3 & VAR_4);
}
