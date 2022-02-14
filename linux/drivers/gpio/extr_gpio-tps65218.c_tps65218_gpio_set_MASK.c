
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tps65218_gpio {struct tps65218* tps65218; } ;
struct tps65218 {int dummy; } ;
struct gpio_chip {int dummy; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct tps65218_gpio* FUNC_0 (struct gpio_chip*) ;
 int FUNC_1 (struct tps65218*,int ,unsigned int,int ) ;
 int FUNC_2 (struct tps65218*,int ,unsigned int,unsigned int,int ) ;

__attribute__((used)) static void FUNC_3(struct gpio_chip *VAR_3, unsigned VAR_4,
         int VAR_5)
{
 struct tps65218_gpio *VAR_6 = FUNC_0(VAR_3);
 struct tps65218 *VAR_7 = VAR_6->tps65218;

 if (VAR_5)
  FUNC_2(VAR_7, VAR_2,
      VAR_0 << VAR_4,
      VAR_0 << VAR_4,
      VAR_1);
 else
  FUNC_1(VAR_7, VAR_2,
        VAR_0 << VAR_4,
        VAR_1);
}
