
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct kvm_hpt_info {int dummy; } ;
struct kvm_resize_hpt {struct kvm_hpt_info hpt; struct kvm* kvm; } ;
struct TYPE_2__ {struct kvm_hpt_info hpt; } ;
struct kvm {int srcu; int mmu_lock; TYPE_1__ arch; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct kvm*,struct kvm_hpt_info*) ;
 int FUNC_2 (struct kvm*) ;
 int FUNC_3 (struct kvm_resize_hpt*,char*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static void FUNC_7(struct kvm_resize_hpt *VAR_1)
{
 struct kvm *VAR_2 = VAR_1->kvm;
 struct kvm_hpt_info VAR_3;




 FUNC_3(VAR_1, "resize_hpt_pivot()\n");

 FUNC_4(&VAR_2->mmu_lock);
 asm volatile("ptesync" : : : "memory");

 VAR_3 = VAR_2->arch.hpt;
 FUNC_1(VAR_2, &VAR_1->hpt);
 VAR_1->hpt = VAR_3;

 FUNC_5(&VAR_2->mmu_lock);

 FUNC_6(&VAR_2->srcu);

 if (FUNC_0(VAR_0))
  FUNC_2(VAR_2);

 FUNC_3(VAR_1, "resize_hpt_pivot() done\n");
}
