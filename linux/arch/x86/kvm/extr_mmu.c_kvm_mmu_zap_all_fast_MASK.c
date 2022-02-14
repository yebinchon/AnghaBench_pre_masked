
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int mmu_valid_gen; } ;
struct kvm {int mmu_lock; TYPE_1__ arch; int slots_lock; } ;


 int FUNC_0 (struct kvm*) ;
 int FUNC_1 (struct kvm*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct kvm*) ;

__attribute__((used)) static void FUNC_6(struct kvm *VAR_0)
{
 FUNC_2(&VAR_0->slots_lock);

 FUNC_3(&VAR_0->mmu_lock);
 FUNC_5(VAR_0);
 VAR_0->arch.mmu_valid_gen = VAR_0->arch.mmu_valid_gen ? 0 : 1;
 FUNC_0(VAR_0);

 FUNC_1(VAR_0);
 FUNC_4(&VAR_0->mmu_lock);
}
