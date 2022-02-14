
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct cs5535_gpio_chip {unsigned int base; int lock; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 struct cs5535_gpio_chip VAR_4 ;
 int FUNC_0 (unsigned int) ;
 int FUNC_1 (int,unsigned int) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

void FUNC_4(unsigned VAR_5, int VAR_6, int VAR_7)
{
 struct cs5535_gpio_chip *VAR_8 = &VAR_4;
 uint32_t VAR_9 = (VAR_5 % 8) * 4;
 unsigned long VAR_10;
 uint32_t VAR_11;

 if (VAR_5 >= 24)
  VAR_5 = VAR_0;
 else if (VAR_5 >= 16)
  VAR_5 = VAR_3;
 else if (VAR_5 >= 8)
  VAR_5 = VAR_2;
 else
  VAR_5 = VAR_1;

 FUNC_2(&VAR_8->lock, VAR_10);
 VAR_11 = FUNC_0(VAR_8->base + VAR_5);


 VAR_11 &= ~(0xF << VAR_9);


 VAR_11 |= ((VAR_6 & 7) << VAR_9);


 if (VAR_7)
  VAR_11 |= (1 << (VAR_9 + 3));

 FUNC_1(VAR_11, VAR_8->base + VAR_5);
 FUNC_3(&VAR_8->lock, VAR_10);
}
