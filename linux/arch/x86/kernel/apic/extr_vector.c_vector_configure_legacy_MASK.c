
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_data {int dummy; } ;
struct apic_chip_data {int can_reserve; scalar_t__ cpu; int vector; } ;


 int FUNC_0 (unsigned int) ;
 int FUNC_1 (struct irq_data*,int ,scalar_t__) ;
 int FUNC_2 (struct irq_data*) ;
 scalar_t__ FUNC_3 (struct irq_data*) ;
 int FUNC_4 (struct irq_data*) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (unsigned int,int,int ) ;
 int VAR_0 ;

__attribute__((used)) static bool FUNC_8(unsigned int VAR_1, struct irq_data *VAR_2,
        struct apic_chip_data *VAR_3)
{
 unsigned long VAR_4;
 bool VAR_5 = 0;

 VAR_3->vector = FUNC_0(VAR_1);
 VAR_3->cpu = 0;

 FUNC_5(&VAR_0, VAR_4);




 if (FUNC_3(VAR_2)) {
  FUNC_7(VAR_1, 1, 0);
  FUNC_1(VAR_2, VAR_3->vector, VAR_3->cpu);
 } else {

  VAR_3->can_reserve = 1;
  FUNC_4(VAR_2);
  FUNC_2(VAR_2);
  VAR_5 = 1;
 }
 FUNC_6(&VAR_0, VAR_4);
 return VAR_5;
}
