
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gpio_chip {unsigned int (* read_reg ) (scalar_t__) ;} ;
struct mpc8xxx_gpio_chip {int irq; scalar_t__ regs; struct gpio_chip gc; } ;
struct irq_desc {int irq_data; } ;
struct irq_chip {int (* irq_eoi ) (int *) ;} ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (unsigned int) ;
 int FUNC_1 (int ) ;
 struct irq_chip* FUNC_2 (struct irq_desc*) ;
 struct mpc8xxx_gpio_chip* FUNC_3 (struct irq_desc*) ;
 int FUNC_4 (int ,scalar_t__) ;
 unsigned int FUNC_5 (scalar_t__) ;
 unsigned int FUNC_6 (scalar_t__) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static void FUNC_8(struct irq_desc *VAR_2)
{
 struct mpc8xxx_gpio_chip *VAR_3 = FUNC_3(VAR_2);
 struct irq_chip *VAR_4 = FUNC_2(VAR_2);
 struct gpio_chip *VAR_5 = &VAR_3->gc;
 unsigned int VAR_6;

 VAR_6 = VAR_5->read_reg(VAR_3->regs + VAR_0)
  & VAR_5->read_reg(VAR_3->regs + VAR_1);
 if (VAR_6)
  FUNC_1(FUNC_4(VAR_3->irq,
           32 - FUNC_0(VAR_6)));
 if (VAR_4->irq_eoi)
  VAR_4->irq_eoi(&VAR_2->irq_data);
}
