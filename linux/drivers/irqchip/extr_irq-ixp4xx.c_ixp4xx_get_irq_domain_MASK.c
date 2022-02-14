
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ixp4xx_irq {struct irq_domain* domain; } ;
struct irq_domain {int dummy; } ;


 struct ixp4xx_irq VAR_0 ;

struct irq_domain *FUNC_0(void)
{
 struct ixp4xx_irq *VAR_1 = &VAR_0;

 return VAR_1->domain;
}
