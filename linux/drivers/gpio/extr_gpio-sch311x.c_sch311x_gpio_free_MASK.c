
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sch311x_gpio_block {scalar_t__* config_regs; scalar_t__ runtime_reg; } ;
struct gpio_chip {int dummy; } ;


 struct sch311x_gpio_block* FUNC_0 (struct gpio_chip*) ;
 int FUNC_1 (scalar_t__,int) ;

__attribute__((used)) static void FUNC_2(struct gpio_chip *VAR_0, unsigned VAR_1)
{
 struct sch311x_gpio_block *VAR_2 = FUNC_0(VAR_0);

 if (VAR_2->config_regs[VAR_1] == 0)
  return;

 FUNC_1(VAR_2->runtime_reg + VAR_2->config_regs[VAR_1], 1);
}
