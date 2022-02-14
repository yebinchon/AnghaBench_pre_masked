
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct irq_fwspec {int fwnode; } ;
struct irq_domain {TYPE_1__* parent; int host_data; } ;
typedef scalar_t__ irq_hw_number_t ;
struct TYPE_2__ {int fwnode; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct irq_domain*,struct irq_fwspec*,scalar_t__*,unsigned int*) ;
 int FUNC_1 (struct irq_domain*,unsigned int,unsigned int,struct irq_fwspec*) ;
 int FUNC_2 (struct irq_domain*,unsigned int,scalar_t__,int *,int ) ;

__attribute__((used)) static int FUNC_3(struct irq_domain *VAR_3,
      unsigned int VAR_4, unsigned int VAR_5,
      void *VAR_6)
{
 struct irq_fwspec *VAR_7 = VAR_6;
 struct irq_fwspec VAR_8;
 irq_hw_number_t VAR_9;
 unsigned int VAR_10;
 int VAR_11;
 int VAR_12;

 VAR_11 = FUNC_0(VAR_3, VAR_7, &VAR_9, &VAR_10);
 if (VAR_11)
  return VAR_11;

 if (VAR_9 >= VAR_1)
  return -VAR_0;

 for (VAR_12 = 0; VAR_12 < VAR_5; VAR_12++) {
  FUNC_2(VAR_3, VAR_4 + VAR_12, VAR_9 + VAR_12,
    &VAR_2, VAR_3->host_data);
 }

 VAR_8 = *VAR_7;
 VAR_8.fwnode = VAR_3->parent->fwnode;
 return FUNC_1(VAR_3, VAR_4, VAR_5,
         &VAR_8);
}
