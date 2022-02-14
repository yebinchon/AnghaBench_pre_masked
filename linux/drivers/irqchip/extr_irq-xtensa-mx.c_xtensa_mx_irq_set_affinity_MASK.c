
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_data {scalar_t__ hwirq; } ;
struct cpumask {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int VAR_1 ;
 int FUNC_1 (struct cpumask const*,int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct irq_data*,int ) ;
 int FUNC_4 (unsigned int,int ) ;

__attribute__((used)) static int FUNC_5(struct irq_data *VAR_2,
  const struct cpumask *VAR_3, bool VAR_4)
{
 int VAR_5 = FUNC_1(VAR_3, VAR_1);
 unsigned VAR_6 = 1u << VAR_5;

 FUNC_4(VAR_6, FUNC_0(VAR_2->hwirq - VAR_0));
 FUNC_3(VAR_2, FUNC_2(VAR_5));

 return 0;

}
