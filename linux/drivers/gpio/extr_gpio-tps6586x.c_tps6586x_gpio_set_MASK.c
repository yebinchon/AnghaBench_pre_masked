
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tps6586x_gpio {int parent; } ;
struct gpio_chip {int dummy; } ;


 int VAR_0 ;
 struct tps6586x_gpio* FUNC_0 (struct gpio_chip*) ;
 int FUNC_1 (int ,int ,int,int) ;

__attribute__((used)) static void FUNC_2(struct gpio_chip *VAR_1, unsigned VAR_2,
         int VAR_3)
{
 struct tps6586x_gpio *VAR_4 = FUNC_0(VAR_1);

 FUNC_1(VAR_4->parent, VAR_0,
   VAR_3 << VAR_2, 1 << VAR_2);
}
