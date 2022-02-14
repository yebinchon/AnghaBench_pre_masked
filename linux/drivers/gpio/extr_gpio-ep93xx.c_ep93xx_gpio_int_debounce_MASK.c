
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gpio_chip {int dummy; } ;
struct ep93xx_gpio {scalar_t__ base; } ;


 int FUNC_0 (unsigned int) ;
 int FUNC_1 (struct gpio_chip*) ;
 int* VAR_0 ;
 struct ep93xx_gpio* FUNC_2 (struct gpio_chip*) ;
 scalar_t__* VAR_1 ;
 int FUNC_3 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_4(struct gpio_chip *VAR_2,
         unsigned int VAR_3, bool VAR_4)
{
 struct ep93xx_gpio *VAR_5 = FUNC_2(VAR_2);
 int VAR_6 = FUNC_1(VAR_2);
 int VAR_7 = FUNC_0(VAR_3);

 if (VAR_4)
  VAR_0[VAR_6] |= VAR_7;
 else
  VAR_0[VAR_6] &= ~VAR_7;

 FUNC_3(VAR_0[VAR_6],
        VAR_5->base + VAR_1[VAR_6]);
}
