
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct tps6586x_gpio {int parent; } ;
struct gpio_chip {int dummy; } ;


 int VAR_0 ;
 struct tps6586x_gpio* FUNC_0 (struct gpio_chip*) ;
 int FUNC_1 (int ,int ,int*) ;

__attribute__((used)) static int FUNC_2(struct gpio_chip *VAR_1, unsigned VAR_2)
{
 struct tps6586x_gpio *VAR_3 = FUNC_0(VAR_1);
 uint8_t VAR_4;
 int VAR_5;

 VAR_5 = FUNC_1(VAR_3->parent, VAR_0, &VAR_4);
 if (VAR_5)
  return VAR_5;

 return !!(VAR_4 & (1 << VAR_2));
}
