
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct irq_fwspec {int param_count; int* param; int fwnode; } ;
struct irq_domain {TYPE_2__* parent; } ;
struct irq_data {TYPE_1__* chip; } ;
struct TYPE_4__ {int fwnode; } ;
struct TYPE_3__ {int (* irq_set_type ) (struct irq_data*,int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct irq_domain*,unsigned int,int,struct irq_fwspec*) ;
 struct irq_data* FUNC_1 (TYPE_2__*,unsigned int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct irq_data*,int) ;

__attribute__((used)) static int FUNC_4(struct irq_domain *VAR_2,
     unsigned int VAR_3, int VAR_4)
{
 struct irq_fwspec VAR_5;
 struct irq_data *VAR_6;
 int VAR_7;

 if (!FUNC_2(VAR_2->parent->fwnode))
  return -VAR_0;

 VAR_5.fwnode = VAR_2->parent->fwnode;
 VAR_5.param_count = 3;
 VAR_5.param[0] = 0;
 VAR_5.param[1] = VAR_4;
 VAR_5.param[2] = VAR_1;

 VAR_7 = FUNC_0(VAR_2, VAR_3, 1, &VAR_5);
 if (VAR_7)
  return VAR_7;

 VAR_6 = FUNC_1(VAR_2->parent, VAR_3);
 VAR_6->chip->irq_set_type(VAR_6, VAR_1);

 return 0;
}
