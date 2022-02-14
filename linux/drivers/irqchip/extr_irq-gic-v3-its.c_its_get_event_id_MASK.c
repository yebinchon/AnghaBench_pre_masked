
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_2__ {scalar_t__ lpi_base; } ;
struct its_device {TYPE_1__ event_map; } ;
struct irq_data {scalar_t__ hwirq; } ;


 struct its_device* FUNC_0 (struct irq_data*) ;

__attribute__((used)) static inline u32 FUNC_1(struct irq_data *VAR_0)
{
 struct its_device *VAR_1 = FUNC_0(VAR_0);
 return VAR_0->hwirq - VAR_1->event_map.lpi_base;
}
