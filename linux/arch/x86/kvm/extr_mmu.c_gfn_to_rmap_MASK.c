
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct kvm_rmap_head {int dummy; } ;
struct TYPE_2__ {int level; } ;
struct kvm_mmu_page {TYPE_1__ role; } ;
struct kvm_memslots {int dummy; } ;
struct kvm_memory_slot {int dummy; } ;
struct kvm {int dummy; } ;
typedef int gfn_t ;


 struct kvm_memory_slot* FUNC_0 (struct kvm_memslots*,int ) ;
 struct kvm_rmap_head* FUNC_1 (int ,int ,struct kvm_memory_slot*) ;
 struct kvm_memslots* FUNC_2 (struct kvm*,TYPE_1__) ;

__attribute__((used)) static struct kvm_rmap_head *FUNC_3(struct kvm *VAR_0, gfn_t VAR_1,
      struct kvm_mmu_page *VAR_2)
{
 struct kvm_memslots *VAR_3;
 struct kvm_memory_slot *VAR_4;

 VAR_3 = FUNC_2(VAR_0, VAR_2->role);
 VAR_4 = FUNC_0(VAR_3, VAR_1);
 return FUNC_1(VAR_1, VAR_2->role.level, VAR_4);
}
