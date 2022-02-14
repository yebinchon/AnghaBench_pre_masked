
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_data {int irq; } ;
struct cpumask {int dummy; } ;
struct apic_chip_data {int has_reserved; unsigned int cpu; int vector; int clist; scalar_t__ move_in_progress; } ;


 int VAR_0 ;
 struct apic_chip_data* FUNC_0 (struct irq_data*) ;
 int FUNC_1 (struct irq_data*,int,unsigned int) ;
 int FUNC_2 (struct irq_data*,int,unsigned int) ;
 scalar_t__ FUNC_3 (unsigned int) ;
 scalar_t__ FUNC_4 (unsigned int,struct cpumask const*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ,struct cpumask const*,int,unsigned int*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int ,int,int,int) ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int
FUNC_9(struct irq_data *VAR_3, const struct cpumask *VAR_4)
{
 struct apic_chip_data *VAR_5 = FUNC_0(VAR_3);
 bool VAR_6 = VAR_5->has_reserved;
 unsigned int VAR_7 = VAR_5->cpu;
 int VAR_8 = VAR_5->vector;

 FUNC_7(&VAR_1);






 if (VAR_8 && FUNC_3(VAR_7) && FUNC_4(VAR_7, VAR_4))
  return 0;







 if (VAR_5->move_in_progress || !FUNC_5(&VAR_5->clist))
  return -VAR_0;

 VAR_8 = FUNC_6(VAR_2, VAR_4, VAR_6, &VAR_7);
 FUNC_8(VAR_3->irq, VAR_8, VAR_6, VAR_8);
 if (VAR_8 < 0)
  return VAR_8;
 FUNC_2(VAR_3, VAR_8, VAR_7);
 FUNC_1(VAR_3, VAR_8, VAR_7);

 return 0;
}
