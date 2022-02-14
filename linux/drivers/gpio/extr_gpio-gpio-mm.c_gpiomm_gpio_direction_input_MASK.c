
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gpiomm_gpio {int base; int* io_state; unsigned int* control; int lock; } ;
struct gpio_chip {int dummy; } ;


 unsigned int FUNC_0 (int) ;
 struct gpiomm_gpio* FUNC_1 (struct gpio_chip*) ;
 int FUNC_2 (unsigned int,unsigned int const) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_5(struct gpio_chip *VAR_0,
 unsigned int VAR_1)
{
 struct gpiomm_gpio *const VAR_2 = FUNC_1(VAR_0);
 const unsigned int VAR_3 = VAR_1 / 8;
 const unsigned int VAR_4 = VAR_3 / 3;
 const unsigned int VAR_5 = VAR_2->base + 3 + VAR_4*4;
 unsigned long VAR_6;
 unsigned int VAR_7;

 FUNC_3(&VAR_2->lock, VAR_6);


 if (VAR_3 == 2 || VAR_3 == 5) {

  if (VAR_1 % 8 > 3) {
   VAR_2->io_state[VAR_3] |= 0xF0;
   VAR_2->control[VAR_4] |= FUNC_0(3);
  } else {
   VAR_2->io_state[VAR_3] |= 0x0F;
   VAR_2->control[VAR_4] |= FUNC_0(0);
  }
 } else {
  VAR_2->io_state[VAR_3] |= 0xFF;
  if (VAR_3 == 0 || VAR_3 == 3)
   VAR_2->control[VAR_4] |= FUNC_0(4);
  else
   VAR_2->control[VAR_4] |= FUNC_0(1);
 }

 VAR_7 = FUNC_0(7) | VAR_2->control[VAR_4];
 FUNC_2(VAR_7, VAR_5);

 FUNC_4(&VAR_2->lock, VAR_6);

 return 0;
}
