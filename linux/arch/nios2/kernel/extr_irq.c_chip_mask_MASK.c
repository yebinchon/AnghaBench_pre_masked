
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_data {int hwirq; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int) ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_1(struct irq_data *VAR_2)
{
 VAR_1 &= ~(1 << VAR_2->hwirq);
 FUNC_0(VAR_0, VAR_1);
}
