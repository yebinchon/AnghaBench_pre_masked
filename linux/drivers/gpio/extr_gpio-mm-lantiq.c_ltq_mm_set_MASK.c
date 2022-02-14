
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ltq_mm {int shadow; } ;
struct gpio_chip {int dummy; } ;


 struct ltq_mm* FUNC_0 (struct gpio_chip*) ;
 int FUNC_1 (struct ltq_mm*) ;

__attribute__((used)) static void FUNC_2(struct gpio_chip *VAR_0, unsigned VAR_1, int VAR_2)
{
 struct ltq_mm *VAR_3 = FUNC_0(VAR_0);

 if (VAR_2)
  VAR_3->shadow |= (1 << VAR_1);
 else
  VAR_3->shadow &= ~(1 << VAR_1);
 FUNC_1(VAR_3);
}
