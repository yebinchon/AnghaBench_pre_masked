
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct kvm_nested_guest {int refcnt; } ;
struct TYPE_2__ {int l1_ptcr; int max_nested_lpid; struct kvm_nested_guest** nested_guests; } ;
struct kvm {int mmu_lock; TYPE_1__ arch; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct kvm_nested_guest* FUNC_0 (struct kvm*,int) ;
 int FUNC_1 (struct kvm_nested_guest*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

struct kvm_nested_guest *FUNC_4(struct kvm *VAR_2, int VAR_3,
       bool VAR_4)
{
 struct kvm_nested_guest *VAR_5, *VAR_6;

 if (VAR_3 >= VAR_0 ||
     VAR_3 >= (1ul << ((VAR_2->arch.l1_ptcr & VAR_1) + 12 - 4)))
  return ((void*)0);

 FUNC_2(&VAR_2->mmu_lock);
 VAR_5 = VAR_2->arch.nested_guests[VAR_3];
 if (VAR_5)
  ++VAR_5->refcnt;
 FUNC_3(&VAR_2->mmu_lock);

 if (VAR_5 || !VAR_4)
  return VAR_5;

 VAR_6 = FUNC_0(VAR_2, VAR_3);
 if (!VAR_6)
  return ((void*)0);
 FUNC_2(&VAR_2->mmu_lock);
 if (VAR_2->arch.nested_guests[VAR_3]) {

  VAR_5 = VAR_2->arch.nested_guests[VAR_3];
 } else {
  VAR_2->arch.nested_guests[VAR_3] = VAR_6;
  ++VAR_6->refcnt;
  VAR_5 = VAR_6;
  VAR_6 = ((void*)0);
  if (VAR_3 > VAR_2->arch.max_nested_lpid)
   VAR_2->arch.max_nested_lpid = VAR_3;
 }
 ++VAR_5->refcnt;
 FUNC_3(&VAR_2->mmu_lock);

 if (VAR_6)
  FUNC_1(VAR_6);

 return VAR_5;
}
