
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_data {int hwirq; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct irq_data*) ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (int ,unsigned long) ;

__attribute__((used)) static void FUNC_3(struct irq_data *VAR_2)
{
 unsigned long VAR_3 = 1 << VAR_2->hwirq;

 FUNC_1("irq-xilinx: enable_or_unmask: %ld\n", VAR_2->hwirq);





 if (FUNC_0(VAR_2))
  FUNC_2(VAR_0, VAR_3);

 FUNC_2(VAR_1, VAR_3);
}
