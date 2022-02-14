
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct idio_16_gpio {int lock; TYPE_1__* reg; } ;
struct gpio_chip {int dummy; } ;
struct TYPE_2__ {int out8_15; int out0_7; } ;


 struct idio_16_gpio* FUNC_0 (struct gpio_chip*) ;
 unsigned long FUNC_1 (int *) ;
 int FUNC_2 (unsigned int,int *) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_5(struct gpio_chip *VAR_0,
 unsigned long *VAR_1, unsigned long *VAR_2)
{
 struct idio_16_gpio *const VAR_3 = FUNC_0(VAR_0);
 unsigned long VAR_4;
 unsigned int VAR_5;

 FUNC_3(&VAR_3->lock, VAR_4);


 if (*VAR_1 & 0xFF) {
  VAR_5 = FUNC_1(&VAR_3->reg->out0_7) & ~*VAR_1;
  VAR_5 |= *VAR_1 & *VAR_2;
  FUNC_2(VAR_5, &VAR_3->reg->out0_7);
 }


 *VAR_1 >>= 8;


 if (*VAR_1 & 0xFF) {
  *VAR_2 >>= 8;
  VAR_5 = FUNC_1(&VAR_3->reg->out8_15) & ~*VAR_1;
  VAR_5 |= *VAR_1 & *VAR_2;
  FUNC_2(VAR_5, &VAR_3->reg->out8_15);
 }

 FUNC_4(&VAR_3->lock, VAR_4);
}
