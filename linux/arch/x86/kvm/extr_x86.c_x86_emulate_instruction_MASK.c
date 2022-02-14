
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int vector; unsigned long address; } ;
struct x86_emulate_ctxt {int have_exception; int perm_ok; int ud; int eflags; scalar_t__ tf; int eip; TYPE_3__ exception; scalar_t__ interruptibility; int _eip; } ;
struct TYPE_6__ {scalar_t__ count; int in; } ;
struct TYPE_9__ {int write_fault_to_shadow_pgtable; int l1tf_flush_l1d; int emulate_regs_need_sync_from_vcpu; int emulate_regs_need_sync_to_vcpu; int complete_userspace_io; TYPE_1__ pio; struct x86_emulate_ctxt emulate_ctxt; } ;
struct TYPE_7__ {int mmio_exits; int insn_emulation; } ;
struct kvm_vcpu {TYPE_4__ arch; int mmio_is_write; TYPE_2__ stat; scalar_t__ mmio_needed; } ;
struct TYPE_10__ {unsigned long (* get_rflags ) (struct kvm_vcpu*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (int) ;
 unsigned long VAR_13 ;
 int VAR_14 ;
 int FUNC_1 (struct kvm_vcpu*,int) ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_2 (struct x86_emulate_ctxt*) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (struct kvm_vcpu*,int) ;
 int FUNC_5 (struct kvm_vcpu*) ;
 scalar_t__ FUNC_6 (struct kvm_vcpu*) ;
 int FUNC_7 (struct x86_emulate_ctxt*) ;
 int FUNC_8 (struct kvm_vcpu*) ;
 int FUNC_9 (int ,struct kvm_vcpu*) ;
 int FUNC_10 (struct kvm_vcpu*,int) ;
 int FUNC_11 (struct kvm_vcpu*,int ,int ) ;
 int FUNC_12 (struct kvm_vcpu*,int ) ;
 int FUNC_13 (struct kvm_vcpu*,int) ;
 scalar_t__ FUNC_14 (struct kvm_vcpu*,int*) ;
 int FUNC_15 (struct kvm_vcpu*) ;
 TYPE_5__* VAR_17 ;
 scalar_t__ FUNC_16 (struct kvm_vcpu*,unsigned long,int,int) ;
 scalar_t__ FUNC_17 (struct x86_emulate_ctxt*,unsigned long,int) ;
 unsigned long FUNC_18 (struct kvm_vcpu*) ;
 int FUNC_19 (struct kvm_vcpu*,scalar_t__) ;
 int FUNC_20 (struct kvm_vcpu*) ;
 scalar_t__ FUNC_21 (unsigned long) ;
 int FUNC_22 (struct x86_emulate_ctxt*,void*,int) ;
 int FUNC_23 (struct x86_emulate_ctxt*) ;

int FUNC_24(struct kvm_vcpu *VAR_18,
       unsigned long VAR_19,
       int VAR_20,
       void *VAR_21,
       int VAR_22)
{
 int VAR_23;
 struct x86_emulate_ctxt *VAR_24 = &VAR_18->arch.emulate_ctxt;
 bool VAR_25 = 1;
 bool VAR_26 = VAR_18->arch.write_fault_to_shadow_pgtable;

 VAR_18->arch.l1tf_flush_l1d = 1;





 VAR_18->arch.write_fault_to_shadow_pgtable = 0;
 FUNC_8(VAR_18);

 if (!(VAR_20 & VAR_4)) {
  FUNC_5(VAR_18);







  if (!(VAR_20 & VAR_5) &&
      FUNC_14(VAR_18, &VAR_23))
   return VAR_23;

  VAR_24->interruptibility = 0;
  VAR_24->have_exception = 0;
  VAR_24->exception.vector = -1;
  VAR_24->perm_ok = 0;

  VAR_24->ud = VAR_20 & VAR_6;

  VAR_23 = FUNC_22(VAR_24, VAR_21, VAR_22);

  FUNC_20(VAR_18);
  ++VAR_18->stat.insn_emulation;
  if (VAR_23 != VAR_2) {
   if ((VAR_20 & VAR_6) ||
       (VAR_20 & VAR_7)) {
    FUNC_10(VAR_18, VAR_12);
    return 1;
   }
   if (FUNC_16(VAR_18, VAR_19, VAR_26,
      VAR_20))
    return 1;
   if (VAR_24->have_exception) {




    FUNC_0(VAR_24->exception.vector == VAR_12 ||
          FUNC_3(VAR_24->exception.vector) == VAR_9);
    FUNC_6(VAR_18);
    return 1;
   }
   return FUNC_4(VAR_18, VAR_20);
  }
 }

 if ((VAR_20 & VAR_8) &&
     !FUNC_7(VAR_24)) {
  FUNC_11(VAR_18, VAR_10, 0);
  return 1;
 }






 if (VAR_20 & VAR_5) {
  FUNC_12(VAR_18, VAR_24->_eip);
  if (VAR_24->eflags & VAR_14)
   FUNC_13(VAR_18, VAR_24->eflags & ~VAR_14);
  return 1;
 }

 if (FUNC_17(VAR_24, VAR_19, VAR_20))
  return 1;



 if (VAR_18->arch.emulate_regs_need_sync_from_vcpu) {
  VAR_18->arch.emulate_regs_need_sync_from_vcpu = 0;
  FUNC_2(VAR_24);
 }

restart:

 VAR_24->exception.address = VAR_19;

 VAR_23 = FUNC_23(VAR_24);

 if (VAR_23 == VAR_1)
  return 1;

 if (VAR_23 == VAR_0) {
  if (FUNC_16(VAR_18, VAR_19, VAR_26,
     VAR_20))
   return 1;

  return FUNC_4(VAR_18, VAR_20);
 }

 if (VAR_24->have_exception) {
  VAR_23 = 1;
  if (FUNC_6(VAR_18))
   return VAR_23;
 } else if (VAR_18->arch.pio.count) {
  if (!VAR_18->arch.pio.in) {

   VAR_18->arch.pio.count = 0;
  } else {
   VAR_25 = 0;
   VAR_18->arch.complete_userspace_io = VAR_16;
  }
  VAR_23 = 0;
 } else if (VAR_18->mmio_needed) {
  ++VAR_18->stat.mmio_exits;

  if (!VAR_18->mmio_is_write)
   VAR_25 = 0;
  VAR_23 = 0;
  VAR_18->arch.complete_userspace_io = VAR_15;
 } else if (VAR_23 == VAR_3)
  goto restart;
 else
  VAR_23 = 1;

 if (VAR_25) {
  unsigned long VAR_27 = VAR_17->get_rflags(VAR_18);
  FUNC_19(VAR_18, VAR_24->interruptibility);
  VAR_18->arch.emulate_regs_need_sync_to_vcpu = 0;
  if (!VAR_24->have_exception ||
      FUNC_3(VAR_24->exception.vector) == VAR_9) {
   FUNC_12(VAR_18, VAR_24->eip);
   if (VAR_23 && VAR_24->tf)
    VAR_23 = FUNC_15(VAR_18);
   FUNC_1(VAR_18, VAR_24->eflags);
  }







  if (FUNC_21((VAR_24->eflags & ~VAR_27) & VAR_13))
   FUNC_9(VAR_11, VAR_18);
 } else
  VAR_18->arch.emulate_regs_need_sync_to_vcpu = 1;

 return VAR_23;
}
