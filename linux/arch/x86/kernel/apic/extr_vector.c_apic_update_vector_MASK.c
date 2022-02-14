
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_desc {int dummy; } ;
struct irq_data {int irq; } ;
struct apic_chip_data {unsigned int vector; unsigned int cpu; unsigned int prev_vector; int move_in_progress; unsigned int prev_cpu; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct irq_desc*) ;
 unsigned int VAR_0 ;
 struct apic_chip_data* FUNC_2 (struct irq_data*) ;
 scalar_t__ FUNC_3 (unsigned int) ;
 struct irq_desc* FUNC_4 (struct irq_data*) ;
 int FUNC_5 (int ,unsigned int,unsigned int,int) ;
 int FUNC_6 (struct irq_data*) ;
 int FUNC_7 (int *) ;
 struct irq_desc** FUNC_8 (int ,unsigned int) ;
 int FUNC_9 (int ,unsigned int,unsigned int,unsigned int,unsigned int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_10(struct irq_data *VAR_4, unsigned int VAR_5,
          unsigned int VAR_6)
{
 struct apic_chip_data *VAR_7 = FUNC_2(VAR_4);
 struct irq_desc *VAR_8 = FUNC_4(VAR_4);
 bool VAR_9 = FUNC_6(VAR_4);

 FUNC_7(&VAR_2);

 FUNC_9(VAR_4->irq, VAR_5, VAR_6, VAR_7->vector,
       VAR_7->cpu);







 VAR_7->prev_vector = 0;
 if (!VAR_7->vector || VAR_7->vector == VAR_0)
  goto setnew;
 if (FUNC_3(VAR_7->cpu)) {
  VAR_7->move_in_progress = 1;
  VAR_7->prev_vector = VAR_7->vector;
  VAR_7->prev_cpu = VAR_7->cpu;
 } else {
  FUNC_5(VAR_3, VAR_7->cpu, VAR_7->vector,
    VAR_9);
 }

setnew:
 VAR_7->vector = VAR_5;
 VAR_7->cpu = VAR_6;
 FUNC_0(!FUNC_1(FUNC_8(VAR_1, VAR_6)[VAR_5]));
 FUNC_8(VAR_1, VAR_6)[VAR_5] = VAR_8;
}
