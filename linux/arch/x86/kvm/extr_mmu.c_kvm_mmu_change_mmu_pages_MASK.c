
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned long n_used_mmu_pages; unsigned long n_max_mmu_pages; } ;
struct kvm {int mmu_lock; TYPE_1__ arch; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (struct kvm*,int *) ;
 int FUNC_2 (struct kvm*,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

void FUNC_5(struct kvm *VAR_1, unsigned long VAR_2)
{
 FUNC_0(VAR_0);

 FUNC_3(&VAR_1->mmu_lock);

 if (VAR_1->arch.n_used_mmu_pages > VAR_2) {

  while (VAR_1->arch.n_used_mmu_pages > VAR_2)
   if (!FUNC_2(VAR_1, &VAR_0))
    break;

  FUNC_1(VAR_1, &VAR_0);
  VAR_2 = VAR_1->arch.n_used_mmu_pages;
 }

 VAR_1->arch.n_max_mmu_pages = VAR_2;

 FUNC_4(&VAR_1->mmu_lock);
}
