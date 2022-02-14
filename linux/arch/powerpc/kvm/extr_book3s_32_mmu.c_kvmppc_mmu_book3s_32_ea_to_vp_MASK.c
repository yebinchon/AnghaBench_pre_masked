
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct kvmppc_pte {int vpage; } ;
struct kvm_vcpu {int dummy; } ;
typedef int gva_t ;


 int VAR_0 ;
 int FUNC_0 (struct kvm_vcpu*,int,int*) ;
 int FUNC_1 (struct kvm_vcpu*,int,struct kvmppc_pte*,int,int) ;

__attribute__((used)) static u64 FUNC_2(struct kvm_vcpu *VAR_1, gva_t VAR_2,
      bool VAR_3)
{
 u64 VAR_4;
 struct kvmppc_pte VAR_5;

 if (!FUNC_1(VAR_1, VAR_2, &VAR_5, VAR_3, 0))
  return VAR_5.vpage;

 FUNC_0(VAR_1, VAR_2 >> VAR_0, &VAR_4);
 return (((u64)VAR_2 >> 12) & 0xffff) | (VAR_4 << 16);
}
