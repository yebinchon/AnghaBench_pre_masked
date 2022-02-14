
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union kvm_mmu_page_role {int dummy; } kvm_mmu_page_role ;
union kvm_mmu_role {union kvm_mmu_page_role base; } ;
struct kvm_vcpu {int dummy; } ;


 union kvm_mmu_role FUNC_0 (struct kvm_vcpu*,int) ;
 union kvm_mmu_role FUNC_1 (struct kvm_vcpu*,int) ;
 scalar_t__ VAR_0 ;

__attribute__((used)) static union kvm_mmu_page_role
FUNC_2(struct kvm_vcpu *VAR_1)
{
 union kvm_mmu_role VAR_2;

 if (VAR_0)
  VAR_2 = FUNC_1(VAR_1, 1);
 else
  VAR_2 = FUNC_0(VAR_1, 1);

 return VAR_2.base;
}
