
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct kvm_nested_guest {int l1_lpid; long refcnt; struct kvm* l1_host; } ;
struct TYPE_2__ {int max_nested_lpid; struct kvm_nested_guest** nested_guests; } ;
struct kvm {int mmu_lock; TYPE_1__ arch; } ;


 int FUNC_0 (struct kvm_nested_guest*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct kvm_nested_guest *VAR_0)
{
 struct kvm *VAR_1 = VAR_0->l1_host;
 int VAR_2 = VAR_0->l1_lpid;
 long VAR_3;

 FUNC_1(&VAR_1->mmu_lock);
 if (VAR_0 == VAR_1->arch.nested_guests[VAR_2]) {
  VAR_1->arch.nested_guests[VAR_2] = ((void*)0);
  if (VAR_2 == VAR_1->arch.max_nested_lpid) {
   while (--VAR_2 >= 0 && !VAR_1->arch.nested_guests[VAR_2])
    ;
   VAR_1->arch.max_nested_lpid = VAR_2;
  }
  --VAR_0->refcnt;
 }
 VAR_3 = VAR_0->refcnt;
 FUNC_2(&VAR_1->mmu_lock);
 if (VAR_3 == 0)
  FUNC_0(VAR_0);
}
