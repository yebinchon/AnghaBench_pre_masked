
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_data {int dummy; } ;
struct cpumask {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct irq_data*,struct cpumask const*) ;
 struct cpumask const* VAR_1 ;
 int FUNC_1 (struct cpumask const*,struct cpumask const*,struct cpumask const*) ;
 struct cpumask const* FUNC_2 (int) ;
 struct cpumask* FUNC_3 (struct irq_data*) ;
 int FUNC_4 (struct irq_data*) ;
 struct cpumask const* VAR_2 ;

__attribute__((used)) static int FUNC_5(struct irq_data *VAR_3)
{

 const struct cpumask *VAR_4 = FUNC_3(VAR_3);
 int VAR_5 = FUNC_4(VAR_3);

 if (VAR_5 == VAR_0)
  goto all;

 FUNC_1(VAR_2, FUNC_2(VAR_5), VAR_4);
 if (!FUNC_0(VAR_3, VAR_2))
  return 0;

 if (!FUNC_0(VAR_3, FUNC_2(VAR_5)))
  return 0;
all:

 FUNC_1(VAR_2, VAR_4, VAR_1);
 if (!FUNC_0(VAR_3, VAR_2))
  return 0;

 return FUNC_0(VAR_3, VAR_1);
}
