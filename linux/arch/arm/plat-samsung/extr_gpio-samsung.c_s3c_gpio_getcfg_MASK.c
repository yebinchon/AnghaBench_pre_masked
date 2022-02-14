
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned int base; } ;
struct samsung_gpio_chip {TYPE_1__ chip; } ;


 unsigned int FUNC_0 (struct samsung_gpio_chip*,int) ;
 int FUNC_1 (struct samsung_gpio_chip*,unsigned long) ;
 int FUNC_2 (struct samsung_gpio_chip*,unsigned long) ;
 struct samsung_gpio_chip* FUNC_3 (unsigned int) ;

unsigned FUNC_4(unsigned int VAR_0)
{
 struct samsung_gpio_chip *VAR_1 = FUNC_3(VAR_0);
 unsigned long VAR_2;
 unsigned VAR_3 = 0;
 int VAR_4;

 if (VAR_1) {
  VAR_4 = VAR_0 - VAR_1->chip.base;

  FUNC_1(VAR_1, VAR_2);
  VAR_3 = FUNC_0(VAR_1, VAR_4);
  FUNC_2(VAR_1, VAR_2);
 }

 return VAR_3;
}
