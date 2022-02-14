
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stx104_gpio {unsigned long out_state; int lock; int base; } ;
struct gpio_chip {int dummy; } ;


 struct stx104_gpio* FUNC_0 (struct gpio_chip*) ;
 int FUNC_1 (unsigned long,int ) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_4(struct gpio_chip *VAR_0,
 unsigned long *VAR_1, unsigned long *VAR_2)
{
 struct stx104_gpio *const VAR_3 = FUNC_0(VAR_0);
 unsigned long VAR_4;


 if (!(*VAR_1 & 0xF0))
  return;

 *VAR_1 >>= 4;
 *VAR_2 >>= 4;

 FUNC_2(&VAR_3->lock, VAR_4);

 VAR_3->out_state &= ~*VAR_1;
 VAR_3->out_state |= *VAR_1 & *VAR_2;
 FUNC_1(VAR_3->out_state, VAR_3->base);

 FUNC_3(&VAR_3->lock, VAR_4);
}
