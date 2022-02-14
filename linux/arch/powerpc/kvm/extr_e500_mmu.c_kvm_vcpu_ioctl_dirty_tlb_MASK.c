
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kvmppc_vcpu_e500 {int dummy; } ;
struct kvm_vcpu {int dummy; } ;
struct kvm_dirty_tlb {int dummy; } ;


 int FUNC_0 (struct kvm_vcpu*) ;
 int FUNC_1 (struct kvmppc_vcpu_e500*) ;
 struct kvmppc_vcpu_e500* FUNC_2 (struct kvm_vcpu*) ;

int FUNC_3(struct kvm_vcpu *VAR_0,
        struct kvm_dirty_tlb *VAR_1)
{
 struct kvmppc_vcpu_e500 *VAR_2 = FUNC_2(VAR_0);
 FUNC_1(VAR_2);
 FUNC_0(VAR_0);
 return 0;
}
