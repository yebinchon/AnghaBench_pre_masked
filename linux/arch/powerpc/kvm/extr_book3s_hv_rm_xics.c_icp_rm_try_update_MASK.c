
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


union kvmppc_icp_state {int out_ee; scalar_t__ pending_pri; scalar_t__ cppr; scalar_t__ raw; scalar_t__ xisr; } ;
struct TYPE_6__ {int raw; } ;
struct kvmppc_icp {int vcpu; TYPE_1__ state; } ;
struct TYPE_8__ {TYPE_2__* icp; } ;
struct kvm_vcpu {TYPE_3__ arch; } ;
struct TYPE_9__ {struct kvm_vcpu* kvm_vcpu; } ;
struct TYPE_10__ {TYPE_4__ kvm_hstate; } ;
struct TYPE_7__ {int rm_dbgtgt; union kvmppc_icp_state rm_dbgstate; } ;


 scalar_t__ FUNC_0 (int *,scalar_t__,scalar_t__) ;
 int FUNC_1 (int ,struct kvm_vcpu*) ;
 TYPE_5__* VAR_0 ;

__attribute__((used)) static inline bool FUNC_2(struct kvmppc_icp *VAR_1,
         union kvmppc_icp_state VAR_2,
         union kvmppc_icp_state VAR_3)
{
 struct kvm_vcpu *VAR_4 = VAR_0->kvm_hstate.kvm_vcpu;
 bool VAR_5;


 VAR_3.out_ee = (VAR_3.xisr && (VAR_3.pending_pri < VAR_3.cppr));


 VAR_5 = FUNC_0(&VAR_1->state.raw, VAR_2.raw, VAR_3.raw) == VAR_2.raw;
 if (!VAR_5)
  goto bail;
 if (VAR_3.out_ee)
  FUNC_1(VAR_1->vcpu, VAR_4);


 VAR_4->arch.icp->rm_dbgstate = VAR_3;
 VAR_4->arch.icp->rm_dbgtgt = VAR_1->vcpu;

 bail:
 return VAR_5;
}
