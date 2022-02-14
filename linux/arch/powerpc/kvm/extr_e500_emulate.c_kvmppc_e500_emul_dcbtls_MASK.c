
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kvmppc_vcpu_e500 {int l1csr0; } ;
struct kvm_vcpu {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct kvmppc_vcpu_e500* FUNC_0 (struct kvm_vcpu*) ;

__attribute__((used)) static int FUNC_1(struct kvm_vcpu *VAR_2)
{
 struct kvmppc_vcpu_e500 *VAR_3 = FUNC_0(VAR_2);


 VAR_3->l1csr0 |= VAR_1;
 return VAR_0;
}
