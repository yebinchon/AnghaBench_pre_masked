
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct kvmppc_book3s_shadow_vcpu {TYPE_1__* slb; scalar_t__ slb_max; } ;
struct kvm_vcpu {int dummy; } ;
struct TYPE_2__ {scalar_t__ esid; } ;


 struct kvmppc_book3s_shadow_vcpu* FUNC_0 (struct kvm_vcpu*) ;
 int FUNC_1 (struct kvmppc_book3s_shadow_vcpu*) ;

void FUNC_2(struct kvm_vcpu *VAR_0)
{
 struct kvmppc_book3s_shadow_vcpu *VAR_1 = FUNC_0(VAR_0);
 VAR_1->slb_max = 0;
 VAR_1->slb[0].esid = 0;
 FUNC_1(VAR_1);
}
