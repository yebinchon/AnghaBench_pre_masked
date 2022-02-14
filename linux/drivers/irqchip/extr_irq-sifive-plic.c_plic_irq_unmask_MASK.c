
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_data {int hwirq; } ;


 scalar_t__ FUNC_0 (int) ;
 int VAR_0 ;
 unsigned int FUNC_1 (int ,int ) ;
 int FUNC_2 (unsigned int) ;
 int FUNC_3 (struct irq_data*) ;
 unsigned int VAR_1 ;
 int FUNC_4 (int ,int ,int) ;

__attribute__((used)) static void FUNC_5(struct irq_data *VAR_2)
{
 unsigned int VAR_3 = FUNC_1(FUNC_3(VAR_2),
        VAR_0);
 if (FUNC_0(VAR_3 >= VAR_1))
  return;
 FUNC_4(FUNC_2(VAR_3), VAR_2->hwirq, 1);
}
