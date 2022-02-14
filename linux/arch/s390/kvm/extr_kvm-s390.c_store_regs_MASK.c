
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


struct TYPE_24__ {int regs; int fpc; } ;
struct TYPE_14__ {int * host_gscb; scalar_t__ gs_enabled; TYPE_9__ host_fpregs; int host_acrs; TYPE_4__* sie_block; int pfault_compare; int pfault_select; int pfault_token; } ;
struct kvm_vcpu {TYPE_11__ arch; TYPE_7__* run; } ;
struct TYPE_17__ {int bpbc; int pfc; int pfs; int pft; int gbea; int pp; int todpr; int ckc; int cputm; int crs; int prefix; } ;
struct TYPE_18__ {TYPE_2__ regs; } ;
struct kvm_run {TYPE_3__ s; int psw_addr; int psw_mask; } ;
struct TYPE_23__ {int regs; int fpc; } ;
struct TYPE_20__ {int fpc; int acrs; } ;
struct TYPE_21__ {TYPE_5__ regs; } ;
struct TYPE_22__ {TYPE_6__ s; } ;
struct TYPE_16__ {int addr; int mask; } ;
struct TYPE_19__ {int fpf; int gbea; int pp; int todpr; int ckc; int gcr; TYPE_1__ gpsw; } ;
struct TYPE_13__ {int * gs_cb; TYPE_8__ fpu; } ;
struct TYPE_15__ {TYPE_10__ thread; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (int,int) ;
 TYPE_12__* VAR_2 ;
 int FUNC_2 (struct kvm_vcpu*) ;
 int FUNC_3 (struct kvm_vcpu*) ;
 int FUNC_4 (int *,int *,int) ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int ) ;
 int FUNC_10 () ;
 int FUNC_11 (int *) ;

__attribute__((used)) static void FUNC_12(struct kvm_vcpu *VAR_3, struct kvm_run *VAR_4)
{
 VAR_4->psw_mask = VAR_3->arch.sie_block->gpsw.mask;
 VAR_4->psw_addr = VAR_3->arch.sie_block->gpsw.addr;
 VAR_4->s.regs.prefix = FUNC_3(VAR_3);
 FUNC_4(&VAR_4->s.regs.crs, &VAR_3->arch.sie_block->gcr, 128);
 VAR_4->s.regs.cputm = FUNC_2(VAR_3);
 VAR_4->s.regs.ckc = VAR_3->arch.sie_block->ckc;
 VAR_4->s.regs.todpr = VAR_3->arch.sie_block->todpr;
 VAR_4->s.regs.pp = VAR_3->arch.sie_block->pp;
 VAR_4->s.regs.gbea = VAR_3->arch.sie_block->gbea;
 VAR_4->s.regs.pft = VAR_3->arch.pfault_token;
 VAR_4->s.regs.pfs = VAR_3->arch.pfault_select;
 VAR_4->s.regs.pfc = VAR_3->arch.pfault_compare;
 VAR_4->s.regs.bpbc = (VAR_3->arch.sie_block->fpf & VAR_0) == VAR_0;
 FUNC_9(VAR_3->run->s.regs.acrs);
 FUNC_7(VAR_3->arch.host_acrs);

 FUNC_10();
 VAR_3->run->s.regs.fpc = VAR_2->thread.fpu.fpc;

 VAR_2->thread.fpu.fpc = VAR_3->arch.host_fpregs.fpc;
 VAR_2->thread.fpu.regs = VAR_3->arch.host_fpregs.regs;
 if (VAR_1) {
  FUNC_1(2, 4);
  if (VAR_3->arch.gs_enabled)
   FUNC_11(VAR_2->thread.gs_cb);
  FUNC_5();
  VAR_2->thread.gs_cb = VAR_3->arch.host_gscb;
  FUNC_8(VAR_3->arch.host_gscb);
  FUNC_6();
  if (!VAR_3->arch.host_gscb)
   FUNC_0(2, 4);
  VAR_3->arch.host_gscb = ((void*)0);
 }

}
