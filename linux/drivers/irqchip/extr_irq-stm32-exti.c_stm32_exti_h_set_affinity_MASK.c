
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct irq_data {TYPE_1__* parent_data; } ;
struct cpumask {int dummy; } ;
struct TYPE_2__ {scalar_t__ chip; } ;


 int VAR_0 ;
 int FUNC_0 (struct irq_data*,struct cpumask const*,int) ;

__attribute__((used)) static int FUNC_1(struct irq_data *VAR_1,
         const struct cpumask *VAR_2, bool VAR_3)
{
 if (VAR_1->parent_data->chip)
  return FUNC_0(VAR_1, VAR_2, VAR_3);

 return -VAR_0;
}
