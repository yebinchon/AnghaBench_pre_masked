
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xive_irq_data {int stale_p; } ;
struct kvmppc_xive_vcpu {int dummy; } ;
struct TYPE_2__ {int xive_esc_on; } ;
struct kvm_vcpu {TYPE_1__ arch; } ;
struct irq_data {int dummy; } ;


 struct xive_irq_data* FUNC_0 (struct irq_data*) ;
 struct irq_data* FUNC_1 (int) ;
 int FUNC_2 () ;

void FUNC_3(struct kvm_vcpu *VAR_0,
        struct kvmppc_xive_vcpu *VAR_1, int VAR_2)
{
 struct irq_data *VAR_3 = FUNC_1(VAR_2);
 struct xive_irq_data *VAR_4 = FUNC_0(VAR_3);






 VAR_4->stale_p = 0;
 FUNC_2();
 if (!VAR_0->arch.xive_esc_on)
  VAR_4->stale_p = 1;
}
