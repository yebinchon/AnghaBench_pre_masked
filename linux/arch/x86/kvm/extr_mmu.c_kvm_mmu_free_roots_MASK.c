
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int ulong ;
struct kvm_vcpu {TYPE_2__* kvm; } ;
struct kvm_mmu {scalar_t__ root_hpa; scalar_t__ shadow_root_level; scalar_t__ root_level; scalar_t__* pae_root; scalar_t__ root_cr3; scalar_t__ direct_map; TYPE_1__* prev_roots; } ;
struct TYPE_5__ {int mmu_lock; } ;
struct TYPE_4__ {scalar_t__ hpa; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 int VAR_5 ;
 int FUNC_4 (TYPE_2__*,int *) ;
 int FUNC_5 (TYPE_2__*,scalar_t__*,int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

void FUNC_8(struct kvm_vcpu *VAR_6, struct kvm_mmu *VAR_7,
   ulong VAR_8)
{
 int VAR_9;
 FUNC_2(VAR_5);
 bool VAR_10 = VAR_8 & VAR_3;

 FUNC_0(VAR_2 >= VAR_0);


 if (!(VAR_10 && FUNC_3(VAR_7->root_hpa))) {
  for (VAR_9 = 0; VAR_9 < VAR_2; VAR_9++)
   if ((VAR_8 & FUNC_1(VAR_9)) &&
       FUNC_3(VAR_7->prev_roots[VAR_9].hpa))
    break;

  if (VAR_9 == VAR_2)
   return;
 }

 FUNC_6(&VAR_6->kvm->mmu_lock);

 for (VAR_9 = 0; VAR_9 < VAR_2; VAR_9++)
  if (VAR_8 & FUNC_1(VAR_9))
   FUNC_5(VAR_6->kvm, &VAR_7->prev_roots[VAR_9].hpa,
        &VAR_5);

 if (VAR_10) {
  if (VAR_7->shadow_root_level >= VAR_4 &&
      (VAR_7->root_level >= VAR_4 || VAR_7->direct_map)) {
   FUNC_5(VAR_6->kvm, &VAR_7->root_hpa,
        &VAR_5);
  } else {
   for (VAR_9 = 0; VAR_9 < 4; ++VAR_9)
    if (VAR_7->pae_root[VAR_9] != 0)
     FUNC_5(VAR_6->kvm,
          &VAR_7->pae_root[VAR_9],
          &VAR_5);
   VAR_7->root_hpa = VAR_1;
  }
  VAR_7->root_cr3 = 0;
 }

 FUNC_4(VAR_6->kvm, &VAR_5);
 FUNC_7(&VAR_6->kvm->mmu_lock);
}
