
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct kvmppc_vcore {int first_vcpuid; int dpdes; } ;
struct TYPE_2__ {struct kvmppc_vcore* vcore; scalar_t__ doorbell_request; } ;
struct kvm_vcpu {int vcpu_id; TYPE_1__ arch; } ;


 int FUNC_0 () ;

__attribute__((used)) static bool FUNC_1(struct kvm_vcpu *VAR_0)
{
 int VAR_1;
 struct kvmppc_vcore *VAR_2;

 if (VAR_0->arch.doorbell_request)
  return 1;





 FUNC_0();
 VAR_2 = VAR_0->arch.vcore;
 VAR_1 = VAR_0->vcpu_id - VAR_2->first_vcpuid;
 return !!(VAR_2->dpdes & (1 << VAR_1));
}
