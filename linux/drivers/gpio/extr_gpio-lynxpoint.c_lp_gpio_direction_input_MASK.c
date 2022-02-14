
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lp_gpio {int lock; } ;
struct gpio_chip {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct lp_gpio* FUNC_0 (struct gpio_chip*) ;
 int FUNC_1 (unsigned long) ;
 unsigned long FUNC_2 (struct gpio_chip*,unsigned int,int ) ;
 int FUNC_3 (int,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_6(struct gpio_chip *VAR_2, unsigned VAR_3)
{
 struct lp_gpio *VAR_4 = FUNC_0(VAR_2);
 unsigned long VAR_5 = FUNC_2(VAR_2, VAR_3, VAR_1);
 unsigned long VAR_6;

 FUNC_4(&VAR_4->lock, VAR_6);
 FUNC_3(FUNC_1(VAR_5) | VAR_0, VAR_5);
 FUNC_5(&VAR_4->lock, VAR_6);

 return 0;
}
