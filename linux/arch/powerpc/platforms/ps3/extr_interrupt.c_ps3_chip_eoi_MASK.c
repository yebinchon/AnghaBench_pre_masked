
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ps3_private {int thread_id; int ppe_id; int ipi_mask; } ;
struct irq_data {int irq; } ;


 struct ps3_private* FUNC_0 (struct irq_data*) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int ,int *) ;

__attribute__((used)) static void FUNC_3(struct irq_data *VAR_0)
{
 const struct ps3_private *VAR_1 = FUNC_0(VAR_0);



 if (!FUNC_2(63 - VAR_0->irq, &VAR_1->ipi_mask))
  FUNC_1(VAR_1->ppe_id, VAR_1->thread_id, VAR_0->irq);
}
