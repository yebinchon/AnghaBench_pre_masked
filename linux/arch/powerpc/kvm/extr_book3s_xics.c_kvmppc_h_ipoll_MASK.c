
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


union kvmppc_icp_state {int xisr; int mfrr; scalar_t__ cppr; } ;
typedef int u32 ;
struct kvmppc_icp {unsigned long server_num; int state; } ;
struct TYPE_2__ {struct kvmppc_icp* icp; } ;
struct kvm_vcpu {int kvm; TYPE_1__ arch; } ;


 int VAR_0 ;
 int VAR_1 ;
 union kvmppc_icp_state FUNC_0 (int ) ;
 int FUNC_1 (struct kvm_vcpu*,int,int) ;
 struct kvmppc_icp* FUNC_2 (int ,unsigned long) ;

__attribute__((used)) static int FUNC_3(struct kvm_vcpu *VAR_2, unsigned long VAR_3)
{
 union kvmppc_icp_state VAR_4;
 struct kvmppc_icp *VAR_5;

 VAR_5 = VAR_2->arch.icp;
 if (VAR_5->server_num != VAR_3) {
  VAR_5 = FUNC_2(VAR_2->kvm, VAR_3);
  if (!VAR_5)
   return VAR_0;
 }
 VAR_4 = FUNC_0(VAR_5->state);
 FUNC_1(VAR_2, 4, ((u32)VAR_4.cppr << 24) | VAR_4.xisr);
 FUNC_1(VAR_2, 5, VAR_4.mfrr);
 return VAR_1;
}
