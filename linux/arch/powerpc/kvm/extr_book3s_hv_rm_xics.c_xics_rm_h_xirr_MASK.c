
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


union kvmppc_icp_state {int xisr; int cppr; int pending_pri; } ;
typedef int u32 ;
struct kvmppc_xics {int real_mode; } ;
struct kvmppc_icp {int state; int vcpu; } ;
struct TYPE_7__ {int* gpr; } ;
struct TYPE_8__ {TYPE_3__ regs; struct kvmppc_icp* icp; } ;
struct kvm_vcpu {TYPE_4__ arch; TYPE_2__* kvm; } ;
struct TYPE_5__ {struct kvmppc_xics* xics; } ;
struct TYPE_6__ {TYPE_1__ arch; } ;


 unsigned long VAR_0 ;
 union kvmppc_icp_state FUNC_0 (int ) ;
 unsigned long FUNC_1 (struct kvmppc_xics*,struct kvmppc_icp*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct kvmppc_icp*,union kvmppc_icp_state,union kvmppc_icp_state) ;

unsigned long FUNC_4(struct kvm_vcpu *VAR_1)
{
 union kvmppc_icp_state VAR_2, VAR_3;
 struct kvmppc_xics *VAR_4 = VAR_1->kvm->arch.xics;
 struct kvmppc_icp *VAR_5 = VAR_1->arch.icp;
 u32 VAR_6;

 if (!VAR_4 || !VAR_4->real_mode)
  return VAR_0;


 FUNC_2(VAR_5->vcpu);
 do {
  VAR_2 = VAR_3 = FUNC_0(VAR_5->state);

  VAR_6 = VAR_2.xisr | (((u32)VAR_2.cppr) << 24);
  if (!VAR_2.xisr)
   break;
  VAR_3.cppr = VAR_3.pending_pri;
  VAR_3.pending_pri = 0xff;
  VAR_3.xisr = 0;

 } while (!FUNC_3(VAR_5, VAR_2, VAR_3));


 VAR_1->arch.regs.gpr[4] = VAR_6;

 return FUNC_1(VAR_4, VAR_5);
}
