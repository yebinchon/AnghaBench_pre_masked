
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_fwspec {int param_count; unsigned long* param; int fwnode; } ;
struct irq_domain {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;

__attribute__((used)) static int FUNC_1(struct irq_domain *VAR_1,
          struct irq_fwspec *VAR_2,
          unsigned long *VAR_3,
          unsigned int *VAR_4)
{
 if (FUNC_0(VAR_2->fwnode)) {
  if (VAR_2->param_count != 3)
   return -VAR_0;


  if (VAR_2->param[0] != 0)
   return -VAR_0;

  *VAR_3 = VAR_2->param[1];
  *VAR_4 = VAR_2->param[2];
  return 0;
 }

 return -VAR_0;
}
