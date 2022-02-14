
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_24__ TYPE_9__ ;
typedef struct TYPE_23__ TYPE_8__ ;
typedef struct TYPE_22__ TYPE_7__ ;
typedef struct TYPE_21__ TYPE_6__ ;
typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;
typedef struct TYPE_15__ TYPE_12__ ;
typedef struct TYPE_14__ TYPE_11__ ;
typedef struct TYPE_13__ TYPE_10__ ;


struct TYPE_18__ {int pending; } ;
struct TYPE_17__ {int exit; } ;
struct TYPE_22__ {int halted; } ;
struct TYPE_13__ {int pending_ioapic_eoi; scalar_t__ mp_state; int switch_db_regs; int tsc_always_catchup; int apic_attention; int gpa_available; TYPE_6__* apic; int last_guest_tsc; int dr6; int * eff_db; scalar_t__ apicv_active; TYPE_3__ exception; scalar_t__ nmi_pending; scalar_t__ smi_pending; TYPE_2__ hyperv; int ioapic_handled_vectors; TYPE_7__ apf; } ;
struct TYPE_19__ {int exits; int req_event; } ;
struct kvm_vcpu {scalar_t__ mode; int guest_debug; TYPE_10__ arch; TYPE_12__* kvm; void* srcu_idx; int vcpu_id; TYPE_4__ stat; TYPE_9__* run; scalar_t__ mmio_needed; } ;
typedef scalar_t__ s64 ;
struct TYPE_16__ {int type; } ;
struct TYPE_23__ {int vector; } ;
struct TYPE_24__ {int hyperv; void* exit_reason; TYPE_1__ system_event; TYPE_8__ eoi; } ;
struct TYPE_20__ {scalar_t__ advance_expire_delta; } ;
struct TYPE_21__ {TYPE_5__ lapic_timer; } ;
struct TYPE_15__ {int srcu; } ;
struct TYPE_14__ {int (* handle_exit ) (struct kvm_vcpu*) ;int (* cancel_injection ) (struct kvm_vcpu*) ;int (* handle_exit_irqoff ) (struct kvm_vcpu*) ;int (* sync_dirty_debug_regs ) (struct kvm_vcpu*) ;int (* run ) (struct kvm_vcpu*) ;int (* request_immediate_exit ) (struct kvm_vcpu*) ;int (* sync_pir_to_irr ) (struct kvm_vcpu*) ;int (* prepare_guest_switch ) (struct kvm_vcpu*) ;int (* enable_irq_window ) (struct kvm_vcpu*) ;int (* enable_nmi_window ) (struct kvm_vcpu*) ;int (* enable_smi_window ) (struct kvm_vcpu*) ;int (* get_vmcs12_pages ) (struct kvm_vcpu*) ;} ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* VAR_4 ;
 void* VAR_5 ;
 void* VAR_6 ;
 void* VAR_7 ;
 void* VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;
 int VAR_38 ;
 int VAR_39 ;
 void* VAR_40 ;
 scalar_t__ VAR_41 ;
 int VAR_42 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct kvm_vcpu*) ;
 int VAR_43 ;
 scalar_t__ FUNC_4 (struct kvm_vcpu*) ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 scalar_t__ FUNC_7 () ;
 int FUNC_8 () ;
 scalar_t__ FUNC_9 (struct kvm_vcpu*,int) ;
 int FUNC_10 (struct kvm_vcpu*) ;
 int FUNC_11 (struct kvm_vcpu*) ;
 int FUNC_12 (struct kvm_vcpu*) ;
 int FUNC_13 (struct kvm_vcpu*) ;
 scalar_t__ FUNC_14 (int ,struct kvm_vcpu*) ;
 scalar_t__ FUNC_15 (struct kvm_vcpu*) ;
 scalar_t__ FUNC_16 (struct kvm_vcpu*) ;
 int FUNC_17 (struct kvm_vcpu*) ;
 int FUNC_18 (TYPE_12__*) ;
 int FUNC_19 (struct kvm_vcpu*) ;
 int FUNC_20 (struct kvm_vcpu*) ;
 scalar_t__ FUNC_21 (struct kvm_vcpu*) ;
 int FUNC_22 (struct kvm_vcpu*) ;
 int FUNC_23 (struct kvm_vcpu*) ;
 int FUNC_24 (int ,struct kvm_vcpu*) ;
 int FUNC_25 (struct kvm_vcpu*) ;
 int FUNC_26 (struct kvm_vcpu*) ;
 int FUNC_27 (struct kvm_vcpu*) ;
 int FUNC_28 (struct kvm_vcpu*) ;
 int FUNC_29 (struct kvm_vcpu*) ;
 int FUNC_30 (struct kvm_vcpu*) ;
 int FUNC_31 (struct kvm_vcpu*,int ) ;
 scalar_t__ FUNC_32 (struct kvm_vcpu*) ;
 unsigned long FUNC_33 (struct kvm_vcpu*) ;
 int FUNC_34 (struct kvm_vcpu*) ;
 int FUNC_35 (struct kvm_vcpu*) ;
 int FUNC_36 (struct kvm_vcpu*) ;
 int FUNC_37 (struct kvm_vcpu*,int) ;
 int FUNC_38 (struct kvm_vcpu*) ;
 TYPE_11__* VAR_44 ;
 scalar_t__ FUNC_39 (struct kvm_vcpu*) ;
 int FUNC_40 () ;
 int FUNC_41 () ;
 scalar_t__ FUNC_42 () ;
 int FUNC_43 () ;
 int FUNC_44 () ;
 int FUNC_45 (struct kvm_vcpu*) ;
 int FUNC_46 (struct kvm_vcpu*) ;
 scalar_t__ VAR_45 ;
 int FUNC_47 (scalar_t__,void*) ;
 int FUNC_48 () ;
 int FUNC_49 (struct kvm_vcpu*) ;
 int FUNC_50 (int ,int) ;
 scalar_t__ FUNC_51 (int ) ;
 int FUNC_52 () ;
 int FUNC_53 () ;
 void* FUNC_54 (int *) ;
 int FUNC_55 (int *,void*) ;
 int FUNC_56 (struct kvm_vcpu*) ;
 int FUNC_57 (struct kvm_vcpu*) ;
 int FUNC_58 (struct kvm_vcpu*) ;
 int FUNC_59 (struct kvm_vcpu*) ;
 int FUNC_60 (struct kvm_vcpu*) ;
 int FUNC_61 (struct kvm_vcpu*) ;
 int FUNC_62 (struct kvm_vcpu*) ;
 int FUNC_63 (struct kvm_vcpu*) ;
 int FUNC_64 (struct kvm_vcpu*) ;
 int FUNC_65 (struct kvm_vcpu*) ;
 int FUNC_66 (struct kvm_vcpu*) ;
 int FUNC_67 (struct kvm_vcpu*) ;
 scalar_t__ FUNC_68 (int,int ) ;
 int FUNC_69 (int ) ;
 int FUNC_70 (int ) ;
 int FUNC_71 (int ,scalar_t__) ;
 scalar_t__ FUNC_72 (int) ;
 int FUNC_73 (struct kvm_vcpu*) ;
 int FUNC_74 (struct kvm_vcpu*) ;
 int FUNC_75 (struct kvm_vcpu*) ;

