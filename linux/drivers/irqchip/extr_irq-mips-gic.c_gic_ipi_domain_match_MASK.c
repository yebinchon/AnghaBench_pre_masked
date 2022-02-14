
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_domain {int bus_token; int fwnode; } ;
struct device_node {int dummy; } ;
typedef enum irq_domain_bus_token { ____Placeholder_irq_domain_bus_token } irq_domain_bus_token ;



 struct device_node* FUNC_0 (int ) ;

int FUNC_1(struct irq_domain *VAR_0, struct device_node *VAR_1,
    enum irq_domain_bus_token VAR_2)
{
 bool VAR_3;

 switch (VAR_2) {
 case 128:
  VAR_3 = VAR_0->bus_token == VAR_2;
  return (!VAR_1 || FUNC_0(VAR_0->fwnode) == VAR_1) && VAR_3;
  break;
 default:
  return 0;
 }
}
