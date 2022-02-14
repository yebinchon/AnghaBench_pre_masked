
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lp3943_gpio {struct lp3943* lp3943; } ;
struct lp3943 {int pin_used; } ;
struct gpio_chip {int dummy; } ;


 int VAR_0 ;
 struct lp3943_gpio* FUNC_0 (struct gpio_chip*) ;
 scalar_t__ FUNC_1 (unsigned int,int *) ;

__attribute__((used)) static int FUNC_2(struct gpio_chip *VAR_1, unsigned VAR_2)
{
 struct lp3943_gpio *VAR_3 = FUNC_0(VAR_1);
 struct lp3943 *VAR_4 = VAR_3->lp3943;


 if (FUNC_1(VAR_2, &VAR_4->pin_used))
  return -VAR_0;

 return 0;
}
