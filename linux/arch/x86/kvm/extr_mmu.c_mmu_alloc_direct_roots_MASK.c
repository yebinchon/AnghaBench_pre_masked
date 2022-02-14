
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {TYPE_2__* mmu; } ;
struct kvm_vcpu {TYPE_3__ arch; TYPE_1__* kvm; } ;
struct kvm_mmu_page {int* spt; int root_count; } ;
typedef int hpa_t ;
struct TYPE_5__ {scalar_t__ shadow_root_level; int* pae_root; int (* get_cr3 ) (struct kvm_vcpu*) ;int root_cr3; void* root_hpa; } ;
struct TYPE_4__ {int mmu_lock; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (int) ;
 void* FUNC_3 (int*) ;
 struct kvm_mmu_page* FUNC_4 (struct kvm_vcpu*,unsigned int,unsigned int,scalar_t__,int,int ) ;
 scalar_t__ FUNC_5 (struct kvm_vcpu*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct kvm_vcpu*) ;

__attribute__((used)) static int FUNC_9(struct kvm_vcpu *VAR_7)
{
 struct kvm_mmu_page *VAR_8;
 unsigned VAR_9;

 if (VAR_7->arch.mmu->shadow_root_level >= VAR_5) {
  FUNC_6(&VAR_7->kvm->mmu_lock);
  if(FUNC_5(VAR_7) < 0) {
   FUNC_7(&VAR_7->kvm->mmu_lock);
   return -VAR_1;
  }
  VAR_8 = FUNC_4(VAR_7, 0, 0,
    VAR_7->arch.mmu->shadow_root_level, 1, VAR_0);
  ++VAR_8->root_count;
  FUNC_7(&VAR_7->kvm->mmu_lock);
  VAR_7->arch.mmu->root_hpa = FUNC_3(VAR_8->spt);
 } else if (VAR_7->arch.mmu->shadow_root_level == VAR_3) {
  for (VAR_9 = 0; VAR_9 < 4; ++VAR_9) {
   hpa_t VAR_10 = VAR_7->arch.mmu->pae_root[VAR_9];

   FUNC_1(FUNC_2(VAR_10));
   FUNC_6(&VAR_7->kvm->mmu_lock);
   if (FUNC_5(VAR_7) < 0) {
    FUNC_7(&VAR_7->kvm->mmu_lock);
    return -VAR_1;
   }
   VAR_8 = FUNC_4(VAR_7, VAR_9 << (30 - VAR_2),
     VAR_9 << 30, VAR_4, 1, VAR_0);
   VAR_10 = FUNC_3(VAR_8->spt);
   ++VAR_8->root_count;
   FUNC_7(&VAR_7->kvm->mmu_lock);
   VAR_7->arch.mmu->pae_root[VAR_9] = VAR_10 | VAR_6;
  }
  VAR_7->arch.mmu->root_hpa = FUNC_3(VAR_7->arch.mmu->pae_root);
 } else
  FUNC_0();
 VAR_7->arch.mmu->root_cr3 = VAR_7->arch.mmu->get_cr3(VAR_7);

 return 0;
}
