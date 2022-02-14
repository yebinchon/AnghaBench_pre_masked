
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_domain {int dummy; } ;
struct device_node {int dummy; } ;
typedef enum irq_domain_bus_token { ____Placeholder_irq_domain_bus_token } irq_domain_bus_token ;


 struct device_node* FUNC_0 (struct irq_domain*) ;

__attribute__((used)) static int FUNC_1(struct irq_domain *VAR_0, struct device_node *VAR_1,
       enum irq_domain_bus_token VAR_2)
{
 return FUNC_0(VAR_0) == VAR_1;
}
