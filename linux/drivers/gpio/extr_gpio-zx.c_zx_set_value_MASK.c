
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zx_gpio {scalar_t__ base; } ;
struct gpio_chip {int dummy; } ;


 int FUNC_0 (unsigned int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 struct zx_gpio* FUNC_1 (struct gpio_chip*) ;
 int FUNC_2 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct gpio_chip *VAR_2, unsigned VAR_3, int VAR_4)
{
 struct zx_gpio *VAR_5 = FUNC_1(VAR_2);

 if (VAR_4)
  FUNC_2(FUNC_0(VAR_3), VAR_5->base + VAR_1);
 else
  FUNC_2(FUNC_0(VAR_3), VAR_5->base + VAR_0);
}
