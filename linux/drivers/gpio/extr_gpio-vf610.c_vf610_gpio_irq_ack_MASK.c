
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vf610_gpio_port {scalar_t__ base; } ;
struct irq_data {int hwirq; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 struct vf610_gpio_port* FUNC_1 (int ) ;
 int FUNC_2 (struct irq_data*) ;
 int FUNC_3 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_4(struct irq_data *VAR_1)
{
 struct vf610_gpio_port *VAR_2 =
  FUNC_1(FUNC_2(VAR_1));
 int VAR_3 = VAR_1->hwirq;

 FUNC_3(FUNC_0(VAR_3), VAR_2->base + VAR_0);
}
