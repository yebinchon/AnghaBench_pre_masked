
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct irq_fwspec {int param_count; int fwnode; scalar_t__* param; } ;
struct irq_domain {TYPE_1__* parent; int host_data; } ;
typedef scalar_t__ irq_hw_number_t ;
struct TYPE_2__ {int fwnode; } ;


 int VAR_0 ;
 int FUNC_0 (struct irq_domain*,unsigned int,unsigned int,struct irq_fwspec*) ;
 int FUNC_1 (struct irq_domain*,unsigned int,scalar_t__,int *,int ) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_2(struct irq_domain *VAR_2, unsigned int VAR_3,
       unsigned int VAR_4, void *VAR_5)
{
 int VAR_6;
 irq_hw_number_t VAR_7;
 struct irq_fwspec *VAR_8 = VAR_5;
 struct irq_fwspec VAR_9 = *VAR_8;

 if (VAR_8->param_count != 3)
  return -VAR_0;


 if (VAR_8->param[0])
  return -VAR_0;

 VAR_7 = VAR_8->param[1];
 for (VAR_6 = 0; VAR_6 < VAR_4; VAR_6++)
  FUNC_1(VAR_2, VAR_3 + VAR_6, VAR_7 + VAR_6,
           &VAR_1,
           VAR_2->host_data);

 VAR_9.fwnode = VAR_2->parent->fwnode;
 return FUNC_0(VAR_2, VAR_3, VAR_4, &VAR_9);
}
