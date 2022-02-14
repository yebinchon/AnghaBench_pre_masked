
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct irq_fwspec {int param_count; unsigned long* param; int fwnode; } ;
struct irq_domain {int dummy; } ;
struct TYPE_2__ {unsigned long ext_irq_start; unsigned long ext_irq_end; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 TYPE_1__* VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;

__attribute__((used)) static int FUNC_1(struct irq_domain *VAR_3,
         struct irq_fwspec *VAR_4,
         unsigned long *VAR_5,
         unsigned int *VAR_6)
{
 if (FUNC_0(VAR_4->fwnode)) {
  if (VAR_4->param_count != 3)
   return -VAR_0;


  if (VAR_4->param[0] != 0)
   return -VAR_0;


  if (VAR_4->param[1] < VAR_2->ext_irq_start ||
      VAR_4->param[1] > VAR_2->ext_irq_end)
   return -VAR_0;

  *VAR_5 = VAR_4->param[1] - VAR_2->ext_irq_start;
  *VAR_6 = VAR_4->param[2] & VAR_1;
  return 0;
 }

 return -VAR_0;
}
