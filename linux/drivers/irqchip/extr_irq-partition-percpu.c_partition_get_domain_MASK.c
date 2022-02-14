
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct partition_desc {struct irq_domain* domain; } ;
struct irq_domain {int dummy; } ;



struct irq_domain *FUNC_0(struct partition_desc *VAR_0)
{
 if (VAR_0)
  return VAR_0->domain;

 return ((void*)0);
}
