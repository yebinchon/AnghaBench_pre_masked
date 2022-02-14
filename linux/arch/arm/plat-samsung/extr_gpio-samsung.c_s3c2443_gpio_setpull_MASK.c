
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct samsung_gpio_chip {int dummy; } ;
typedef int samsung_gpio_pull_t ;





 int FUNC_0 (struct samsung_gpio_chip*,unsigned int,int) ;

int FUNC_1(struct samsung_gpio_chip *VAR_0,
    unsigned int VAR_1, samsung_gpio_pull_t VAR_2)
{
 switch (VAR_2) {
 case 129:
  VAR_2 = 0x01;
  break;
 case 128:
  VAR_2 = 0x00;
  break;
 case 130:
  VAR_2 = 0x02;
  break;
 }
 return FUNC_0(VAR_0, VAR_1, VAR_2);
}
