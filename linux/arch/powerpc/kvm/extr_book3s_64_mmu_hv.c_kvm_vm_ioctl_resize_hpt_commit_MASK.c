
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct kvm_resize_hpt {unsigned long order; long error; } ;
struct kvm_ppc_resize_hpt {unsigned long flags; unsigned long shift; } ;
struct TYPE_2__ {int mmu_ready; int mmu_setup_lock; struct kvm_resize_hpt* resize_hpt; } ;
struct kvm {TYPE_1__ arch; } ;


 long VAR_0 ;
 long VAR_1 ;
 long VAR_2 ;
 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct kvm*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,int *,int) ;
 int VAR_3 ;
 int FUNC_5 (struct kvm_resize_hpt*) ;
 long FUNC_6 (struct kvm_resize_hpt*) ;
 int FUNC_7 (struct kvm*,struct kvm_resize_hpt*) ;
 int FUNC_8 () ;

long FUNC_9(struct kvm *VAR_4,
        struct kvm_ppc_resize_hpt *VAR_5)
{
 unsigned long VAR_6 = VAR_5->flags;
 unsigned long VAR_7 = VAR_5->shift;
 struct kvm_resize_hpt *VAR_8;
 long VAR_9;

 if (VAR_6 != 0 || FUNC_1(VAR_4))
  return -VAR_0;

 if (VAR_7 && ((VAR_7 < 18) || (VAR_7 > 46)))
  return -VAR_0;

 FUNC_2(&VAR_4->arch.mmu_setup_lock);

 VAR_8 = VAR_4->arch.resize_hpt;


 VAR_9 = -VAR_1;
 if (FUNC_0(!VAR_4->arch.mmu_ready))
  goto out_no_hpt;


 VAR_4->arch.mmu_ready = 0;
 FUNC_8();



 FUNC_4(VAR_3, ((void*)0), 1);

 VAR_9 = -VAR_2;
 if (!VAR_8 || (VAR_8->order != VAR_7))
  goto out;

 VAR_9 = VAR_8->error;
 if (VAR_9)
  goto out;

 VAR_9 = FUNC_6(VAR_8);
 if (VAR_9)
  goto out;

 FUNC_5(VAR_8);

out:

 VAR_4->arch.mmu_ready = 1;
 FUNC_8();
out_no_hpt:
 FUNC_7(VAR_4, VAR_8);
 FUNC_3(&VAR_4->arch.mmu_setup_lock);
 return VAR_9;
}
