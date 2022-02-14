
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_10__ {TYPE_4__* mmu; } ;
struct kvm_vcpu {TYPE_5__ arch; TYPE_3__* kvm; } ;
struct TYPE_6__ {scalar_t__ level; } ;
struct kvm_mmu_page {TYPE_1__ role; } ;
struct TYPE_9__ {int (* update_pte ) (struct kvm_vcpu*,struct kvm_mmu_page*,int *,void const*) ;} ;
struct TYPE_7__ {int mmu_pte_updated; int mmu_pde_zapped; } ;
struct TYPE_8__ {TYPE_2__ stat; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct kvm_vcpu*,struct kvm_mmu_page*,int *,void const*) ;

__attribute__((used)) static void FUNC_1(struct kvm_vcpu *VAR_1,
      struct kvm_mmu_page *VAR_2, u64 *VAR_3,
      const void *VAR_4)
{
 if (VAR_2->role.level != VAR_0) {
  ++VAR_1->kvm->stat.mmu_pde_zapped;
  return;
        }

 ++VAR_1->kvm->stat.mmu_pte_updated;
 VAR_1->arch.mmu->update_pte(VAR_1, VAR_2, VAR_3, VAR_4);
}
