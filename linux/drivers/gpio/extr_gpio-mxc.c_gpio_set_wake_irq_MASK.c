
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mxc_gpio_port {scalar_t__ irq; scalar_t__ irq_high; } ;
struct irq_data {int hwirq; } ;
struct irq_chip_generic {struct mxc_gpio_port* private; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 struct irq_chip_generic* FUNC_2 (struct irq_data*) ;

__attribute__((used)) static int FUNC_3(struct irq_data *VAR_0, u32 VAR_1)
{
 struct irq_chip_generic *VAR_2 = FUNC_2(VAR_0);
 struct mxc_gpio_port *VAR_3 = VAR_2->private;
 u32 VAR_4 = VAR_0->hwirq;
 int VAR_5;

 if (VAR_1) {
  if (VAR_3->irq_high && (VAR_4 >= 16))
   VAR_5 = FUNC_1(VAR_3->irq_high);
  else
   VAR_5 = FUNC_1(VAR_3->irq);
 } else {
  if (VAR_3->irq_high && (VAR_4 >= 16))
   VAR_5 = FUNC_0(VAR_3->irq_high);
  else
   VAR_5 = FUNC_0(VAR_3->irq);
 }

 return VAR_5;
}
