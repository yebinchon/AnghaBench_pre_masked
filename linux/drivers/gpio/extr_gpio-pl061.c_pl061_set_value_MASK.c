
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pl061 {scalar_t__ base; } ;
struct gpio_chip {int dummy; } ;


 scalar_t__ FUNC_0 (unsigned int) ;
 struct pl061* FUNC_1 (struct gpio_chip*) ;
 int FUNC_2 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct gpio_chip *VAR_0, unsigned VAR_1, int VAR_2)
{
 struct pl061 *VAR_3 = FUNC_1(VAR_0);

 FUNC_2(!!VAR_2 << VAR_1, VAR_3->base + (FUNC_0(VAR_1 + 2)));
}