__attribute__((used)) static int FUNC_76(struct kvm_vcpu *VAR_46)
{
 int VAR_47;
 bool VAR_48 =
  FUNC_4(VAR_46) &&
  FUNC_15(VAR_46);

 bool VAR_49 = 0;

 if (FUNC_32(VAR_46)) {
  if (FUNC_14(VAR_16, VAR_46)) {
   if (FUNC_72(!VAR_44->get_vmcs12_pages(VAR_46))) {
    VAR_47 = 0;
    goto out;
   }
  }
  if (FUNC_14(VAR_27, VAR_46))
   FUNC_28(VAR_46);
  if (FUNC_14(VAR_26, VAR_46))
   FUNC_3(VAR_46);
  if (FUNC_14(VAR_25, VAR_46))
   FUNC_18(VAR_46->kvm);
  if (FUNC_14(VAR_17, VAR_46))
   FUNC_17(VAR_46);
  if (FUNC_14(VAR_14, VAR_46)) {
   VAR_47 = FUNC_19(VAR_46);
   if (FUNC_72(VAR_47))
    goto out;
  }
  if (FUNC_14(VAR_28, VAR_46))
   FUNC_27(VAR_46);
  if (FUNC_14(VAR_23, VAR_46))
   FUNC_25(VAR_46);
  if (FUNC_14(VAR_36, VAR_46))
   FUNC_37(VAR_46, 1);
  if (FUNC_14(VAR_32, VAR_46)) {
   VAR_46->run->exit_reason = VAR_8;
   VAR_47 = 0;
   goto out;
  }
  if (FUNC_14(VAR_37, VAR_46)) {
   VAR_46->run->exit_reason = VAR_6;
   VAR_46->mmio_needed = 0;
   VAR_47 = 0;
   goto out;
  }
  if (FUNC_14(VAR_12, VAR_46)) {

   VAR_46->arch.apf.halted = 1;
   VAR_47 = 1;
   goto out;
  }
  if (FUNC_14(VAR_35, VAR_46))
   FUNC_49(VAR_46);
  if (FUNC_14(VAR_34, VAR_46))
   FUNC_46(VAR_46);
  if (FUNC_14(VAR_29, VAR_46))
   FUNC_45(VAR_46);
  if (FUNC_14(VAR_31, VAR_46))
   FUNC_30(VAR_46);
  if (FUNC_14(VAR_30, VAR_46))
   FUNC_29(VAR_46);
  if (FUNC_14(VAR_22, VAR_46)) {
   FUNC_0(VAR_46->arch.pending_ioapic_eoi > 255);
   if (FUNC_68(VAR_46->arch.pending_ioapic_eoi,
         VAR_46->arch.ioapic_handled_vectors)) {
    VAR_46->run->exit_reason = VAR_5;
    VAR_46->run->eoi.vector =
      VAR_46->arch.pending_ioapic_eoi;
    VAR_47 = 0;
    goto out;
   }
  }
  if (FUNC_14(VAR_33, VAR_46))
   FUNC_75(VAR_46);
  if (FUNC_14(VAR_24, VAR_46))
   FUNC_74(VAR_46);
  if (FUNC_14(VAR_13, VAR_46))
   FUNC_38(VAR_46);
  if (FUNC_14(VAR_18, VAR_46)) {
   VAR_46->run->exit_reason = VAR_7;
   VAR_46->run->system_event.type = VAR_38;
   VAR_47 = 0;
   goto out;
  }
  if (FUNC_14(VAR_20, VAR_46)) {
   VAR_46->run->exit_reason = VAR_7;
   VAR_46->run->system_event.type = VAR_39;
   VAR_47 = 0;
   goto out;
  }
  if (FUNC_14(VAR_19, VAR_46)) {
   VAR_46->run->exit_reason = VAR_4;
   VAR_46->run->hyperv = VAR_46->arch.hyperv.exit;
   VAR_47 = 0;
   goto out;
  }






  if (FUNC_14(VAR_21, VAR_46))
   FUNC_20(VAR_46);
 }

 if (FUNC_14(VAR_15, VAR_46) || VAR_48) {
  ++VAR_46->stat.req_event;
  FUNC_12(VAR_46);
  if (VAR_46->arch.mp_state == VAR_10) {
   VAR_47 = 1;
   goto out;
  }

  if (FUNC_9(VAR_46, VAR_48) != 0)
   VAR_49 = 1;
  else {
   if (VAR_46->arch.smi_pending && !FUNC_10(VAR_46))
    if (!VAR_44->enable_smi_window(VAR_46))
     VAR_49 = 1;
   if (VAR_46->arch.nmi_pending)
    VAR_44->enable_nmi_window(VAR_46);
   if (FUNC_16(VAR_46) || VAR_48)
    VAR_44->enable_irq_window(VAR_46);
   FUNC_1(VAR_46->arch.exception.pending);
  }

  if (FUNC_21(VAR_46)) {
   FUNC_73(VAR_46);
   FUNC_23(VAR_46);
  }
 }

 VAR_47 = FUNC_26(VAR_46);
 if (FUNC_72(VAR_47)) {
  goto cancel_injection;
 }

 FUNC_43();

 VAR_44->prepare_guest_switch(VAR_46);






 FUNC_40();
 VAR_46->mode = VAR_1;

 FUNC_55(&VAR_46->kvm->srcu, VAR_46->srcu_idx);
 FUNC_52();





 if (FUNC_21(VAR_46) && VAR_46->arch.apicv_active)
  VAR_44->sync_pir_to_irr(VAR_46);

 if (VAR_46->mode == VAR_0 || FUNC_32(VAR_46)
     || FUNC_42() || FUNC_51(VAR_43)) {
  VAR_46->mode = VAR_40;
  FUNC_53();
  FUNC_41();
  FUNC_44();
  VAR_46->srcu_idx = FUNC_54(&VAR_46->kvm->srcu);
  VAR_47 = 1;
  goto cancel_injection;
 }

 if (VAR_49) {
  FUNC_24(VAR_15, VAR_46);
  VAR_44->request_immediate_exit(VAR_46);
 }

 FUNC_70(VAR_46->vcpu_id);
 FUNC_5();


 FUNC_2(FUNC_69(VAR_42));

 if (FUNC_72(VAR_46->arch.switch_db_regs)) {
  FUNC_50(0, 7);
  FUNC_50(VAR_46->arch.eff_db[0], 0);
  FUNC_50(VAR_46->arch.eff_db[1], 1);
  FUNC_50(VAR_46->arch.eff_db[2], 2);
  FUNC_50(VAR_46->arch.eff_db[3], 3);
  FUNC_50(VAR_46->arch.dr6, 6);
  VAR_46->arch.switch_db_regs &= ~VAR_2;
 }

 VAR_44->run(VAR_46);







 if (FUNC_72(VAR_46->arch.switch_db_regs & VAR_3)) {
  FUNC_1(VAR_46->guest_debug & VAR_9);
  VAR_44->sync_dirty_debug_regs(VAR_46);
  FUNC_34(VAR_46);
  FUNC_35(VAR_46);
  FUNC_36(VAR_46);
  VAR_46->arch.switch_db_regs &= ~VAR_2;
 }
 if (FUNC_7())
  FUNC_8();

 VAR_46->arch.last_guest_tsc = FUNC_31(VAR_46, FUNC_48());

 VAR_46->mode = VAR_40;
 FUNC_53();

 VAR_44->handle_exit_irqoff(VAR_46);
 FUNC_13(VAR_46);
 FUNC_41();
 ++VAR_46->stat.exits;
 FUNC_40();
 FUNC_11(VAR_46);

 FUNC_6();
 if (FUNC_39(VAR_46)) {
  s64 VAR_50 = VAR_46->arch.apic->lapic_timer.advance_expire_delta;
  if (VAR_50 != VAR_41) {
   FUNC_71(VAR_46->vcpu_id, VAR_50);
   VAR_46->arch.apic->lapic_timer.advance_expire_delta = VAR_41;
  }
 }

 FUNC_41();
 FUNC_44();

 VAR_46->srcu_idx = FUNC_54(&VAR_46->kvm->srcu);




 if (FUNC_72(VAR_45 == VAR_11)) {
  unsigned long VAR_51 = FUNC_33(VAR_46);
  FUNC_47(VAR_11, (void *)VAR_51);
 }

 if (FUNC_72(VAR_46->arch.tsc_always_catchup))
  FUNC_24(VAR_14, VAR_46);

 if (VAR_46->arch.apic_attention)
  FUNC_22(VAR_46);

 VAR_46->arch.gpa_available = 0;
 VAR_47 = VAR_44->handle_exit(VAR_46);
 return VAR_47;

cancel_injection:
 VAR_44->cancel_injection(VAR_46);
 if (FUNC_72(VAR_46->arch.apic_attention))
  FUNC_22(VAR_46);
out:
 return VAR_47;
}
