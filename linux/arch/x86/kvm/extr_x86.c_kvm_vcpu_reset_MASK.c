
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct mpx_bndreg_state {int dummy; } ;
struct mpx_bndcsr {int dummy; } ;
struct TYPE_10__ {int halted; scalar_t__ msr_val; } ;
struct TYPE_9__ {scalar_t__ msr_val; } ;
struct TYPE_8__ {int pending; } ;
struct TYPE_13__ {int nmi_injected; void* db; int smbase; void* regs; scalar_t__ ia32_xss; int regs_dirty; int regs_avail; int xcr0; scalar_t__ msr_misc_features_enables; TYPE_5__* guest_fpu; TYPE_3__ apf; TYPE_2__ st; scalar_t__ cr2; int dr7; int dr6; TYPE_1__ exception; scalar_t__ nmi_pending; int nmi_queued; scalar_t__ smi_count; scalar_t__ smi_pending; scalar_t__ hflags; } ;
struct kvm_vcpu {TYPE_6__ arch; } ;
struct TYPE_14__ {int (* vcpu_reset ) (struct kvm_vcpu*,int) ;} ;
struct TYPE_11__ {int xsave; } ;
struct TYPE_12__ {TYPE_4__ state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *,int ) ;
 void* FUNC_1 (int *,int ) ;
 int FUNC_2 (struct kvm_vcpu*) ;
 int FUNC_3 (struct kvm_vcpu*) ;
 int FUNC_4 (struct kvm_vcpu*) ;
 int FUNC_5 (struct kvm_vcpu*) ;
 int FUNC_6 (struct kvm_vcpu*,int) ;
 int FUNC_7 (struct kvm_vcpu*) ;
 int FUNC_8 (int ,struct kvm_vcpu*) ;
 scalar_t__ FUNC_9 () ;
 int FUNC_10 (struct kvm_vcpu*) ;
 int FUNC_11 (struct kvm_vcpu*) ;
 int FUNC_12 (struct kvm_vcpu*) ;
 int FUNC_13 (struct kvm_vcpu*) ;
 int FUNC_14 (struct kvm_vcpu*) ;
 TYPE_7__* VAR_6 ;
 int FUNC_15 (struct kvm_vcpu*) ;
 int FUNC_16 (void*,int ,int) ;
 int FUNC_17 (struct kvm_vcpu*,int) ;

void FUNC_18(struct kvm_vcpu *VAR_7, bool VAR_8)
{
 FUNC_6(VAR_7, VAR_8);

 VAR_7->arch.hflags = 0;

 VAR_7->arch.smi_pending = 0;
 VAR_7->arch.smi_count = 0;
 FUNC_0(&VAR_7->arch.nmi_queued, 0);
 VAR_7->arch.nmi_pending = 0;
 VAR_7->arch.nmi_injected = 0;
 FUNC_5(VAR_7);
 FUNC_4(VAR_7);
 VAR_7->arch.exception.pending = 0;

 FUNC_16(VAR_7->arch.db, 0, sizeof(VAR_7->arch.db));
 FUNC_12(VAR_7);
 VAR_7->arch.dr6 = VAR_0;
 FUNC_13(VAR_7);
 VAR_7->arch.dr7 = VAR_1;
 FUNC_14(VAR_7);

 VAR_7->arch.cr2 = 0;

 FUNC_8(VAR_2, VAR_7);
 VAR_7->arch.apf.msr_val = 0;
 VAR_7->arch.st.msr_val = 0;

 FUNC_15(VAR_7);

 FUNC_3(VAR_7);
 FUNC_2(VAR_7);
 VAR_7->arch.apf.halted = 0;

 if (FUNC_9()) {
  void *VAR_9;





  if (VAR_8)
   FUNC_11(VAR_7);
  VAR_9 = FUNC_1(&VAR_7->arch.guest_fpu->state.xsave,
     VAR_4);
  if (VAR_9)
   FUNC_16(VAR_9, 0, sizeof(struct mpx_bndreg_state));
  VAR_9 = FUNC_1(&VAR_7->arch.guest_fpu->state.xsave,
     VAR_3);
  if (VAR_9)
   FUNC_16(VAR_9, 0, sizeof(struct mpx_bndcsr));
  if (VAR_8)
   FUNC_7(VAR_7);
 }

 if (!VAR_8) {
  FUNC_10(VAR_7);
  VAR_7->arch.smbase = 0x30000;

  VAR_7->arch.msr_misc_features_enables = 0;

  VAR_7->arch.xcr0 = VAR_5;
 }

 FUNC_16(VAR_7->arch.regs, 0, sizeof(VAR_7->arch.regs));
 VAR_7->arch.regs_avail = ~0;
 VAR_7->arch.regs_dirty = ~0;

 VAR_7->arch.ia32_xss = 0;

 VAR_6->vcpu_reset(VAR_7, VAR_8);
}
