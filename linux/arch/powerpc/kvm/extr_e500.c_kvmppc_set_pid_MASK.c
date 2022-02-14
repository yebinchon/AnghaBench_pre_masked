
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct kvmppc_vcpu_e500 {scalar_t__* pid; } ;
struct TYPE_2__ {scalar_t__ pid; } ;
struct kvm_vcpu {TYPE_1__ arch; } ;


 int FUNC_0 (struct kvmppc_vcpu_e500*) ;
 struct kvmppc_vcpu_e500* FUNC_1 (struct kvm_vcpu*) ;

void FUNC_2(struct kvm_vcpu *VAR_0, u32 VAR_1)
{
 struct kvmppc_vcpu_e500 *VAR_2 = FUNC_1(VAR_0);

 if (VAR_0->arch.pid != VAR_1) {
  VAR_2->pid[0] = VAR_0->arch.pid = VAR_1;
  FUNC_0(VAR_2);
 }
}
