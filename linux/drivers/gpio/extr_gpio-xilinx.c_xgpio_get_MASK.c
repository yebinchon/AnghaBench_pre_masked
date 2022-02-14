
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct xgpio_instance {scalar_t__ regs; } ;
struct gpio_chip {int dummy; } ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 struct xgpio_instance* FUNC_1 (struct gpio_chip*) ;
 int FUNC_2 (struct xgpio_instance*,unsigned int) ;
 int FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (struct xgpio_instance*,unsigned int) ;

__attribute__((used)) static int FUNC_5(struct gpio_chip *VAR_1, unsigned int VAR_2)
{
 struct xgpio_instance *VAR_3 = FUNC_1(VAR_1);
 u32 VAR_4;

 VAR_4 = FUNC_3(VAR_3->regs + VAR_0 +
       FUNC_4(VAR_3, VAR_2));

 return !!(VAR_4 & FUNC_0(FUNC_2(VAR_3, VAR_2)));
}
