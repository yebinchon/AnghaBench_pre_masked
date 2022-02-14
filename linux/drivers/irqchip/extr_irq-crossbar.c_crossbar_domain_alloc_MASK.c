
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct irq_fwspec {int param_count; scalar_t__* param; } ;
struct irq_domain {int dummy; } ;
typedef scalar_t__ irq_hw_number_t ;
struct TYPE_2__ {scalar_t__ max_crossbar_sources; } ;


 int VAR_0 ;
 int FUNC_0 (struct irq_domain*,unsigned int,scalar_t__) ;
 TYPE_1__* VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct irq_domain*,unsigned int,scalar_t__,int *,int *) ;

__attribute__((used)) static int FUNC_2(struct irq_domain *VAR_3, unsigned int VAR_4,
     unsigned int VAR_5, void *VAR_6)
{
 struct irq_fwspec *VAR_7 = VAR_6;
 irq_hw_number_t VAR_8;
 int VAR_9;

 if (VAR_7->param_count != 3)
  return -VAR_0;
 if (VAR_7->param[0] != 0)
  return -VAR_0;

 VAR_8 = VAR_7->param[1];
 if ((VAR_8 + VAR_5) > VAR_1->max_crossbar_sources)
  return -VAR_0;

 for (VAR_9 = 0; VAR_9 < VAR_5; VAR_9++) {
  int VAR_10 = FUNC_0(VAR_3, VAR_4 + VAR_9, VAR_8 + VAR_9);

  if (VAR_10)
   return VAR_10;

  FUNC_1(VAR_3, VAR_4 + VAR_9, VAR_8 + VAR_9,
           &VAR_2, ((void*)0));
 }

 return 0;
}
