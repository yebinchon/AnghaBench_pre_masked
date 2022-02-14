
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct kvm_resize_hpt {unsigned long order; int error; int work; struct kvm* kvm; } ;
struct kvm_ppc_resize_hpt {unsigned long flags; unsigned long shift; } ;
struct TYPE_2__ {int mmu_setup_lock; struct kvm_resize_hpt* resize_hpt; } ;
struct kvm {TYPE_1__ arch; } ;


 int VAR_0 ;
 long VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int ) ;
 scalar_t__ FUNC_1 (struct kvm*) ;
 struct kvm_resize_hpt* FUNC_2 (int,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int VAR_4 ;
 int FUNC_5 (struct kvm*,struct kvm_resize_hpt*) ;
 int FUNC_6 (int *) ;

long FUNC_7(struct kvm *VAR_5,
         struct kvm_ppc_resize_hpt *VAR_6)
{
 unsigned long VAR_7 = VAR_6->flags;
 unsigned long VAR_8 = VAR_6->shift;
 struct kvm_resize_hpt *VAR_9;
 int VAR_10;

 if (VAR_7 != 0 || FUNC_1(VAR_5))
  return -VAR_1;

 if (VAR_8 && ((VAR_8 < 18) || (VAR_8 > 46)))
  return -VAR_1;

 FUNC_3(&VAR_5->arch.mmu_setup_lock);

 VAR_9 = VAR_5->arch.resize_hpt;

 if (VAR_9) {
  if (VAR_9->order == VAR_8) {

   VAR_10 = VAR_9->error;
   if (VAR_10 == -VAR_0)
    VAR_10 = 100;
   else if (VAR_10)
    FUNC_5(VAR_5, VAR_9);

   goto out;
  }


  FUNC_5(VAR_5, VAR_9);
 }

 VAR_10 = 0;
 if (!VAR_8)
  goto out;



 VAR_9 = FUNC_2(sizeof(*VAR_9), VAR_3);
 if (!VAR_9) {
  VAR_10 = -VAR_2;
  goto out;
 }

 VAR_9->error = -VAR_0;
 VAR_9->order = VAR_8;
 VAR_9->kvm = VAR_5;
 FUNC_0(&VAR_9->work, VAR_4);
 VAR_5->arch.resize_hpt = VAR_9;

 FUNC_6(&VAR_9->work);

 VAR_10 = 100;

out:
 FUNC_4(&VAR_5->arch.mmu_setup_lock);
 return VAR_10;
}
