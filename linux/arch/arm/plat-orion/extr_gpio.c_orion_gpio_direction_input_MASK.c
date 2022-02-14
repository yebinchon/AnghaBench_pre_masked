
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct orion_gpio_chip {int lock; } ;
struct gpio_chip {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct orion_gpio_chip*,unsigned int,int) ;
 struct orion_gpio_chip* FUNC_1 (struct gpio_chip*) ;
 int FUNC_2 (struct orion_gpio_chip*,unsigned int,int ) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_5(struct gpio_chip *VAR_2, unsigned VAR_3)
{
 struct orion_gpio_chip *VAR_4 = FUNC_1(VAR_2);
 unsigned long VAR_5;

 if (!FUNC_2(VAR_4, VAR_3, VAR_1))
  return -VAR_0;

 FUNC_3(&VAR_4->lock, VAR_5);
 FUNC_0(VAR_4, VAR_3, 1);
 FUNC_4(&VAR_4->lock, VAR_5);

 return 0;
}
