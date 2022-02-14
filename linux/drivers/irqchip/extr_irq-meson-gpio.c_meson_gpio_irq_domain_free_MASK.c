
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct meson_gpio_irq_controller {int dummy; } ;
struct irq_domain {struct meson_gpio_irq_controller* host_data; } ;
struct irq_data {int dummy; } ;


 scalar_t__ FUNC_0 (int) ;
 int * FUNC_1 (struct irq_data*) ;
 int FUNC_2 (struct irq_domain*,unsigned int,int) ;
 struct irq_data* FUNC_3 (struct irq_domain*,unsigned int) ;
 int FUNC_4 (struct meson_gpio_irq_controller*,int *) ;

__attribute__((used)) static void FUNC_5(struct irq_domain *VAR_0,
           unsigned int VAR_1,
           unsigned int VAR_2)
{
 struct meson_gpio_irq_controller *VAR_3 = VAR_0->host_data;
 struct irq_data *VAR_4;
 u32 *VAR_5;

 if (FUNC_0(VAR_2 != 1))
  return;

 FUNC_2(VAR_0, VAR_1, 1);

 VAR_4 = FUNC_3(VAR_0, VAR_1);
 VAR_5 = FUNC_1(VAR_4);

 FUNC_4(VAR_3, VAR_5);
}
