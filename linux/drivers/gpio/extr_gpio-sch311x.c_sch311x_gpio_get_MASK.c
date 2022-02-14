
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sch311x_gpio_block {int lock; scalar_t__ data_reg; scalar_t__ runtime_reg; } ;
struct gpio_chip {int dummy; } ;


 int FUNC_0 (unsigned int) ;
 struct sch311x_gpio_block* FUNC_1 (struct gpio_chip*) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct gpio_chip *VAR_0, unsigned VAR_1)
{
 struct sch311x_gpio_block *VAR_2 = FUNC_1(VAR_0);
 u8 VAR_3;

 FUNC_3(&VAR_2->lock);
 VAR_3 = FUNC_2(VAR_2->runtime_reg + VAR_2->data_reg);
 FUNC_4(&VAR_2->lock);

 return !!(VAR_3 & FUNC_0(VAR_1));
}
