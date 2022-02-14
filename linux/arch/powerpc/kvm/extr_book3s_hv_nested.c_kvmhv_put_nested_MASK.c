
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kvm_nested_guest {long refcnt; struct kvm* l1_host; } ;
struct kvm {int mmu_lock; } ;


 int FUNC_0 (struct kvm_nested_guest*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

void FUNC_3(struct kvm_nested_guest *VAR_0)
{
 struct kvm *VAR_1 = VAR_0->l1_host;
 long VAR_2;

 FUNC_1(&VAR_1->mmu_lock);
 VAR_2 = --VAR_0->refcnt;
 FUNC_2(&VAR_1->mmu_lock);
 if (VAR_2 == 0)
  FUNC_0(VAR_0);
}
