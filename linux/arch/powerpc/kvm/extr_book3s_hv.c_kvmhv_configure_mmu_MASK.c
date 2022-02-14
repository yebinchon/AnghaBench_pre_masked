
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct kvm_ppc_mmuv3_cfg {int flags; int process_table; } ;
struct TYPE_2__ {int mmu_ready; int process_table; int mmu_setup_lock; int vcpus_running; } ;
struct kvm {TYPE_1__ arch; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 unsigned long VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct kvm*) ;
 scalar_t__ FUNC_3 () ;
 int FUNC_4 (struct kvm*) ;
 int FUNC_5 (struct kvm*) ;
 int FUNC_6 (struct kvm*) ;
 int FUNC_7 (struct kvm*,unsigned long,unsigned long) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 () ;
 int FUNC_11 () ;

__attribute__((used)) static int FUNC_12(struct kvm *VAR_9, struct kvm_ppc_mmuv3_cfg *VAR_10)
{
 unsigned long VAR_11;
 int VAR_12;
 int VAR_13;


 if (!FUNC_1(VAR_0))
  return -VAR_3;


 if (VAR_10->flags & ~(VAR_5 | VAR_4))
  return -VAR_2;


 VAR_12 = !!(VAR_10->flags & VAR_5);
 if (!!(VAR_10->process_table & VAR_7) != VAR_12)
  return -VAR_2;


 if ((VAR_10->process_table & VAR_8) > 24)
  return -VAR_2;


 if (VAR_12 && !FUNC_10())
  return -VAR_2;


 if (FUNC_3() && !VAR_12)
  return -VAR_2;

 FUNC_8(&VAR_9->arch.mmu_setup_lock);
 if (VAR_12 != FUNC_2(VAR_9)) {
  if (VAR_9->arch.mmu_ready) {
   VAR_9->arch.mmu_ready = 0;

   FUNC_11();
   if (FUNC_0(&VAR_9->arch.vcpus_running)) {
    VAR_9->arch.mmu_ready = 1;
    VAR_13 = -VAR_1;
    goto out_unlock;
   }
  }
  if (VAR_12)
   VAR_13 = FUNC_6(VAR_9);
  else
   VAR_13 = FUNC_5(VAR_9);
  if (VAR_13)
   goto out_unlock;
 }

 VAR_9->arch.process_table = VAR_10->process_table;
 FUNC_4(VAR_9);

 VAR_11 = (VAR_10->flags & VAR_4) ? VAR_6 : 0;
 FUNC_7(VAR_9, VAR_11, VAR_6);
 VAR_13 = 0;

 out_unlock:
 FUNC_9(&VAR_9->arch.mmu_setup_lock);
 return VAR_13;
}
