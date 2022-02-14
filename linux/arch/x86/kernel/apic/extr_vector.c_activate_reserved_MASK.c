
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_data {int irq; } ;
struct apic_chip_data {int has_reserved; int can_reserve; } ;


 struct apic_chip_data* FUNC_0 (struct irq_data*) ;
 int FUNC_1 (struct irq_data*) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (struct irq_data*) ;
 int FUNC_4 (struct irq_data*) ;
 int FUNC_5 (struct irq_data*) ;
 int FUNC_6 (char*,int ) ;

__attribute__((used)) static int FUNC_7(struct irq_data *VAR_0)
{
 struct apic_chip_data *VAR_1 = FUNC_0(VAR_0);
 int VAR_2;

 VAR_2 = FUNC_1(VAR_0);
 if (!VAR_2) {
  VAR_1->has_reserved = 0;







  if (!FUNC_5(VAR_0))
   VAR_1->can_reserve = 0;
 }





 if (!FUNC_2(FUNC_4(VAR_0),
       FUNC_3(VAR_0))) {
  FUNC_6("irq %u: Affinity broken due to vector space exhaustion.\n",
   VAR_0->irq);
 }

 return VAR_2;
}
