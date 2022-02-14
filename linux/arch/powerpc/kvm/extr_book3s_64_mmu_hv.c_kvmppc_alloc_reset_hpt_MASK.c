
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct kvm_hpt_info {int dummy; } ;
struct TYPE_4__ {int order; scalar_t__ virt; } ;
struct TYPE_3__ {int mmu_ready; int mmu_setup_lock; int need_tlb_flush; TYPE_2__ hpt; int vcpus_running; } ;
struct kvm {TYPE_1__ arch; } ;


 long VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (struct kvm*) ;
 long FUNC_3 (struct kvm_hpt_info*,int) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (struct kvm*) ;
 int FUNC_6 (struct kvm*,struct kvm_hpt_info*) ;
 long FUNC_7 (struct kvm*) ;
 int FUNC_8 (void*,int ,unsigned long) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 () ;

long FUNC_12(struct kvm *VAR_1, int VAR_2)
{
 long VAR_3 = -VAR_0;
 struct kvm_hpt_info VAR_4;

 FUNC_9(&VAR_1->arch.mmu_setup_lock);
 if (VAR_1->arch.mmu_ready) {
  VAR_1->arch.mmu_ready = 0;

  FUNC_11();
  if (FUNC_0(&VAR_1->arch.vcpus_running)) {
   VAR_1->arch.mmu_ready = 1;
   goto out;
  }
 }
 if (FUNC_2(VAR_1)) {
  VAR_3 = FUNC_7(VAR_1);
  if (VAR_3)
   goto out;
 }

 if (VAR_1->arch.hpt.order == VAR_2) {



  FUNC_8((void *)VAR_1->arch.hpt.virt, 0, 1ul << VAR_2);



  FUNC_5(VAR_1);
  VAR_3 = 0;
  goto out;
 }

 if (VAR_1->arch.hpt.virt) {
  FUNC_4(&VAR_1->arch.hpt);
  FUNC_5(VAR_1);
 }

 VAR_3 = FUNC_3(&VAR_4, VAR_2);
 if (VAR_3 < 0)
  goto out;
 FUNC_6(VAR_1, &VAR_4);

out:
 if (VAR_3 == 0)

  FUNC_1(&VAR_1->arch.need_tlb_flush);

 FUNC_10(&VAR_1->arch.mmu_setup_lock);
 return VAR_3;
}
