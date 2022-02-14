
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct irq_domain {int dummy; } ;
struct device_node {int dummy; } ;
typedef enum irq_domain_bus_token { ____Placeholder_irq_domain_bus_token } irq_domain_bus_token ;
struct TYPE_2__ {int (* match ) (struct device_node*) ;} ;


 int FUNC_0 (struct device_node*) ;
 TYPE_1__* VAR_0 ;

__attribute__((used)) static int FUNC_1(struct irq_domain *VAR_1, struct device_node *VAR_2,
     enum irq_domain_bus_token VAR_3)
{
 return VAR_0->match(VAR_2);
}
