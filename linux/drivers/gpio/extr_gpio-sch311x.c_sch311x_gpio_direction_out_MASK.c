
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sch311x_gpio_block {int lock; scalar_t__* config_regs; scalar_t__ runtime_reg; } ;
struct gpio_chip {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct sch311x_gpio_block*,unsigned int,int) ;
 struct sch311x_gpio_block* FUNC_1 (struct gpio_chip*) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int ,scalar_t__) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(struct gpio_chip *VAR_1, unsigned VAR_2,
          int VAR_3)
{
 struct sch311x_gpio_block *VAR_4 = FUNC_1(VAR_1);
 u8 VAR_5;

 FUNC_4(&VAR_4->lock);

 VAR_5 = FUNC_2(VAR_4->runtime_reg + VAR_4->config_regs[VAR_2]);
 VAR_5 &= ~VAR_0;
 FUNC_3(VAR_5, VAR_4->runtime_reg + VAR_4->config_regs[VAR_2]);
 FUNC_0(VAR_4, VAR_2, VAR_3);

 FUNC_5(&VAR_4->lock);
 return 0;
}
