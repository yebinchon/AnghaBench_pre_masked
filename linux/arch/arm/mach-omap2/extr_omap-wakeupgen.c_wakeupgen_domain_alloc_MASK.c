
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
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct irq_domain*,unsigned int,unsigned int,struct irq_fwspec*) ;
 int FUNC_1 (struct irq_domain*,unsigned int,scalar_t__,int *,int *) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_2(struct irq_domain *VAR_3,
      unsigned int VAR_4,
      unsigned int VAR_5, void *VAR_6)
{
 struct irq_fwspec *VAR_7 = VAR_6;
 struct irq_fwspec VAR_8;
 irq_hw_number_t VAR_9;
 int VAR_10;

 if (VAR_7->param_count != 3)
  return -VAR_0;
 if (VAR_7->param[0] != 0)
  return -VAR_0;

 VAR_9 = VAR_7->param[1];
 if (VAR_9 >= VAR_1)
  return -VAR_0;

 for (VAR_10 = 0; VAR_10 < VAR_5; VAR_10++)
  FUNC_1(VAR_3, VAR_4 + VAR_10, VAR_9 + VAR_10,
           &VAR_2, ((void*)0));

 VAR_8 = *VAR_7;
 VAR_8.fwnode = VAR_3->parent->fwnode;
 return FUNC_0(VAR_3, VAR_4, VAR_5,
         &VAR_8);
}
