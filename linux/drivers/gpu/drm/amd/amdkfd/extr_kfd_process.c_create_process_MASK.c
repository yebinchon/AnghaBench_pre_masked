
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct task_struct {int group_leader; scalar_t__ mm; } ;
struct TYPE_2__ {int * ops; } ;
struct kfd_process {scalar_t__ pasid; int mutex; int pqm; scalar_t__ mm; int kfd_processes; int lead_thread; TYPE_1__ mmu_notifier; int is_32bit_user_mode; int last_restore_timestamp; int restore_work; int eviction_work; int per_device_data; int ref; } ;


 int VAR_0 ;
 struct kfd_process* FUNC_0 (int) ;
 int VAR_1 ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *) ;
 int VAR_2 ;
 int FUNC_3 () ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int *,uintptr_t) ;
 int FUNC_6 () ;
 scalar_t__ FUNC_7 (struct kfd_process*) ;
 int FUNC_8 (struct kfd_process*) ;
 int FUNC_9 (struct kfd_process*) ;
 int FUNC_10 (struct kfd_process*) ;
 scalar_t__ FUNC_11 () ;
 int FUNC_12 (scalar_t__) ;
 int FUNC_13 (struct kfd_process*) ;
 int FUNC_14 (struct kfd_process*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_15 (struct kfd_process*) ;
 int FUNC_16 (int *) ;
 struct kfd_process* FUNC_17 (int,int ) ;
 int FUNC_18 (TYPE_1__*,scalar_t__) ;
 int FUNC_19 (int *) ;
 int FUNC_20 (int *) ;
 int FUNC_21 (int *,struct kfd_process*) ;
 int FUNC_22 (int *) ;
 int VAR_5 ;

__attribute__((used)) static struct kfd_process *FUNC_23(const struct task_struct *VAR_6)
{
 struct kfd_process *VAR_7;
 int VAR_8 = -VAR_0;

 VAR_7 = FUNC_17(sizeof(*VAR_7), VAR_1);
 if (!VAR_7)
  goto err_alloc_process;

 FUNC_16(&VAR_7->ref);
 FUNC_20(&VAR_7->mutex);
 VAR_7->mm = VAR_6->mm;
 VAR_7->lead_thread = VAR_6->group_leader;
 FUNC_2(&VAR_7->per_device_data);
 FUNC_1(&VAR_7->eviction_work, VAR_2);
 FUNC_1(&VAR_7->restore_work, VAR_5);
 VAR_7->last_restore_timestamp = FUNC_3();
 FUNC_8(VAR_7);
 VAR_7->is_32bit_user_mode = FUNC_6();

 VAR_7->pasid = FUNC_11();
 if (VAR_7->pasid == 0)
  goto err_alloc_pasid;

 if (FUNC_7(VAR_7) < 0)
  goto err_alloc_doorbells;

 VAR_8 = FUNC_21(&VAR_7->pqm, VAR_7);
 if (VAR_8 != 0)
  goto err_process_pqm_init;


 VAR_8 = FUNC_10(VAR_7);
 if (VAR_8 != 0)
  goto err_init_apertures;


 VAR_7->mmu_notifier.ops = &VAR_3;
 VAR_8 = FUNC_18(&VAR_7->mmu_notifier, VAR_7->mm);
 if (VAR_8)
  goto err_register_notifier;

 FUNC_4(VAR_7->lead_thread);
 FUNC_5(VAR_4, &VAR_7->kfd_processes,
   (uintptr_t)VAR_7->mm);

 return VAR_7;

err_register_notifier:
 FUNC_14(VAR_7);
 FUNC_13(VAR_7);
err_init_apertures:
 FUNC_22(&VAR_7->pqm);
err_process_pqm_init:
 FUNC_9(VAR_7);
err_alloc_doorbells:
 FUNC_12(VAR_7->pasid);
err_alloc_pasid:
 FUNC_19(&VAR_7->mutex);
 FUNC_15(VAR_7);
err_alloc_process:
 return FUNC_0(VAR_8);
}
