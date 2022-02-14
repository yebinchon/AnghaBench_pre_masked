
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sch_gpio {int dummy; } ;
struct gpio_chip {int dummy; } ;


 int VAR_0 ;
 struct sch_gpio* FUNC_0 (struct gpio_chip*) ;
 int FUNC_1 (struct sch_gpio*,unsigned int,int ) ;

__attribute__((used)) static int FUNC_2(struct gpio_chip *VAR_1, unsigned VAR_2)
{
 struct sch_gpio *VAR_3 = FUNC_0(VAR_1);
 return FUNC_1(VAR_3, VAR_2, VAR_0);
}
