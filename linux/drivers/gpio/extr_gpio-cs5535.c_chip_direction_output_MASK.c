
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gpio_chip {int dummy; } ;
struct cs5535_gpio_chip {int lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct cs5535_gpio_chip*,unsigned int,int ) ;
 int FUNC_1 (struct cs5535_gpio_chip*,unsigned int,int ) ;
 struct cs5535_gpio_chip* FUNC_2 (struct gpio_chip*) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_5(struct gpio_chip *VAR_3, unsigned VAR_4, int VAR_5)
{
 struct cs5535_gpio_chip *VAR_6 = FUNC_2(VAR_3);
 unsigned long VAR_7;

 FUNC_3(&VAR_6->lock, VAR_7);

 FUNC_1(VAR_6, VAR_4, VAR_0);
 FUNC_1(VAR_6, VAR_4, VAR_1);
 if (VAR_5)
  FUNC_1(VAR_6, VAR_4, VAR_2);
 else
  FUNC_0(VAR_6, VAR_4, VAR_2);

 FUNC_4(&VAR_6->lock, VAR_7);

 return 0;
}
