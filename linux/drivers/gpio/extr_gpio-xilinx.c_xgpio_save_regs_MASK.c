
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xgpio_instance {int * gpio_dir; scalar_t__ regs; int * gpio_state; int * gpio_width; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (scalar_t__,int ) ;

__attribute__((used)) static void FUNC_1(struct xgpio_instance *VAR_3)
{
 FUNC_0(VAR_3->regs + VAR_1, VAR_3->gpio_state[0]);
 FUNC_0(VAR_3->regs + VAR_2, VAR_3->gpio_dir[0]);

 if (!VAR_3->gpio_width[1])
  return;

 FUNC_0(VAR_3->regs + VAR_1 + VAR_0,
         VAR_3->gpio_state[1]);
 FUNC_0(VAR_3->regs + VAR_2 + VAR_0,
         VAR_3->gpio_dir[1]);
}
