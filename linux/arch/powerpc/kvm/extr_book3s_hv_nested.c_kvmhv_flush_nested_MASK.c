
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kvm_nested_guest {scalar_t__ l1_gr_to_hr; int shadow_lpid; int shadow_pgtable; struct kvm* l1_host; } ;
struct kvm {int mmu_lock; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct kvm_nested_guest*) ;
 int FUNC_2 (struct kvm_nested_guest*) ;
 int FUNC_3 (struct kvm*,int ,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(struct kvm_nested_guest *VAR_0)
{
 struct kvm *VAR_1 = VAR_0->l1_host;

 FUNC_4(&VAR_1->mmu_lock);
 FUNC_3(VAR_1, VAR_0->shadow_pgtable, VAR_0->shadow_lpid);
 FUNC_5(&VAR_1->mmu_lock);
 FUNC_0(VAR_0->shadow_lpid);
 FUNC_2(VAR_0);
 if (VAR_0->l1_gr_to_hr == 0)
  FUNC_1(VAR_0);
}
