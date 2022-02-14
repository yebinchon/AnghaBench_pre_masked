
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tps65910_gpio {struct tps65910* tps65910; } ;
struct tps65910 {int dummy; } ;
struct gpio_chip {int dummy; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 struct tps65910_gpio* FUNC_0 (struct gpio_chip*) ;
 int FUNC_1 (struct tps65910*,unsigned int,int ) ;

__attribute__((used)) static int FUNC_2(struct gpio_chip *VAR_2, unsigned VAR_3)
{
 struct tps65910_gpio *VAR_4 = FUNC_0(VAR_2);
 struct tps65910 *VAR_5 = VAR_4->tps65910;

 return FUNC_1(VAR_5, VAR_1 + VAR_3,
      VAR_0);
}
