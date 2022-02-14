
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_2__ {scalar_t__ doorbell_irqs; scalar_t__ soft_nmi_irqs; scalar_t__ sreset_irqs; scalar_t__ hmi_exceptions; scalar_t__ timer_irqs_others; scalar_t__ spurious_irqs; scalar_t__ mce_exceptions; scalar_t__ pmu_irqs; scalar_t__ broadcast_irqs_event; int timer_irqs_event; } ;


 int VAR_0 ;
 TYPE_1__ FUNC_0 (int ,unsigned int) ;

u64 FUNC_1(unsigned int VAR_1)
{
 u64 VAR_2 = FUNC_0(VAR_0, VAR_1).timer_irqs_event;

 VAR_2 += FUNC_0(VAR_0, VAR_1).broadcast_irqs_event;
 VAR_2 += FUNC_0(VAR_0, VAR_1).pmu_irqs;
 VAR_2 += FUNC_0(VAR_0, VAR_1).mce_exceptions;
 VAR_2 += FUNC_0(VAR_0, VAR_1).spurious_irqs;
 VAR_2 += FUNC_0(VAR_0, VAR_1).timer_irqs_others;
 VAR_2 += FUNC_0(VAR_0, VAR_1).hmi_exceptions;
 VAR_2 += FUNC_0(VAR_0, VAR_1).sreset_irqs;







 return VAR_2;
}
