
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct irq_fwspec {int param_count; unsigned long* param; int fwnode; } ;
struct irq_domain {TYPE_1__* parent; } ;
typedef unsigned long irq_hw_number_t ;
struct TYPE_2__ {int fwnode; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned long FUNC_0 (unsigned long) ;
 int FUNC_1 (struct irq_domain*,unsigned int,unsigned int,struct irq_fwspec*) ;
 int FUNC_2 (struct irq_domain*,unsigned int,unsigned long,int *,int *) ;
 int VAR_5 ;
 int FUNC_3 (struct irq_domain*,struct irq_fwspec*,unsigned long*,unsigned int*) ;

__attribute__((used)) static int FUNC_4(struct irq_domain *VAR_6, unsigned int VAR_7,
     unsigned int VAR_8, void *VAR_9)
{
 struct irq_fwspec *VAR_10 = VAR_9;
 struct irq_fwspec VAR_11;
 irq_hw_number_t VAR_12, VAR_13;
 unsigned int VAR_14;
 int VAR_15;

 VAR_15 = FUNC_3(VAR_6, VAR_10, &VAR_12, &VAR_14);
 if (VAR_15)
  return -VAR_0;

 VAR_13 = FUNC_0(VAR_12);
 if (VAR_13 == ~0UL)
  return -VAR_0;

 VAR_15 = FUNC_2(VAR_6, VAR_7, VAR_12,
          &VAR_5, ((void*)0));
 if (VAR_15)
  return VAR_15;

 if (VAR_14 & VAR_1)
  VAR_14 = VAR_2;

 if (VAR_14 & VAR_4)
  VAR_14 = VAR_3;

 VAR_11.fwnode = VAR_6->parent->fwnode;
 VAR_11.param_count = 3;
 VAR_11.param[0] = 0;
 VAR_11.param[1] = VAR_13;
 VAR_11.param[2] = VAR_14;

 return FUNC_1(VAR_6, VAR_7, VAR_8,
         &VAR_11);
}
