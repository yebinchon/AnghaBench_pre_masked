
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct timbgpio {unsigned int membase; int lock; } ;
struct gpio_chip {int dummy; } ;


 struct timbgpio* FUNC_0 (struct gpio_chip*) ;
 int FUNC_1 (unsigned int) ;
 int FUNC_2 (int,unsigned int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct gpio_chip *VAR_0, unsigned VAR_1,
 unsigned VAR_2, bool VAR_3)
{
 struct timbgpio *VAR_4 = FUNC_0(VAR_0);
 u32 VAR_5;

 FUNC_3(&VAR_4->lock);
 VAR_5 = FUNC_1(VAR_4->membase + VAR_2);

 if (VAR_3)
  VAR_5 |= (1 << VAR_1);
 else
  VAR_5 &= ~(1 << VAR_1);

 FUNC_2(VAR_5, VAR_4->membase + VAR_2);
 FUNC_4(&VAR_4->lock);

 return 0;
}
