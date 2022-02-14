
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_data {int irq; } ;
struct cpumask {int dummy; } ;
struct apic_chip_data {int cpu; scalar_t__ vector; } ;


 struct apic_chip_data* FUNC_0 (struct irq_data*) ;
 int FUNC_1 (struct irq_data*,int,int) ;
 int FUNC_2 (struct irq_data*,int,int) ;
 int FUNC_3 (int ,struct cpumask const*,struct cpumask const*) ;
 scalar_t__ FUNC_4 (int ,int ) ;
 struct cpumask* FUNC_5 (struct irq_data*) ;
 int FUNC_6 (int ,int ,int*) ;
 int FUNC_7 (int ,int,int) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int
FUNC_8(struct irq_data *VAR_2, const struct cpumask *VAR_3)
{
 const struct cpumask *VAR_4 = FUNC_5(VAR_2);
 struct apic_chip_data *VAR_5 = FUNC_0(VAR_2);
 int VAR_6, VAR_7;

 FUNC_3(VAR_1, VAR_3, VAR_4);


 if (VAR_5->vector && FUNC_4(VAR_5->cpu, VAR_1))
  return 0;
 VAR_6 = FUNC_6(VAR_0, VAR_1,
       &VAR_7);
 FUNC_7(VAR_2->irq, VAR_6, VAR_6);
 if (VAR_6 < 0)
  return VAR_6;
 FUNC_2(VAR_2, VAR_6, VAR_7);
 FUNC_1(VAR_2, VAR_6, VAR_7);
 return 0;
}
