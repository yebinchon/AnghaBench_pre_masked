
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_fwspec {int param_count; unsigned long* param; int fwnode; } ;
struct irq_domain {int dummy; } ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long VAR_4 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct irq_domain *VAR_5,
        struct irq_fwspec *VAR_6,
        unsigned long *VAR_7,
        unsigned int *VAR_8)
{
 if (FUNC_1(VAR_6->fwnode) || FUNC_0(VAR_6->fwnode)) {
  if (VAR_6->param_count != 2)
   return -VAR_0;

  if ((VAR_6->param[0] > VAR_3) ||
   (VAR_6->param[0] < VAR_4))
   return -VAR_0;
  else
   *VAR_7 = VAR_6->param[0];


  if ((VAR_6->param[1] == VAR_1) ||
   (VAR_6->param[1] == VAR_2))
   *VAR_8 = VAR_6->param[1];
  else
   return -VAR_0;

  return 0;
 }
 return -VAR_0;
}
