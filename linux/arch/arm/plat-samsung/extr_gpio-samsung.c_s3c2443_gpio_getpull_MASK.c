
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct samsung_gpio_chip {int dummy; } ;
typedef int samsung_gpio_pull_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct samsung_gpio_chip*,unsigned int) ;

samsung_gpio_pull_t FUNC_1(struct samsung_gpio_chip *VAR_3,
      unsigned int VAR_4)
{
 samsung_gpio_pull_t VAR_5;

 VAR_5 = FUNC_0(VAR_3, VAR_4);

 switch (VAR_5) {
 case 0x00:
  VAR_5 = VAR_2;
  break;
 case 0x01:
 case 0x03:
  VAR_5 = VAR_1;
  break;
 case 0x02:
  VAR_5 = VAR_0;
  break;
 }

 return VAR_5;
}
