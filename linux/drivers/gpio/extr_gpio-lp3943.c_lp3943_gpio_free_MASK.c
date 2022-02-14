
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lp3943_gpio {struct lp3943* lp3943; } ;
struct lp3943 {int pin_used; } ;
struct gpio_chip {int dummy; } ;


 int FUNC_0 (unsigned int,int *) ;
 struct lp3943_gpio* FUNC_1 (struct gpio_chip*) ;

__attribute__((used)) static void FUNC_2(struct gpio_chip *VAR_0, unsigned VAR_1)
{
 struct lp3943_gpio *VAR_2 = FUNC_1(VAR_0);
 struct lp3943 *VAR_3 = VAR_2->lp3943;

 FUNC_0(VAR_1, &VAR_3->pin_used);
}
