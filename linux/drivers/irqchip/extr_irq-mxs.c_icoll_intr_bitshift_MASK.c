
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct irq_data {int hwirq; } ;



__attribute__((used)) static u32 FUNC_0(struct irq_data *VAR_0, u32 VAR_1)
{




 return VAR_1 << ((VAR_0->hwirq & 3) << 3);
}
