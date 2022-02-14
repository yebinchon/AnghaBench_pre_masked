
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int word; } ;
union kvm_mmu_role {scalar_t__ as_u64; TYPE_2__ base; } ;
struct TYPE_5__ {struct kvm_mmu* mmu; } ;
struct kvm_vcpu {TYPE_1__ arch; } ;
struct TYPE_7__ {scalar_t__ as_u64; } ;
struct kvm_mmu {TYPE_3__ mmu_role; } ;
struct TYPE_8__ {int word; } ;


 scalar_t__ FUNC_0 (struct kvm_vcpu*) ;
 scalar_t__ FUNC_1 (struct kvm_vcpu*) ;
 int FUNC_2 (struct kvm_vcpu*) ;
 union kvm_mmu_role FUNC_3 (struct kvm_vcpu*,int) ;
 TYPE_4__ VAR_0 ;
 int FUNC_4 (struct kvm_vcpu*,struct kvm_mmu*) ;
 int FUNC_5 (struct kvm_vcpu*,struct kvm_mmu*) ;
 int FUNC_6 (struct kvm_vcpu*,struct kvm_mmu*) ;
 int FUNC_7 (struct kvm_vcpu*,struct kvm_mmu*) ;
 int FUNC_8 (struct kvm_vcpu*,struct kvm_mmu*) ;

void FUNC_9(struct kvm_vcpu *VAR_1)
{
 struct kvm_mmu *VAR_2 = VAR_1->arch.mmu;
 union kvm_mmu_role VAR_3 =
  FUNC_3(VAR_1, 0);

 VAR_3.base.word &= VAR_0.word;
 if (VAR_3.as_u64 == VAR_2->mmu_role.as_u64)
  return;

 if (!FUNC_2(VAR_1))
  FUNC_4(VAR_1, VAR_2);
 else if (FUNC_0(VAR_1))
  FUNC_7(VAR_1, VAR_2);
 else if (FUNC_1(VAR_1))
  FUNC_5(VAR_1, VAR_2);
 else
  FUNC_6(VAR_1, VAR_2);

 VAR_2->mmu_role.as_u64 = VAR_3.as_u64;
 FUNC_8(VAR_1, VAR_2);
}
