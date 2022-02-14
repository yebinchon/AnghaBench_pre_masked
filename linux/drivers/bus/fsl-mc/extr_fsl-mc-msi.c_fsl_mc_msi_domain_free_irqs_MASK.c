
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_domain {int dummy; } ;
struct device {int dummy; } ;


 struct irq_domain* FUNC_0 (struct device*) ;
 int FUNC_1 (struct device*) ;
 int FUNC_2 (struct device*) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (struct irq_domain*,struct device*) ;

void FUNC_5(struct device *VAR_0)
{
 struct irq_domain *VAR_1;

 VAR_1 = FUNC_0(VAR_0);
 if (!VAR_1)
  return;

 FUNC_4(VAR_1, VAR_0);

 if (FUNC_3(FUNC_1(VAR_0)))
  return;

 FUNC_2(VAR_0);
}
