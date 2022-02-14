
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct irq_fwspec {int param_count; void** param; int fwnode; } ;
struct irq_domain {TYPE_1__* parent; } ;
typedef void* irq_hw_number_t ;
struct TYPE_2__ {int fwnode; } ;


 int VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 int FUNC_0 (struct irq_domain*,unsigned int,int,struct irq_fwspec*) ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 scalar_t__ FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct irq_domain *VAR_3,
        unsigned int VAR_4,
        irq_hw_number_t VAR_5)
{
 struct irq_fwspec VAR_6;

 if (FUNC_1(VAR_3->parent)) {
  VAR_6.fwnode = VAR_3->parent->fwnode;
  VAR_6.param_count = 3;
  VAR_6.param[0] = VAR_1;
  VAR_6.param[1] = VAR_5;
  VAR_6.param[2] = VAR_2;
 } else if (FUNC_2(VAR_3->parent->fwnode)) {
  VAR_6.fwnode = VAR_3->parent->fwnode;
  VAR_6.param_count = 2;
  VAR_6.param[0] = VAR_5;
  VAR_6.param[1] = VAR_2;
 } else {
  return -VAR_0;
 }

 return FUNC_0(VAR_3, VAR_4, 1, &VAR_6);
}
