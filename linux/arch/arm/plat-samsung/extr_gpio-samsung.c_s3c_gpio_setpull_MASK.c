
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned int base; } ;
struct samsung_gpio_chip {TYPE_1__ chip; } ;
typedef int samsung_gpio_pull_t ;


 int VAR_0 ;
 int FUNC_0 (struct samsung_gpio_chip*,int,int ) ;
 int FUNC_1 (struct samsung_gpio_chip*,unsigned long) ;
 int FUNC_2 (struct samsung_gpio_chip*,unsigned long) ;
 struct samsung_gpio_chip* FUNC_3 (unsigned int) ;

int FUNC_4(unsigned int VAR_1, samsung_gpio_pull_t VAR_2)
{
 struct samsung_gpio_chip *VAR_3 = FUNC_3(VAR_1);
 unsigned long VAR_4;
 int VAR_5, VAR_6;

 if (!VAR_3)
  return -VAR_0;

 VAR_5 = VAR_1 - VAR_3->chip.base;

 FUNC_1(VAR_3, VAR_4);
 VAR_6 = FUNC_0(VAR_3, VAR_5, VAR_2);
 FUNC_2(VAR_3, VAR_4);

 return VAR_6;
}
