
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct irq_data {TYPE_1__* chip; struct irq_data* parent_data; } ;
struct irq_cfg {int dummy; } ;
struct cpumask {int dummy; } ;
struct TYPE_2__ {int (* irq_set_affinity ) (struct irq_data*,struct cpumask const*,int) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct irq_data*,int) ;
 struct irq_cfg* FUNC_1 (struct irq_data*) ;
 int FUNC_2 (struct irq_cfg*) ;
 int FUNC_3 (struct irq_data*,struct cpumask const*,int) ;

__attribute__((used)) static int
FUNC_4(struct irq_data *VAR_1, const struct cpumask *VAR_2,
        bool VAR_3)
{
 struct irq_data *VAR_4 = VAR_1->parent_data;
 struct irq_cfg *VAR_5 = FUNC_1(VAR_1);
 int VAR_6;

 VAR_6 = VAR_4->chip->irq_set_affinity(VAR_4, VAR_2, VAR_3);
 if (VAR_6 < 0 || VAR_6 == VAR_0)
  return VAR_6;

 FUNC_0(VAR_1, 0);





 FUNC_2(VAR_5);

 return VAR_0;
}
