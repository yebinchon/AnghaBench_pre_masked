
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct irq_fwspec {scalar_t__ fwnode; int param_count; int* param; } ;
struct irq_domain {scalar_t__ fwnode; } ;
typedef enum irq_domain_bus_token { ____Placeholder_irq_domain_bus_token } irq_domain_bus_token ;
struct TYPE_2__ {struct irq_domain* domain; int * ppi_descs; } ;


 TYPE_1__ VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 struct irq_domain* FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct irq_domain *VAR_1,
     struct irq_fwspec *VAR_2,
     enum irq_domain_bus_token VAR_3)
{

        if (VAR_2->fwnode != VAR_1->fwnode)
  return 0;


 if (!FUNC_0(VAR_2->fwnode))
  return 1;





 if (VAR_2->param_count >= 4 &&
     VAR_2->param[0] == 1 && VAR_2->param[3] != 0 &&
     VAR_0.ppi_descs)
  return VAR_1 == FUNC_1(VAR_0.ppi_descs[VAR_2->param[1]]);

 return VAR_1 == VAR_0.domain;
}
