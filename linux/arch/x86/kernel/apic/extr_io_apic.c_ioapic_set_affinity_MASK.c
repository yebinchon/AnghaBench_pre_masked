
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct irq_data {TYPE_1__* chip; struct irq_data* parent_data; } ;
struct cpumask {int dummy; } ;
struct TYPE_2__ {int (* irq_set_affinity ) (struct irq_data*,struct cpumask const*,int) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct irq_data*) ;
 int VAR_1 ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (struct irq_data*,struct cpumask const*,int) ;

__attribute__((used)) static int FUNC_4(struct irq_data *VAR_2,
          const struct cpumask *VAR_3, bool VAR_4)
{
 struct irq_data *VAR_5 = VAR_2->parent_data;
 unsigned long VAR_6;
 int VAR_7;

 VAR_7 = VAR_5->chip->irq_set_affinity(VAR_5, VAR_3, VAR_4);
 FUNC_1(&VAR_1, VAR_6);
 if (VAR_7 >= 0 && VAR_7 != VAR_0)
  FUNC_0(VAR_2);
 FUNC_2(&VAR_1, VAR_6);

 return VAR_7;
}
