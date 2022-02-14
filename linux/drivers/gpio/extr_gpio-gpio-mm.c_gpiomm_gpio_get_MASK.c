
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gpiomm_gpio {unsigned int const* io_state; int lock; scalar_t__ base; } ;
struct gpio_chip {int dummy; } ;


 unsigned int FUNC_0 (unsigned int) ;
 int VAR_0 ;
 struct gpiomm_gpio* FUNC_1 (struct gpio_chip*) ;
 unsigned int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_5(struct gpio_chip *VAR_1, unsigned int VAR_2)
{
 struct gpiomm_gpio *const VAR_3 = FUNC_1(VAR_1);
 const unsigned int VAR_4 = VAR_2 / 8;
 const unsigned int VAR_5 = FUNC_0(VAR_2 % 8);
 const unsigned int VAR_6 = (VAR_4 > 2) ? VAR_4 + 1 : VAR_4;
 unsigned long VAR_7;
 unsigned int VAR_8;

 FUNC_3(&VAR_3->lock, VAR_7);


 if (!(VAR_3->io_state[VAR_4] & VAR_5)) {
  FUNC_4(&VAR_3->lock, VAR_7);
  return -VAR_0;
 }

 VAR_8 = FUNC_2(VAR_3->base + VAR_6);

 FUNC_4(&VAR_3->lock, VAR_7);

 return !!(VAR_8 & VAR_5);
}
