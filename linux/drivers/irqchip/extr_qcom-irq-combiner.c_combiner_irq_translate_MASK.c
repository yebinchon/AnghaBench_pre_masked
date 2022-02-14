
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_fwspec {int param_count; int* param; int fwnode; } ;
struct irq_domain {struct combiner* host_data; } ;
struct combiner {int nirqs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct irq_domain *VAR_3, struct irq_fwspec *VAR_4,
      unsigned long *VAR_5, unsigned int *VAR_6)
{
 struct combiner *VAR_7 = VAR_3->host_data;

 if (FUNC_1(VAR_4->fwnode)) {
  if (FUNC_0((VAR_4->param_count != 2) ||
       (VAR_4->param[0] >= VAR_7->nirqs) ||
       (VAR_4->param[1] & VAR_2) ||
       (VAR_4->param[1] & VAR_1)))
   return -VAR_0;

  *VAR_5 = VAR_4->param[0];
  *VAR_6 = VAR_4->param[1];
  return 0;
 }

 return -VAR_0;
}
