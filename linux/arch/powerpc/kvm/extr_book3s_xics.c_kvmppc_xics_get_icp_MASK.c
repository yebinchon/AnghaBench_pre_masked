
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


union kvmppc_icp_state {scalar_t__ pending_pri; scalar_t__ mfrr; scalar_t__ xisr; scalar_t__ cppr; } ;
typedef int u64 ;
struct kvmppc_icp {union kvmppc_icp_state state; } ;
struct TYPE_2__ {struct kvmppc_icp* icp; } ;
struct kvm_vcpu {TYPE_1__ arch; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

u64 FUNC_0(struct kvm_vcpu *VAR_4)
{
 struct kvmppc_icp *VAR_5 = VAR_4->arch.icp;
 union kvmppc_icp_state VAR_6;

 if (!VAR_5)
  return 0;
 VAR_6 = VAR_5->state;
 return ((u64)VAR_6.cppr << VAR_0) |
  ((u64)VAR_6.xisr << VAR_3) |
  ((u64)VAR_6.mfrr << VAR_1) |
  ((u64)VAR_6.pending_pri << VAR_2);
}
