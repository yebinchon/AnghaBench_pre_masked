
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


struct runtime_instr_cb {scalar_t__ v; } ;
struct TYPE_16__ {int regs; scalar_t__ fpc; } ;
struct TYPE_14__ {scalar_t__ pfault_token; int gs_enabled; struct gs_cb* host_gscb; TYPE_1__ host_fpregs; int host_acrs; TYPE_10__* sie_block; int pfault_compare; int pfault_select; } ;
struct kvm_vcpu {TYPE_5__* run; TYPE_11__ arch; int kvm; } ;
struct TYPE_23__ {scalar_t__ pft; scalar_t__ bpbc; int pfc; int pfs; int gbea; int pp; int todpr; int ckc; int cputm; int crs; int prefix; int gscb; int riccb; } ;
struct TYPE_24__ {TYPE_8__ regs; } ;
struct kvm_run {int kvm_dirty_regs; TYPE_9__ s; int psw_addr; int psw_mask; } ;
struct gs_cb {scalar_t__ gssm; } ;
struct TYPE_22__ {int addr; int mask; } ;
struct TYPE_17__ {scalar_t__ fpc; int regs; } ;
struct TYPE_21__ {struct gs_cb* gs_cb; TYPE_2__ fpu; } ;
struct TYPE_18__ {int gscb; scalar_t__ fpc; int fprs; int vrs; int acrs; } ;
struct TYPE_19__ {TYPE_3__ regs; } ;
struct TYPE_20__ {TYPE_4__ s; } ;
struct TYPE_15__ {TYPE_6__ thread; } ;
struct TYPE_13__ {int ecb3; int fpf; int ecd; int ecb; int gbea; int pp; int todpr; int ckc; int gcr; TYPE_7__ gpsw; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 int FUNC_0 (struct kvm_vcpu*,int,char*,char*) ;
 int FUNC_1 (int,int) ;
 TYPE_12__* VAR_15 ;
 int FUNC_2 (struct kvm_vcpu*) ;
 int FUNC_3 (int ,struct kvm_vcpu*) ;
 int FUNC_4 (struct kvm_vcpu*,int ) ;
 int FUNC_5 (struct kvm_vcpu*,int ) ;
 int FUNC_6 (int *,int *,int) ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 int FUNC_9 (int ) ;
 int FUNC_10 (struct gs_cb*) ;
 int FUNC_11 (int ) ;
 int FUNC_12 () ;
 int FUNC_13 (struct gs_cb*) ;
 scalar_t__ FUNC_14 (scalar_t__) ;
 scalar_t__ FUNC_15 (int ,int) ;

__attribute__((used)) static void FUNC_16(struct kvm_vcpu *VAR_16, struct kvm_run *VAR_17)
{
 struct runtime_instr_cb *VAR_18;
 struct gs_cb *VAR_19;

 VAR_18 = (struct runtime_instr_cb *) &VAR_17->s.regs.riccb;
 VAR_19 = (struct gs_cb *) &VAR_17->s.regs.gscb;
 VAR_16->arch.sie_block->gpsw.mask = VAR_17->psw_mask;
 VAR_16->arch.sie_block->gpsw.addr = VAR_17->psw_addr;
 if (VAR_17->kvm_dirty_regs & VAR_11)
  FUNC_5(VAR_16, VAR_17->s.regs.prefix);
 if (VAR_17->kvm_dirty_regs & VAR_8) {
  FUNC_6(&VAR_16->arch.sie_block->gcr, &VAR_17->s.regs.crs, 128);

  FUNC_3(VAR_4, VAR_16);
 }
 if (VAR_17->kvm_dirty_regs & VAR_6) {
  FUNC_4(VAR_16, VAR_17->s.regs.cputm);
  VAR_16->arch.sie_block->ckc = VAR_17->s.regs.ckc;
  VAR_16->arch.sie_block->todpr = VAR_17->s.regs.todpr;
  VAR_16->arch.sie_block->pp = VAR_17->s.regs.pp;
  VAR_16->arch.sie_block->gbea = VAR_17->s.regs.gbea;
 }
 if (VAR_17->kvm_dirty_regs & VAR_10) {
  VAR_16->arch.pfault_token = VAR_17->s.regs.pft;
  VAR_16->arch.pfault_select = VAR_17->s.regs.pfs;
  VAR_16->arch.pfault_compare = VAR_17->s.regs.pfc;
  if (VAR_16->arch.pfault_token == VAR_5)
   FUNC_2(VAR_16);
 }




 if ((VAR_17->kvm_dirty_regs & VAR_12) &&
     FUNC_15(VAR_16->kvm, 64) &&
     VAR_18->v &&
     !(VAR_16->arch.sie_block->ecb3 & VAR_0)) {
  FUNC_0(VAR_16, 3, "%s", "ENABLE: RI (sync_regs)");
  VAR_16->arch.sie_block->ecb3 |= VAR_0;
 }




 if ((VAR_17->kvm_dirty_regs & VAR_9) &&
     FUNC_15(VAR_16->kvm, 133) &&
     VAR_19->gssm &&
     !VAR_16->arch.gs_enabled) {
  FUNC_0(VAR_16, 3, "%s", "ENABLE: GS (sync_regs)");
  VAR_16->arch.sie_block->ecb |= VAR_1;
  VAR_16->arch.sie_block->ecd |= VAR_2;
  VAR_16->arch.gs_enabled = 1;
 }
 if ((VAR_17->kvm_dirty_regs & VAR_7) &&
     FUNC_15(VAR_16->kvm, 82)) {
  VAR_16->arch.sie_block->fpf &= ~VAR_3;
  VAR_16->arch.sie_block->fpf |= VAR_17->s.regs.bpbc ? VAR_3 : 0;
 }
 FUNC_11(VAR_16->arch.host_acrs);
 FUNC_9(VAR_16->run->s.regs.acrs);

 FUNC_12();
 VAR_16->arch.host_fpregs.fpc = VAR_15->thread.fpu.fpc;
 VAR_16->arch.host_fpregs.regs = VAR_15->thread.fpu.regs;
 if (VAR_14)
  VAR_15->thread.fpu.regs = VAR_16->run->s.regs.vrs;
 else
  VAR_15->thread.fpu.regs = VAR_16->run->s.regs.fprs;
 VAR_15->thread.fpu.fpc = VAR_16->run->s.regs.fpc;
 if (FUNC_14(VAR_15->thread.fpu.fpc))

  VAR_15->thread.fpu.fpc = 0;
 if (VAR_13) {
  FUNC_7();
  FUNC_1(2, 4);
  if (VAR_15->thread.gs_cb) {
   VAR_16->arch.host_gscb = VAR_15->thread.gs_cb;
   FUNC_13(VAR_16->arch.host_gscb);
  }
  if (VAR_16->arch.gs_enabled) {
   VAR_15->thread.gs_cb = (struct gs_cb *)
      &VAR_16->run->s.regs.gscb;
   FUNC_10(VAR_15->thread.gs_cb);
  }
  FUNC_8();
 }


 VAR_17->kvm_dirty_regs = 0;
}
