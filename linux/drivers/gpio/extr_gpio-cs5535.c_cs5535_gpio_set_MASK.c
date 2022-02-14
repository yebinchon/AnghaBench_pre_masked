
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cs5535_gpio_chip {int lock; } ;


 int FUNC_0 (struct cs5535_gpio_chip*,unsigned int,unsigned int) ;
 struct cs5535_gpio_chip VAR_0 ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

void FUNC_3(unsigned VAR_1, unsigned int VAR_2)
{
 struct cs5535_gpio_chip *VAR_3 = &VAR_0;
 unsigned long VAR_4;

 FUNC_1(&VAR_3->lock, VAR_4);
 FUNC_0(VAR_3, VAR_1, VAR_2);
 FUNC_2(&VAR_3->lock, VAR_4);
}
