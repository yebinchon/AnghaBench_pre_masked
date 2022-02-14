
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cs5535_gpio_chip {int lock; scalar_t__ base; } ;


 struct cs5535_gpio_chip VAR_0 ;
 long FUNC_0 (scalar_t__) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

int FUNC_3(unsigned VAR_1, unsigned int VAR_2)
{
 struct cs5535_gpio_chip *VAR_3 = &VAR_0;
 unsigned long VAR_4;
 long VAR_5;

 FUNC_1(&VAR_3->lock, VAR_4);
 if (VAR_1 < 16)

  VAR_5 = FUNC_0(VAR_3->base + VAR_2);
 else {

  VAR_5 = FUNC_0(VAR_3->base + 0x80 + VAR_2);
  VAR_1 -= 16;
 }
 FUNC_2(&VAR_3->lock, VAR_4);

 return (VAR_5 & (1 << VAR_1)) ? 1 : 0;
}
