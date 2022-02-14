
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct tps6586x_gpio {int parent; } ;
struct gpio_chip {int dummy; } ;


 int VAR_0 ;
 struct tps6586x_gpio* FUNC_0 (struct gpio_chip*) ;
 int FUNC_1 (struct gpio_chip*,unsigned int,int) ;
 int FUNC_2 (int ,int ,int,int) ;

__attribute__((used)) static int FUNC_3(struct gpio_chip *VAR_1, unsigned VAR_2,
    int VAR_3)
{
 struct tps6586x_gpio *VAR_4 = FUNC_0(VAR_1);
 uint8_t VAR_5, VAR_6;

 FUNC_1(VAR_1, VAR_2, VAR_3);

 VAR_5 = 0x1 << (VAR_2 * 2);
 VAR_6 = 0x3 << (VAR_2 * 2);

 return FUNC_2(VAR_4->parent, VAR_0,
    VAR_5, VAR_6);
}
