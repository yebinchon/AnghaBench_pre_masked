
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {TYPE_2__* mmu; } ;
struct kvm_vcpu {TYPE_1__ arch; } ;
struct kvm_mmu_page {int dummy; } ;
typedef int inspect_spte_fn ;
typedef int hpa_t ;
struct TYPE_4__ {int root_level; int * pae_root; int root_hpa; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct kvm_vcpu*,struct kvm_mmu_page*,int ,int) ;
 struct kvm_mmu_page* FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct kvm_vcpu *VAR_2, inspect_spte_fn VAR_3)
{
 int VAR_4;
 struct kvm_mmu_page *VAR_5;

 if (!FUNC_0(VAR_2->arch.mmu->root_hpa))
  return;

 if (VAR_2->arch.mmu->root_level >= VAR_1) {
  hpa_t VAR_6 = VAR_2->arch.mmu->root_hpa;

  VAR_5 = FUNC_2(VAR_6);
  FUNC_1(VAR_2, VAR_5, VAR_3, VAR_2->arch.mmu->root_level);
  return;
 }

 for (VAR_4 = 0; VAR_4 < 4; ++VAR_4) {
  hpa_t VAR_7 = VAR_2->arch.mmu->pae_root[VAR_4];

  if (VAR_7 && FUNC_0(VAR_7)) {
   VAR_7 &= VAR_0;
   VAR_5 = FUNC_2(VAR_7);
   FUNC_1(VAR_2, VAR_5, VAR_3, 2);
  }
 }

 return;
}
