
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ virt; } ;
struct kvm_resize_hpt {TYPE_2__ hpt; int error; } ;
struct TYPE_3__ {struct kvm_resize_hpt* resize_hpt; int mmu_setup_lock; } ;
struct kvm {TYPE_1__ arch; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct kvm_resize_hpt*) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct kvm *VAR_1, struct kvm_resize_hpt *VAR_2)
{
 if (FUNC_0(!FUNC_3(&VAR_1->arch.mmu_setup_lock)))
  return;

 if (!VAR_2)
  return;

 if (VAR_2->error != -VAR_0) {
  if (VAR_2->hpt.virt)
   FUNC_2(&VAR_2->hpt);
  FUNC_1(VAR_2);
 }

 if (VAR_1->arch.resize_hpt == VAR_2)
  VAR_1->arch.resize_hpt = ((void*)0);
}
