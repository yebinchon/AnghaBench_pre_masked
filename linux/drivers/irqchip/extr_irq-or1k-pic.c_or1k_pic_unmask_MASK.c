
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_data {unsigned long hwirq; } ;


 int VAR_0 ;
 unsigned long FUNC_0 (int ) ;
 int FUNC_1 (int ,unsigned long) ;

__attribute__((used)) static void FUNC_2(struct irq_data *VAR_1)
{
 FUNC_1(VAR_0, FUNC_0(VAR_0) | (1UL << VAR_1->hwirq));
}
