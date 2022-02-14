
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ msr_val; } ;
struct TYPE_7__ {int apic_base; scalar_t__ apic_attention; scalar_t__ apic_arb_prio; scalar_t__ apicv_active; TYPE_2__ pv_eoi; struct kvm_lapic* apic; } ;
struct kvm_vcpu {TYPE_3__ arch; int kvm; int vcpu_id; } ;
struct TYPE_5__ {int pending; int timer; } ;
struct kvm_lapic {int isr_count; int highest_isr_cache; TYPE_1__ lapic_timer; scalar_t__ irr_pending; int vcpu; } ;
struct TYPE_8__ {int (* hwapic_isr_update ) (struct kvm_vcpu*,int) ;int (* hwapic_irr_update ) (struct kvm_vcpu*,int) ;int (* apicv_post_state_restore ) (struct kvm_vcpu*) ;} ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (struct kvm_lapic*,int ) ;
 int FUNC_2 (struct kvm_lapic*,int) ;
 int FUNC_3 (struct kvm_lapic*) ;
 int FUNC_4 (struct kvm_lapic*) ;
 int FUNC_5 (struct kvm_lapic*) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct kvm_lapic*,int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (struct kvm_lapic*,int ) ;
 scalar_t__ FUNC_11 (int ,int ) ;
 int FUNC_12 (struct kvm_lapic*,scalar_t__) ;
 int FUNC_13 (struct kvm_vcpu*,int) ;
 int FUNC_14 (struct kvm_lapic*,scalar_t__,int) ;
 scalar_t__ FUNC_15 (struct kvm_vcpu*) ;
 scalar_t__ FUNC_16 (struct kvm_vcpu*) ;
 TYPE_4__* VAR_19 ;
 int FUNC_17 (struct kvm_vcpu*) ;
 int FUNC_18 (struct kvm_vcpu*,int) ;
 int FUNC_19 (struct kvm_vcpu*,int) ;
 int FUNC_20 (struct kvm_lapic*) ;

void FUNC_21(struct kvm_vcpu *VAR_20, bool VAR_21)
{
 struct kvm_lapic *VAR_22 = VAR_20->arch.apic;
 int VAR_23;

 if (!VAR_22)
  return;


 FUNC_7(&VAR_22->lapic_timer.timer);

 if (!VAR_21) {
  FUNC_13(VAR_20, VAR_0 |
                           VAR_18);
  FUNC_10(VAR_22, VAR_20->vcpu_id);
 }
 FUNC_9(VAR_22->vcpu);

 for (VAR_23 = 0; VAR_23 < VAR_15; VAR_23++)
  FUNC_14(VAR_22, VAR_8 + 0x10 * VAR_23, VAR_9);
 FUNC_3(VAR_22);
 if (FUNC_16(VAR_20) &&
     FUNC_11(VAR_20->kvm, VAR_16))
  FUNC_14(VAR_22, VAR_7,
        FUNC_0(0, VAR_10));
 FUNC_1(VAR_22, FUNC_12(VAR_22, VAR_7));

 FUNC_14(VAR_22, VAR_1, 0xffffffffU);
 FUNC_2(VAR_22, 0xff);
 FUNC_14(VAR_22, VAR_11, 0);
 if (!FUNC_5(VAR_22))
  FUNC_8(VAR_22, 0);
 FUNC_14(VAR_22, VAR_2, 0);
 FUNC_14(VAR_22, VAR_3, 0);
 FUNC_14(VAR_22, VAR_4, 0);
 FUNC_14(VAR_22, VAR_12, 0);
 FUNC_14(VAR_22, VAR_13, 0);
 for (VAR_23 = 0; VAR_23 < 8; VAR_23++) {
  FUNC_14(VAR_22, VAR_5 + 0x10 * VAR_23, 0);
  FUNC_14(VAR_22, VAR_6 + 0x10 * VAR_23, 0);
  FUNC_14(VAR_22, VAR_14 + 0x10 * VAR_23, 0);
 }
 VAR_22->irr_pending = VAR_20->arch.apicv_active;
 VAR_22->isr_count = VAR_20->arch.apicv_active ? 1 : 0;
 VAR_22->highest_isr_cache = -1;
 FUNC_20(VAR_22);
 FUNC_6(&VAR_22->lapic_timer.pending, 0);
 if (FUNC_15(VAR_20))
  FUNC_13(VAR_20,
    VAR_20->arch.apic_base | VAR_17);
 VAR_20->arch.pv_eoi.msr_val = 0;
 FUNC_4(VAR_22);
 if (VAR_20->arch.apicv_active) {
  VAR_19->apicv_post_state_restore(VAR_20);
  VAR_19->hwapic_irr_update(VAR_20, -1);
  VAR_19->hwapic_isr_update(VAR_20, -1);
 }

 VAR_20->arch.apic_arb_prio = 0;
 VAR_20->arch.apic_attention = 0;
}
