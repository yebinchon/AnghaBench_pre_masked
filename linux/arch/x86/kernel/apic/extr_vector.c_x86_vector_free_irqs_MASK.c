
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_domain {int dummy; } ;
struct irq_data {struct apic_chip_data* chip_data; } ;
struct apic_chip_data {int dummy; } ;


 int FUNC_0 (struct irq_data*) ;
 int FUNC_1 (struct apic_chip_data*) ;
 struct irq_data* FUNC_2 (int ,unsigned int) ;
 int FUNC_3 (struct irq_data*) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (struct irq_data*) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_7(struct irq_domain *VAR_2,
     unsigned int VAR_3, unsigned int VAR_4)
{
 struct apic_chip_data *VAR_5;
 struct irq_data *VAR_6;
 unsigned long VAR_7;
 int VAR_8;

 for (VAR_8 = 0; VAR_8 < VAR_4; VAR_8++) {
  VAR_6 = FUNC_2(VAR_1, VAR_3 + VAR_8);
  if (VAR_6 && VAR_6->chip_data) {
   FUNC_4(&VAR_0, VAR_7);
   FUNC_0(VAR_6);
   FUNC_6(VAR_6);
   VAR_5 = VAR_6->chip_data;
   FUNC_3(VAR_6);
   FUNC_5(&VAR_0, VAR_7);
   FUNC_1(VAR_5);
  }
 }
}
