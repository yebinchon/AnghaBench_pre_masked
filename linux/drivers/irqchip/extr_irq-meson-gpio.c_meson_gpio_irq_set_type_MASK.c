
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct meson_gpio_irq_controller {int dummy; } ;
struct irq_data {TYPE_1__* domain; } ;
struct TYPE_2__ {struct meson_gpio_irq_controller* host_data; } ;


 int FUNC_0 (struct irq_data*,int ) ;
 int * FUNC_1 (struct irq_data*) ;
 int FUNC_2 (unsigned int) ;
 int FUNC_3 (struct meson_gpio_irq_controller*,unsigned int,int *) ;

__attribute__((used)) static int FUNC_4(struct irq_data *VAR_0, unsigned int VAR_1)
{
 struct meson_gpio_irq_controller *VAR_2 = VAR_0->domain->host_data;
 u32 *VAR_3 = FUNC_1(VAR_0);
 int VAR_4;

 VAR_4 = FUNC_3(VAR_2, VAR_1, VAR_3);
 if (VAR_4)
  return VAR_4;

 return FUNC_0(VAR_0,
     FUNC_2(VAR_1));
}
