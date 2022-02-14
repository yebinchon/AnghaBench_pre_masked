
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef union kvm_mmu_page_role {int dummy; } kvm_mmu_page_role ;
struct TYPE_2__ {int mmu; } ;
struct kvm_vcpu {TYPE_1__ arch; } ;
typedef int gpa_t ;


 int VAR_0 ;
 int FUNC_0 (struct kvm_vcpu*,int ,union kvm_mmu_page_role,int) ;
 int FUNC_1 (struct kvm_vcpu*,int ,int ) ;

__attribute__((used)) static void FUNC_2(struct kvm_vcpu *VAR_1, gpa_t VAR_2,
         union kvm_mmu_page_role VAR_3,
         bool VAR_4)
{
 if (!FUNC_0(VAR_1, VAR_2, VAR_3, VAR_4))
  FUNC_1(VAR_1, VAR_1->arch.mmu,
       VAR_0);
}
