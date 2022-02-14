
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct irq_fwspec {int param_count; scalar_t__* param; int fwnode; } ;
struct irq_domain {TYPE_1__* parent; struct exiu_irq_data* host_data; } ;
struct exiu_irq_data {scalar_t__ spi_base; } ;
typedef scalar_t__ irq_hw_number_t ;
struct TYPE_2__ {int fwnode; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 int FUNC_1 (struct irq_domain*,unsigned int,unsigned int,struct irq_fwspec*) ;
 int FUNC_2 (struct irq_domain*,unsigned int,scalar_t__,int *,struct exiu_irq_data*) ;
 scalar_t__ FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct irq_domain *VAR_3, unsigned int VAR_4,
        unsigned int VAR_5, void *VAR_6)
{
 struct irq_fwspec *VAR_7 = VAR_6;
 struct irq_fwspec VAR_8;
 struct exiu_irq_data *VAR_9 = VAR_3->host_data;
 irq_hw_number_t VAR_10;

 VAR_8 = *VAR_7;
 if (FUNC_3(VAR_3->parent->fwnode)) {
  if (VAR_7->param_count != 3)
   return -VAR_0;
  if (VAR_7->param[0] != VAR_1)
   return -VAR_0;

  VAR_10 = VAR_7->param[1] - VAR_9->spi_base;
 } else {
  VAR_10 = VAR_7->param[0];
  VAR_8.param[0] = VAR_10 + VAR_9->spi_base + 32;
 }
 FUNC_0(VAR_5 != 1);
 FUNC_2(VAR_3, VAR_4, VAR_10, &VAR_2, VAR_9);

 VAR_8.fwnode = VAR_3->parent->fwnode;
 return FUNC_1(VAR_3, VAR_4, VAR_5, &VAR_8);
}
