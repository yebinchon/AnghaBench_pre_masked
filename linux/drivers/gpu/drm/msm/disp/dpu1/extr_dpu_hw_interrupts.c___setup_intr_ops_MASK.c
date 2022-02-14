
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dpu_hw_intr_ops {int get_interrupt_status; int clear_intr_status_nolock; int get_interrupt_statuses; int disable_all_irqs; int clear_all_irqs; int dispatch_irqs; int disable_irq; int enable_irq; int irq_idx_lookup; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;

__attribute__((used)) static void FUNC_0(struct dpu_hw_intr_ops *VAR_9)
{
 VAR_9->irq_idx_lookup = VAR_8;
 VAR_9->enable_irq = VAR_5;
 VAR_9->disable_irq = VAR_2;
 VAR_9->dispatch_irqs = VAR_4;
 VAR_9->clear_all_irqs = VAR_1;
 VAR_9->disable_all_irqs = VAR_3;
 VAR_9->get_interrupt_statuses = VAR_7;
 VAR_9->clear_intr_status_nolock = VAR_0;
 VAR_9->get_interrupt_status = VAR_6;
}
