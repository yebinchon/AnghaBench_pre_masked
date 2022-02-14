
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dummy; } ;
struct mpc8xxx_gpio_chip {int regs; int gc; scalar_t__ irq; int irqn; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int ,int *,int *) ;
 struct mpc8xxx_gpio_chip* FUNC_4 (struct platform_device*) ;

__attribute__((used)) static int FUNC_5(struct platform_device *VAR_0)
{
 struct mpc8xxx_gpio_chip *VAR_1 = FUNC_4(VAR_0);

 if (VAR_1->irq) {
  FUNC_3(VAR_1->irqn, ((void*)0), ((void*)0));
  FUNC_2(VAR_1->irq);
 }

 FUNC_0(&VAR_1->gc);
 FUNC_1(VAR_1->regs);

 return 0;
}
