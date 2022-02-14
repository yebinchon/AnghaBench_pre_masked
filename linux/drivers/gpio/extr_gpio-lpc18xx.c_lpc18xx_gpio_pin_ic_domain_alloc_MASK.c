
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct lpc18xx_gpio_pin_ic {int dummy; } ;
struct irq_fwspec {scalar_t__* param; int param_count; int fwnode; } ;
struct irq_domain {TYPE_1__* parent; struct lpc18xx_gpio_pin_ic* host_data; } ;
typedef scalar_t__ irq_hw_number_t ;
struct TYPE_2__ {int fwnode; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct irq_domain*,unsigned int,int,struct irq_fwspec*) ;
 int FUNC_1 (struct irq_domain*,unsigned int,scalar_t__,int *,struct lpc18xx_gpio_pin_ic*) ;
 int VAR_2 ;
 int FUNC_2 (char*,scalar_t__,int) ;

__attribute__((used)) static int FUNC_3(struct irq_domain *VAR_3,
         unsigned int VAR_4,
         unsigned int VAR_5, void *VAR_6)
{
 struct irq_fwspec VAR_7, *VAR_8 = VAR_6;
 struct lpc18xx_gpio_pin_ic *VAR_9 = VAR_3->host_data;
 irq_hw_number_t VAR_10;
 int VAR_11;

 if (VAR_5 != 1)
  return -VAR_0;

 VAR_10 = VAR_8->param[0];
 if (VAR_10 >= VAR_1)
  return -VAR_0;





 VAR_7.fwnode = VAR_3->parent->fwnode;
 VAR_7.param_count = 1;
 VAR_7.param[0] = VAR_10 + 32;

 VAR_11 = FUNC_0(VAR_3, VAR_4, 1, &VAR_7);
 if (VAR_11 < 0) {
  FUNC_2("failed to allocate parent irq %u: %d\n",
         VAR_7.param[0], VAR_11);
  return VAR_11;
 }

 return FUNC_1(VAR_3, VAR_4, VAR_10,
          &VAR_2, VAR_9);
}
