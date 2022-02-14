
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


union kvmppc_icp_state {unsigned long cppr; unsigned long pending_pri; scalar_t__ xisr; } ;
typedef scalar_t__ u32 ;
struct kvmppc_xics {int real_mode; } ;
struct TYPE_8__ {unsigned long cppr; } ;
struct kvmppc_icp {int n_reject; TYPE_4__ state; int vcpu; } ;
struct TYPE_7__ {struct kvmppc_icp* icp; } ;
struct kvm_vcpu {TYPE_3__ arch; TYPE_2__* kvm; } ;
struct TYPE_5__ {struct kvmppc_xics* xics; } ;
struct TYPE_6__ {TYPE_1__ arch; } ;


 int VAR_0 ;
 int VAR_1 ;
 union kvmppc_icp_state FUNC_0 (TYPE_4__) ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (struct kvmppc_xics*,struct kvmppc_icp*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct kvmppc_xics*,struct kvmppc_icp*,scalar_t__,int) ;
 int FUNC_4 (struct kvmppc_xics*,struct kvmppc_icp*,unsigned long) ;
 int FUNC_5 (struct kvmppc_icp*,union kvmppc_icp_state,union kvmppc_icp_state) ;

int FUNC_6(struct kvm_vcpu *VAR_3, unsigned long VAR_4)
{
 union kvmppc_icp_state VAR_5, VAR_6;
 struct kvmppc_xics *VAR_7 = VAR_3->kvm->arch.xics;
 struct kvmppc_icp *VAR_8 = VAR_3->arch.icp;
 u32 VAR_9;

 if (!VAR_7 || !VAR_7->real_mode)
  return VAR_1;
 if (VAR_4 > VAR_8->state.cppr) {
  FUNC_4(VAR_7, VAR_8, VAR_4);
  goto bail;
 } else if (VAR_4 == VAR_8->state.cppr)
  return VAR_0;
 FUNC_2(VAR_8->vcpu);

 do {
  VAR_5 = VAR_6 = FUNC_0(VAR_8->state);

  VAR_9 = 0;
  VAR_6.cppr = VAR_4;

  if (VAR_4 <= VAR_6.pending_pri) {
   VAR_9 = VAR_6.xisr;
   VAR_6.xisr = 0;
   VAR_6.pending_pri = 0xff;
  }

 } while (!FUNC_5(VAR_8, VAR_5, VAR_6));





 if (VAR_9 && VAR_9 != VAR_2) {
  VAR_8->n_reject++;
  FUNC_3(VAR_7, VAR_8, VAR_9, 0);
 }
 bail:
 return FUNC_1(VAR_7, VAR_8);
}
