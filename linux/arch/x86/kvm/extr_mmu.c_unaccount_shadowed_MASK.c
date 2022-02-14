
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ level; } ;
struct kvm_mmu_page {TYPE_2__ role; int gfn; } ;
struct kvm_memslots {int dummy; } ;
struct kvm_memory_slot {int dummy; } ;
struct TYPE_3__ {int indirect_shadow_pages; } ;
struct kvm {TYPE_1__ arch; } ;
typedef int gfn_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 struct kvm_memory_slot* FUNC_0 (struct kvm_memslots*,int ) ;
 struct kvm_memslots* FUNC_1 (struct kvm*,TYPE_2__) ;
 int FUNC_2 (struct kvm_memory_slot*,int ) ;
 void FUNC_3 (struct kvm*,struct kvm_memory_slot*,int ,int ) ;

__attribute__((used)) static void FUNC_4(struct kvm *VAR_2, struct kvm_mmu_page *VAR_3)
{
 struct kvm_memslots *VAR_4;
 struct kvm_memory_slot *VAR_5;
 gfn_t VAR_6;

 VAR_2->arch.indirect_shadow_pages--;
 VAR_6 = VAR_3->gfn;
 VAR_4 = FUNC_1(VAR_2, VAR_3->role);
 VAR_5 = FUNC_0(VAR_4, VAR_6);
 if (VAR_3->role.level > VAR_1)
  return FUNC_3(VAR_2, VAR_5, VAR_6,
             VAR_0);

 FUNC_2(VAR_5, VAR_6);
}
