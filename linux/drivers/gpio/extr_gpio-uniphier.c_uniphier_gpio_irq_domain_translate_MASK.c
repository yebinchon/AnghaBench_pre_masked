
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_fwspec {int param_count; unsigned long* param; } ;
struct irq_domain {int dummy; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 scalar_t__ FUNC_0 (int) ;

__attribute__((used)) static int FUNC_1(struct irq_domain *VAR_2,
           struct irq_fwspec *VAR_3,
           unsigned long *VAR_4,
           unsigned int *VAR_5)
{
 if (FUNC_0(VAR_3->param_count < 2))
  return -VAR_0;

 *VAR_4 = VAR_3->param[0];
 *VAR_5 = VAR_3->param[1] & VAR_1;

 return 0;
}
