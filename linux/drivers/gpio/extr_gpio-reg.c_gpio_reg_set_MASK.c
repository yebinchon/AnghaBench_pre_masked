
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct gpio_reg {int lock; int reg; int out; } ;
struct gpio_chip {int dummy; } ;


 int FUNC_0 (unsigned int) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 struct gpio_reg* FUNC_3 (struct gpio_chip*) ;
 int FUNC_4 (int ,int ) ;

__attribute__((used)) static void FUNC_5(struct gpio_chip *VAR_0, unsigned VAR_1, int VAR_2)
{
 struct gpio_reg *VAR_3 = FUNC_3(VAR_0);
 unsigned long VAR_4;
 u32 VAR_5, VAR_6 = FUNC_0(VAR_1);

 FUNC_1(&VAR_3->lock, VAR_4);
 VAR_5 = VAR_3->out;
 if (VAR_2)
  VAR_5 |= VAR_6;
 else
  VAR_5 &= ~VAR_6;
 VAR_3->out = VAR_5;
 FUNC_4(VAR_5, VAR_3->reg);
 FUNC_2(&VAR_3->lock, VAR_4);
}
