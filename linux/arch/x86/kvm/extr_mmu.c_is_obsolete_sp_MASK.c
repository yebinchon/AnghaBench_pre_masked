
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ invalid; } ;
struct kvm_mmu_page {scalar_t__ mmu_valid_gen; TYPE_1__ role; } ;
struct TYPE_4__ {scalar_t__ mmu_valid_gen; } ;
struct kvm {TYPE_2__ arch; } ;


 scalar_t__ FUNC_0 (int) ;

__attribute__((used)) static bool FUNC_1(struct kvm *VAR_0, struct kvm_mmu_page *VAR_1)
{
 return VAR_1->role.invalid ||
        FUNC_0(VAR_1->mmu_valid_gen != VAR_0->arch.mmu_valid_gen);
}
