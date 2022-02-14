
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gpio_chip {int dummy; } ;
struct exar_gpio_chip {unsigned int first_pin; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (struct gpio_chip*,unsigned int,int,unsigned int) ;
 struct exar_gpio_chip* FUNC_1 (struct gpio_chip*) ;

__attribute__((used)) static void FUNC_2(struct gpio_chip *VAR_2, unsigned int VAR_3,
      int VAR_4)
{
 struct exar_gpio_chip *VAR_5 = FUNC_1(VAR_2);
 unsigned int VAR_6 = (VAR_3 + VAR_5->first_pin) / 8 ?
  VAR_0 : VAR_1;
 unsigned int VAR_7 = (VAR_3 + VAR_5->first_pin) % 8;

 FUNC_0(VAR_2, VAR_6, VAR_4, VAR_7);
}
