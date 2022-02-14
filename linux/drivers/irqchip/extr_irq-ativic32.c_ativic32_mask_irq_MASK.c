
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_data {int hwirq; } ;


 unsigned long FUNC_0 (int ) ;
 int VAR_0 ;
 unsigned long FUNC_1 (int ) ;
 int FUNC_2 (unsigned long,int ) ;

__attribute__((used)) static void FUNC_3(struct irq_data *VAR_1)
{
 unsigned long VAR_2 = FUNC_1(VAR_0);
 FUNC_2(VAR_2 & (~(FUNC_0(VAR_1->hwirq))), VAR_0);
}
