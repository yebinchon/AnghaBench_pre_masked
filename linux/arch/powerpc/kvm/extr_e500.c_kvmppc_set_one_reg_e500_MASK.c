
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union kvmppc_one_reg {int dummy; } kvmppc_one_reg ;
typedef int u64 ;
struct kvm_vcpu {int dummy; } ;


 int FUNC_0 (struct kvm_vcpu*,int ,union kvmppc_one_reg*) ;

__attribute__((used)) static int FUNC_1(struct kvm_vcpu *VAR_0, u64 VAR_1,
       union kvmppc_one_reg *VAR_2)
{
 int VAR_3 = FUNC_0(VAR_0, VAR_1, VAR_2);
 return VAR_3;
}
