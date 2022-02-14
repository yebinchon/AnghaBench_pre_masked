
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct kvmppc_slb {int dummy; } ;
struct kvm_vcpu {int dummy; } ;
typedef int gva_t ;


 struct kvmppc_slb* FUNC_0 (struct kvm_vcpu*,int ) ;
 int FUNC_1 (struct kvmppc_slb*,int ) ;

__attribute__((used)) static u64 FUNC_2(struct kvm_vcpu *VAR_0, gva_t VAR_1,
      bool VAR_2)
{
 struct kvmppc_slb *VAR_3;

 VAR_3 = FUNC_0(VAR_0, VAR_1);
 if (!VAR_3)
  return 0;

 return FUNC_1(VAR_3, VAR_1);
}
