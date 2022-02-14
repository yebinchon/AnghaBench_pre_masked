
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct irq_data {int hwirq; } ;


 int* VAR_0 ;

__attribute__((used)) static int FUNC_0(struct irq_data *VAR_1, unsigned int VAR_2)
{
 unsigned int VAR_3 = VAR_1->hwirq / 32;
 u32 VAR_4;

 VAR_4 = 1 << VAR_1->hwirq % 32;
 VAR_0[VAR_3] = VAR_2 ? VAR_0[VAR_3] | VAR_4 :
      VAR_0[VAR_3] & ~VAR_4;





 return 0;
}
