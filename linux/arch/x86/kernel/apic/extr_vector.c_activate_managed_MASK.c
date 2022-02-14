
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_data {int irq; } ;
struct cpumask {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct irq_data*,int ) ;
 int VAR_1 ;
 int FUNC_2 (int ,struct cpumask const*,int ) ;
 int FUNC_3 (int ) ;
 struct cpumask* FUNC_4 (struct irq_data*) ;
 int FUNC_5 (char*,int ) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_6(struct irq_data *VAR_3)
{
 const struct cpumask *VAR_4 = FUNC_4(VAR_3);
 int VAR_5;

 FUNC_2(VAR_2, VAR_4, VAR_1);
 if (FUNC_0(FUNC_3(VAR_2))) {

  FUNC_5("Managed startup for irq %u, but no CPU\n", VAR_3->irq);
  return -VAR_0;
 }

 VAR_5 = FUNC_1(VAR_3, VAR_2);




 if (FUNC_0(VAR_5 < 0)) {
  FUNC_5("Managed startup irq %u, no vector available\n",
         VAR_3->irq);
 }
 return VAR_5;
}
