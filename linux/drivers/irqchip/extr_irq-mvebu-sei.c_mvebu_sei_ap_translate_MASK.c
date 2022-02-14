
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_fwspec {unsigned long* param; } ;
struct irq_domain {int dummy; } ;


 unsigned int VAR_0 ;

__attribute__((used)) static int FUNC_0(struct irq_domain *VAR_1,
      struct irq_fwspec *VAR_2,
      unsigned long *VAR_3,
      unsigned int *VAR_4)
{
 *VAR_3 = VAR_2->param[0];
 *VAR_4 = VAR_0;

 return 0;
}
