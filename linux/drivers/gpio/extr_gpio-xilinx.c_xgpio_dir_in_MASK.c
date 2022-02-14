
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xgpio_instance {int * gpio_lock; int * gpio_dir; scalar_t__ regs; } ;
struct gpio_chip {int dummy; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 struct xgpio_instance* FUNC_1 (struct gpio_chip*) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (struct xgpio_instance*,unsigned int) ;
 int FUNC_5 (struct xgpio_instance*,unsigned int) ;
 scalar_t__ FUNC_6 (struct xgpio_instance*,unsigned int) ;
 int FUNC_7 (scalar_t__,int ) ;

__attribute__((used)) static int FUNC_8(struct gpio_chip *VAR_1, unsigned int VAR_2)
{
 unsigned long VAR_3;
 struct xgpio_instance *VAR_4 = FUNC_1(VAR_1);
 int VAR_5 = FUNC_4(VAR_4, VAR_2);
 int VAR_6 = FUNC_5(VAR_4, VAR_2);

 FUNC_2(&VAR_4->gpio_lock[VAR_5], VAR_3);


 VAR_4->gpio_dir[VAR_5] |= FUNC_0(VAR_6);
 FUNC_7(VAR_4->regs + VAR_0 +
         FUNC_6(VAR_4, VAR_2), VAR_4->gpio_dir[VAR_5]);

 FUNC_3(&VAR_4->gpio_lock[VAR_5], VAR_3);

 return 0;
}
