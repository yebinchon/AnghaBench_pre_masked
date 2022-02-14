
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rdc321x_gpio {int lock; } ;
struct gpio_chip {int dummy; } ;


 struct rdc321x_gpio* FUNC_0 (struct gpio_chip*) ;
 int FUNC_1 (struct gpio_chip*,unsigned int,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct gpio_chip *VAR_0,
    unsigned VAR_1, int VAR_2)
{
 struct rdc321x_gpio *VAR_3;

 VAR_3 = FUNC_0(VAR_0);
 FUNC_2(&VAR_3->lock);
 FUNC_1(VAR_0, VAR_1, VAR_2);
 FUNC_3(&VAR_3->lock);
}
