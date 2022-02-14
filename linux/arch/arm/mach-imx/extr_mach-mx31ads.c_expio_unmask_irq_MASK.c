
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct irq_data {int hwirq; } ;


 int VAR_0 ;
 int FUNC_0 (int,int ) ;

__attribute__((used)) static void FUNC_1(struct irq_data *VAR_1)
{
 u32 VAR_2 = VAR_1->hwirq;

 FUNC_0(1 << VAR_2, VAR_0);
}
