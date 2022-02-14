
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_fwspec {int param_count; unsigned long* param; } ;
struct irq_domain {int dummy; } ;


 int VAR_0 ;
 unsigned long VAR_1 ;

__attribute__((used)) static int FUNC_0(struct irq_domain *VAR_2,
          struct irq_fwspec *VAR_3, unsigned long *VAR_4,
          unsigned int *VAR_5)
{
 if (VAR_3->param_count != 2 || VAR_3->param[0] >= VAR_1)
  return -VAR_0;

 *VAR_4 = VAR_3->param[0];
 *VAR_5 = VAR_3->param[1];
 return 0;
}
