
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct irq_data {int hwirq; struct gpcv2_irqchip_data* chip_data; } ;
struct gpcv2_irqchip_data {int* wakeup_sources; int rlock; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_3(struct irq_data *VAR_0, unsigned int VAR_1)
{
 struct gpcv2_irqchip_data *VAR_2 = VAR_0->chip_data;
 unsigned int VAR_3 = VAR_0->hwirq / 32;
 unsigned long VAR_4;
 u32 VAR_5, VAR_6;

 FUNC_1(&VAR_2->rlock, VAR_4);
 VAR_5 = FUNC_0(VAR_0->hwirq % 32);
 VAR_6 = VAR_2->wakeup_sources[VAR_3];

 VAR_2->wakeup_sources[VAR_3] = VAR_1 ? (VAR_6 & ~VAR_5) : (VAR_6 | VAR_5);
 FUNC_2(&VAR_2->rlock, VAR_4);






 return 0;
}
