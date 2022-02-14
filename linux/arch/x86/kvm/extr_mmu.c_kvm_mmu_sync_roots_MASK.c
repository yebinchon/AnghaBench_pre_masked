
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* mmu; } ;
struct kvm_vcpu {TYPE_3__* kvm; TYPE_2__ arch; } ;
struct kvm_mmu_page {int unsync_children; int unsync; } ;
typedef int hpa_t ;
struct TYPE_6__ {int mmu_lock; } ;
struct TYPE_4__ {scalar_t__ root_level; int * pae_root; int root_hpa; scalar_t__ direct_map; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct kvm_vcpu*,int ) ;
 int FUNC_2 (struct kvm_vcpu*,struct kvm_mmu_page*) ;
 struct kvm_mmu_page* FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct kvm_vcpu*,int ) ;

void FUNC_8(struct kvm_vcpu *VAR_5)
{
 int VAR_6;
 struct kvm_mmu_page *VAR_7;

 if (VAR_5->arch.mmu->direct_map)
  return;

 if (!FUNC_0(VAR_5->arch.mmu->root_hpa))
  return;

 FUNC_7(VAR_5, VAR_2);

 if (VAR_5->arch.mmu->root_level >= VAR_4) {
  hpa_t VAR_8 = VAR_5->arch.mmu->root_hpa;
  VAR_7 = FUNC_3(VAR_8);
  if (!FUNC_4(&VAR_7->unsync) &&
      !FUNC_4(&VAR_7->unsync_children))
   return;

  FUNC_5(&VAR_5->kvm->mmu_lock);
  FUNC_1(VAR_5, VAR_1);

  FUNC_2(VAR_5, VAR_7);

  FUNC_1(VAR_5, VAR_0);
  FUNC_6(&VAR_5->kvm->mmu_lock);
  return;
 }

 FUNC_5(&VAR_5->kvm->mmu_lock);
 FUNC_1(VAR_5, VAR_1);

 for (VAR_6 = 0; VAR_6 < 4; ++VAR_6) {
  hpa_t VAR_9 = VAR_5->arch.mmu->pae_root[VAR_6];

  if (VAR_9 && FUNC_0(VAR_9)) {
   VAR_9 &= VAR_3;
   VAR_7 = FUNC_3(VAR_9);
   FUNC_2(VAR_5, VAR_7);
  }
 }

 FUNC_1(VAR_5, VAR_0);
 FUNC_6(&VAR_5->kvm->mmu_lock);
}
