
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mxs_gpio_port {int irq; } ;
struct irq_data {int dummy; } ;
struct irq_chip_generic {struct mxs_gpio_port* private; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 struct irq_chip_generic* FUNC_2 (struct irq_data*) ;

__attribute__((used)) static int FUNC_3(struct irq_data *VAR_0, unsigned int VAR_1)
{
 struct irq_chip_generic *VAR_2 = FUNC_2(VAR_0);
 struct mxs_gpio_port *VAR_3 = VAR_2->private;

 if (VAR_1)
  FUNC_1(VAR_3->irq);
 else
  FUNC_0(VAR_3->irq);

 return 0;
}
