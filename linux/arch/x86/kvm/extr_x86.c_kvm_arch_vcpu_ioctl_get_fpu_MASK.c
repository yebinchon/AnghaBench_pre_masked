
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {TYPE_2__* guest_fpu; } ;
struct kvm_vcpu {TYPE_3__ arch; } ;
struct kvm_fpu {int xmm; int last_dp; int last_ip; int last_opcode; int ftwx; int fsw; int fcw; int fpr; } ;
struct fxregs_state {int xmm_space; int rdp; int rip; int fop; int twd; int swd; int cwd; int st_space; } ;
struct TYPE_4__ {struct fxregs_state fxsave; } ;
struct TYPE_5__ {TYPE_1__ state; } ;


 int FUNC_0 (int ,int ,int) ;
 int FUNC_1 (struct kvm_vcpu*) ;
 int FUNC_2 (struct kvm_vcpu*) ;

int FUNC_3(struct kvm_vcpu *VAR_0, struct kvm_fpu *VAR_1)
{
 struct fxregs_state *VAR_2;

 FUNC_1(VAR_0);

 VAR_2 = &VAR_0->arch.guest_fpu->state.fxsave;
 FUNC_0(VAR_1->fpr, VAR_2->st_space, 128);
 VAR_1->fcw = VAR_2->cwd;
 VAR_1->fsw = VAR_2->swd;
 VAR_1->ftwx = VAR_2->twd;
 VAR_1->last_opcode = VAR_2->fop;
 VAR_1->last_ip = VAR_2->rip;
 VAR_1->last_dp = VAR_2->rdp;
 FUNC_0(VAR_1->xmm, VAR_2->xmm_space, sizeof(VAR_2->xmm_space));

 FUNC_2(VAR_0);
 return 0;
}
