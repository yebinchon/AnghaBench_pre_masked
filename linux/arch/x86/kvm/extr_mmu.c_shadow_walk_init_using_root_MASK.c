
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_4__ {TYPE_1__* mmu; } ;
struct kvm_vcpu {TYPE_2__ arch; } ;
struct kvm_shadow_walk_iterator {int addr; scalar_t__ level; scalar_t__ shadow_addr; } ;
typedef scalar_t__ hpa_t ;
struct TYPE_3__ {scalar_t__ shadow_root_level; scalar_t__ root_level; scalar_t__ root_hpa; scalar_t__* pae_root; int direct_map; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static void FUNC_1(struct kvm_shadow_walk_iterator *VAR_3,
     struct kvm_vcpu *VAR_4, hpa_t VAR_5,
     u64 VAR_6)
{
 VAR_3->addr = VAR_6;
 VAR_3->shadow_addr = VAR_5;
 VAR_3->level = VAR_4->arch.mmu->shadow_root_level;

 if (VAR_3->level == VAR_2 &&
     VAR_4->arch.mmu->root_level < VAR_2 &&
     !VAR_4->arch.mmu->direct_map)
  --VAR_3->level;

 if (VAR_3->level == VAR_0) {




  FUNC_0(VAR_5 != VAR_4->arch.mmu->root_hpa);

  VAR_3->shadow_addr
   = VAR_4->arch.mmu->pae_root[(VAR_6 >> 30) & 3];
  VAR_3->shadow_addr &= VAR_1;
  --VAR_3->level;
  if (!VAR_3->shadow_addr)
   VAR_3->level = 0;
 }
}
