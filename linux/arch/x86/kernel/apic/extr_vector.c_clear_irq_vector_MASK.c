
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_data {int irq; } ;
struct apic_chip_data {unsigned int vector; unsigned int prev_vector; int clist; scalar_t__ move_in_progress; int prev_cpu; int cpu; } ;


 int VAR_0 ;
 struct apic_chip_data* FUNC_0 (struct irq_data*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int ,unsigned int,int) ;
 int FUNC_3 (struct irq_data*) ;
 int FUNC_4 (int *) ;
 int * FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,unsigned int,int ,unsigned int,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_7(struct irq_data *VAR_4)
{
 struct apic_chip_data *VAR_5 = FUNC_0(VAR_4);
 bool VAR_6 = FUNC_3(VAR_4);
 unsigned int VAR_7 = VAR_5->vector;

 FUNC_4(&VAR_2);

 if (!VAR_7)
  return;

 FUNC_6(VAR_4->irq, VAR_7, VAR_5->cpu, VAR_5->prev_vector,
      VAR_5->prev_cpu);

 FUNC_5(VAR_1, VAR_5->cpu)[VAR_7] = VAR_0;
 FUNC_2(VAR_3, VAR_5->cpu, VAR_7, VAR_6);
 VAR_5->vector = 0;


 VAR_7 = VAR_5->prev_vector;
 if (!VAR_7)
  return;

 FUNC_5(VAR_1, VAR_5->prev_cpu)[VAR_7] = VAR_0;
 FUNC_2(VAR_3, VAR_5->prev_cpu, VAR_7, VAR_6);
 VAR_5->prev_vector = 0;
 VAR_5->move_in_progress = 0;
 FUNC_1(&VAR_5->clist);
}
