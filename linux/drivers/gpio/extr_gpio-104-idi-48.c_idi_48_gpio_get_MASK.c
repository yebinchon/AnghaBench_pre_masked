
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct idi_48_gpio {scalar_t__ base; } ;
struct gpio_chip {int dummy; } ;


 unsigned int FUNC_0 (unsigned int) ;
 struct idi_48_gpio* FUNC_1 (struct gpio_chip*) ;
 unsigned int FUNC_2 (scalar_t__) ;

__attribute__((used)) static int FUNC_3(struct gpio_chip *VAR_0, unsigned VAR_1)
{
 struct idi_48_gpio *const VAR_2 = FUNC_1(VAR_0);
 unsigned VAR_3;
 const unsigned VAR_4[6] = { 0, 1, 2, 4, 5, 6 };
 unsigned VAR_5;
 unsigned VAR_6;

 for (VAR_3 = 0; VAR_3 < 48; VAR_3 += 8)
  if (VAR_1 < VAR_3 + 8) {
   VAR_5 = VAR_4[VAR_3 / 8];
   VAR_6 = FUNC_0(VAR_1 - VAR_3);

   return !!(FUNC_2(VAR_2->base + VAR_5) & VAR_6);
  }


 return 0;
}
