
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct idio_16_gpio {unsigned long out_state; int lock; scalar_t__ base; } ;
struct gpio_chip {int dummy; } ;


 struct idio_16_gpio* FUNC_0 (struct gpio_chip*) ;
 int FUNC_1 (int,scalar_t__) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_4(struct gpio_chip *VAR_0,
 unsigned long *VAR_1, unsigned long *VAR_2)
{
 struct idio_16_gpio *const VAR_3 = FUNC_0(VAR_0);
 unsigned long VAR_4;

 FUNC_2(&VAR_3->lock, VAR_4);

 VAR_3->out_state &= ~*VAR_1;
 VAR_3->out_state |= *VAR_1 & *VAR_2;

 if (*VAR_1 & 0xFF)
  FUNC_1(VAR_3->out_state, VAR_3->base);
 if ((*VAR_1 >> 8) & 0xFF)
  FUNC_1(VAR_3->out_state >> 8, VAR_3->base + 4);

 FUNC_3(&VAR_3->lock, VAR_4);
}
