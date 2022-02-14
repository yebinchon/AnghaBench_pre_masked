
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_2__ {scalar_t__ irq_threshold_count; scalar_t__ irq_thermal_count; scalar_t__ irq_call_count; scalar_t__ irq_resched_count; scalar_t__ x86_platform_ipis; scalar_t__ icr_read_retry_count; scalar_t__ apic_irq_work_irqs; scalar_t__ apic_perf_irqs; scalar_t__ irq_spurious_count; scalar_t__ apic_timer_irqs; int __nmi_count; } ;


 TYPE_1__* FUNC_0 (unsigned int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int ,unsigned int) ;
 scalar_t__ VAR_2 ;

u64 FUNC_2(unsigned int VAR_3)
{
 u64 VAR_4 = FUNC_0(VAR_3)->__nmi_count;
 return VAR_4;
}
