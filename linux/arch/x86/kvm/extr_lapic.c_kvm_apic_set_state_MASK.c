
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_5__ {scalar_t__ apic_arb_prio; scalar_t__ apicv_active; struct kvm_lapic* apic; int apic_base; } ;
struct kvm_vcpu {TYPE_2__ arch; int kvm; } ;
struct kvm_lapic_state {scalar_t__ regs; } ;
struct TYPE_4__ {int timer; } ;
struct kvm_lapic {int irr_pending; int isr_count; int highest_isr_cache; scalar_t__ regs; TYPE_1__ lapic_timer; } ;
struct TYPE_6__ {int (* hwapic_isr_update ) (struct kvm_vcpu*,int ) ;int (* hwapic_irr_update ) (struct kvm_vcpu*,int ) ;int (* apicv_post_state_restore ) (struct kvm_vcpu*) ;} ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct kvm_lapic*) ;
 int FUNC_1 (struct kvm_lapic*) ;
 int FUNC_2 (struct kvm_lapic*,int ) ;
 int FUNC_3 (struct kvm_lapic*,int ) ;
 int FUNC_4 (struct kvm_lapic*) ;
 int FUNC_5 (struct kvm_lapic*) ;
 int FUNC_6 (scalar_t__) ;
 int FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (int ) ;
 int FUNC_9 (struct kvm_vcpu*) ;
 int FUNC_10 (struct kvm_vcpu*,struct kvm_lapic_state*,int) ;
 int FUNC_11 (struct kvm_lapic*,int ) ;
 int FUNC_12 (struct kvm_vcpu*,int ) ;
 int FUNC_13 (int ,struct kvm_vcpu*) ;
 int FUNC_14 (struct kvm_vcpu*) ;
 TYPE_3__* VAR_4 ;
 int FUNC_15 (scalar_t__,scalar_t__,int) ;
 int FUNC_16 (int ) ;
 int FUNC_17 (struct kvm_lapic*) ;
 int FUNC_18 (struct kvm_vcpu*) ;
 int FUNC_19 (struct kvm_vcpu*,int ) ;
 int FUNC_20 (struct kvm_vcpu*,int ) ;
 int FUNC_21 (struct kvm_lapic*) ;

int FUNC_22(struct kvm_vcpu *VAR_5, struct kvm_lapic_state *VAR_6)
{
 struct kvm_lapic *VAR_7 = VAR_5->arch.apic;
 int VAR_8;


 FUNC_12(VAR_5, VAR_5->arch.apic_base);

 FUNC_3(VAR_7, *((u32 *)(VAR_6->regs + VAR_2)));

 VAR_8 = FUNC_10(VAR_5, VAR_6, 1);
 if (VAR_8)
  return VAR_8;
 FUNC_15(VAR_5->arch.apic->regs, VAR_6->regs, sizeof(*VAR_6));

 FUNC_16(VAR_5->kvm);
 FUNC_9(VAR_5);

 FUNC_5(VAR_7);
 FUNC_7(&VAR_7->lapic_timer.timer);
 FUNC_4(VAR_7);
 FUNC_2(VAR_7, FUNC_11(VAR_7, VAR_1));
 FUNC_21(VAR_7);
 FUNC_17(VAR_7);
 VAR_7->irr_pending = 1;
 VAR_7->isr_count = VAR_5->arch.apicv_active ?
    1 : FUNC_6(VAR_7->regs + VAR_0);
 VAR_7->highest_isr_cache = -1;
 if (VAR_5->arch.apicv_active) {
  VAR_4->apicv_post_state_restore(VAR_5);
  VAR_4->hwapic_irr_update(VAR_5,
    FUNC_0(VAR_7));
  VAR_4->hwapic_isr_update(VAR_5,
    FUNC_1(VAR_7));
 }
 FUNC_13(VAR_3, VAR_5);
 if (FUNC_8(VAR_5->kvm))
  FUNC_14(VAR_5);

 VAR_5->arch.apic_arb_prio = 0;

 return 0;
}
