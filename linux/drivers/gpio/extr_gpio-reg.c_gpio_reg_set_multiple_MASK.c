
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gpio_reg {unsigned long out; int lock; int reg; } ;
struct gpio_chip {int dummy; } ;


 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;
 struct gpio_reg* FUNC_2 (struct gpio_chip*) ;
 int FUNC_3 (unsigned long,int ) ;

__attribute__((used)) static void FUNC_4(struct gpio_chip *VAR_0, unsigned long *VAR_1,
 unsigned long *VAR_2)
{
 struct gpio_reg *VAR_3 = FUNC_2(VAR_0);
 unsigned long VAR_4;

 FUNC_0(&VAR_3->lock, VAR_4);
 VAR_3->out = (VAR_3->out & ~*VAR_1) | (*VAR_2 & *VAR_1);
 FUNC_3(VAR_3->out, VAR_3->reg);
 FUNC_1(&VAR_3->lock, VAR_4);
}
