
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gpio_chip {int bgpio_bits; } ;


 scalar_t__ FUNC_0 (int,unsigned long*) ;
 unsigned long FUNC_1 (struct gpio_chip*,int) ;
 scalar_t__ FUNC_2 (int,unsigned long*) ;

__attribute__((used)) static void FUNC_3(struct gpio_chip *VAR_0,
         unsigned long *VAR_1, unsigned long *VAR_2,
         unsigned long *VAR_3,
         unsigned long *VAR_4)
{
 int VAR_5;

 *VAR_3 = 0;
 *VAR_4 = 0;

 for (VAR_5 = 0; VAR_5 < VAR_0->bgpio_bits; VAR_5++) {
  if (*VAR_1 == 0)
   break;
  if (FUNC_0(VAR_5, VAR_1)) {
   if (FUNC_2(VAR_5, VAR_2))
    *VAR_3 |= FUNC_1(VAR_0, VAR_5);
   else
    *VAR_4 |= FUNC_1(VAR_0, VAR_5);
  }
 }
}
