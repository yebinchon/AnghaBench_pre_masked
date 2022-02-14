
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sch311x_gpio_block {int lock; scalar_t__* config_regs; scalar_t__ runtime_reg; } ;
struct gpio_chip {int dummy; } ;


 int VAR_0 ;
 struct sch311x_gpio_block* FUNC_0 (struct gpio_chip*) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct gpio_chip *VAR_1, unsigned VAR_2)
{
 struct sch311x_gpio_block *VAR_3 = FUNC_0(VAR_1);
 u8 VAR_4;

 FUNC_2(&VAR_3->lock);
 VAR_4 = FUNC_1(VAR_3->runtime_reg + VAR_3->config_regs[VAR_2]);
 FUNC_3(&VAR_3->lock);

 return !!(VAR_4 & VAR_0);
}
