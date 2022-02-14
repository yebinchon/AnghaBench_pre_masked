
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gpio_reg {int lock; int reg; int out; } ;
struct gpio_chip {int dummy; } ;


 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;
 struct gpio_reg* FUNC_2 (struct gpio_chip*) ;
 int FUNC_3 (int ,int ) ;

int FUNC_4(struct gpio_chip *VAR_0)
{
 struct gpio_reg *VAR_1 = FUNC_2(VAR_0);
 unsigned long VAR_2;

 FUNC_0(&VAR_1->lock, VAR_2);
 FUNC_3(VAR_1->out, VAR_1->reg);
 FUNC_1(&VAR_1->lock, VAR_2);

 return 0;
}
