
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct kvmppc_xics {int dummy; } ;
struct TYPE_7__ {int raw; } ;
struct kvmppc_icp {int rm_action; int rm_eoied_irq; int n_rm_notify_eoi; int rm_resend_icp; int n_rm_check_resend; int rm_kick_target; int n_rm_kick_vcpu; int rm_dbgtgt; TYPE_3__ rm_dbgstate; } ;
struct TYPE_6__ {struct kvmppc_icp* icp; } ;
struct kvm_vcpu {TYPE_4__* kvm; TYPE_2__ arch; } ;
struct TYPE_5__ {struct kvmppc_xics* xics; } ;
struct TYPE_8__ {TYPE_1__ arch; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int ,int,int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct kvmppc_xics*,int ) ;
 int FUNC_2 (TYPE_4__*,int ,int ) ;
 int FUNC_3 (int ) ;

int FUNC_4(struct kvm_vcpu *VAR_4, u32 VAR_5)
{
 struct kvmppc_xics *VAR_6 = VAR_4->kvm->arch.xics;
 struct kvmppc_icp *VAR_7 = VAR_4->arch.icp;

 FUNC_0("XICS_RM: H_%x completing, act: %x state: %lx tgt: %p\n",
   VAR_5, VAR_7->rm_action, VAR_7->rm_dbgstate.raw, VAR_7->rm_dbgtgt);

 if (VAR_7->rm_action & VAR_2) {
  VAR_7->n_rm_kick_vcpu++;
  FUNC_3(VAR_7->rm_kick_target);
 }
 if (VAR_7->rm_action & VAR_1) {
  VAR_7->n_rm_check_resend++;
  FUNC_1(VAR_6, VAR_7->rm_resend_icp);
 }
 if (VAR_7->rm_action & VAR_3) {
  VAR_7->n_rm_notify_eoi++;
  FUNC_2(VAR_4->kvm, 0, VAR_7->rm_eoied_irq);
 }

 VAR_7->rm_action = 0;

 return VAR_0;
}
