
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct irq_fwspec {int fwnode; } ;
struct irq_domain {TYPE_1__* parent; int host_data; } ;
typedef int irq_hw_number_t ;
struct TYPE_2__ {int fwnode; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct irq_domain*,unsigned int,unsigned int,struct irq_fwspec*) ;
 int FUNC_2 (struct irq_domain*,unsigned int,int ,int *,int ) ;
 int VAR_1 ;
 int FUNC_3 (struct irq_domain*,struct irq_fwspec*,int *,unsigned int*) ;

__attribute__((used)) static int FUNC_4(struct irq_domain *VAR_2, unsigned int VAR_3,
     unsigned int VAR_4, void *VAR_5)
{
 int VAR_6;
 irq_hw_number_t VAR_7;
 unsigned int VAR_8;
 struct irq_fwspec *VAR_9 = VAR_5;
 struct irq_fwspec VAR_10 = *VAR_9;

 VAR_6 = FUNC_3(VAR_2, VAR_9, &VAR_7, &VAR_8);
 if (VAR_6)
  return VAR_6;

 if (FUNC_0(VAR_4 != 1))
  return -VAR_0;

 FUNC_2(VAR_2, VAR_3, VAR_7,
          &VAR_1,
          VAR_2->host_data);

 VAR_10.fwnode = VAR_2->parent->fwnode;
 return FUNC_1(VAR_2, VAR_3, VAR_4,
         &VAR_10);
}
