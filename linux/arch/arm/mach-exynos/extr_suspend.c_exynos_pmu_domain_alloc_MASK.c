
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct irq_fwspec {int param_count; scalar_t__* param; int fwnode; } ;
struct irq_domain {TYPE_1__* parent; } ;
typedef scalar_t__ irq_hw_number_t ;
struct TYPE_2__ {int fwnode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct irq_domain*,unsigned int,unsigned int,struct irq_fwspec*) ;
 int FUNC_1 (struct irq_domain*,unsigned int,scalar_t__,int *,int *) ;

__attribute__((used)) static int FUNC_2(struct irq_domain *VAR_2,
       unsigned int VAR_3,
       unsigned int VAR_4, void *VAR_5)
{
 struct irq_fwspec *VAR_6 = VAR_5;
 struct irq_fwspec VAR_7;
 irq_hw_number_t VAR_8;
 int VAR_9;

 if (VAR_6->param_count != 3)
  return -VAR_0;
 if (VAR_6->param[0] != 0)
  return -VAR_0;

 VAR_8 = VAR_6->param[1];

 for (VAR_9 = 0; VAR_9 < VAR_4; VAR_9++)
  FUNC_1(VAR_2, VAR_3 + VAR_9, VAR_8 + VAR_9,
           &VAR_1, ((void*)0));

 VAR_7 = *VAR_6;
 VAR_7.fwnode = VAR_2->parent->fwnode;
 return FUNC_0(VAR_2, VAR_3, VAR_4,
         &VAR_7);
}
