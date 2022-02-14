
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct task_struct {int dummy; } ;
struct rdtgroup {int flags; int closid; int mode; TYPE_1__* kn; struct pseudo_lock_region* plr; } ;
struct pseudo_lock_region {int thread_done; unsigned int minor; int debugfs_dir; int lock_thread_wq; int cpu; } ;
typedef struct task_struct device ;
struct TYPE_2__ {int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct task_struct*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,unsigned int) ;
 int FUNC_3 (struct task_struct*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (char*,int,int ,struct rdtgroup*,int *) ;
 int FUNC_8 (int ) ;
 int VAR_4 ;
 struct task_struct* FUNC_9 (int ,int *,int ,struct rdtgroup*,char*,int ) ;
 int FUNC_10 (int ,int ) ;
 int FUNC_11 (struct task_struct*,int ) ;
 struct task_struct* FUNC_12 (int ,struct rdtgroup*,int ,char*,int ) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;
 int VAR_5 ;
 int FUNC_15 (struct pseudo_lock_region*) ;
 int FUNC_16 (struct pseudo_lock_region*) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_17 (unsigned int*) ;
 int FUNC_18 (unsigned int) ;
 int FUNC_19 (struct pseudo_lock_region*) ;
 int FUNC_20 (struct pseudo_lock_region*) ;
 int VAR_8 ;
 int FUNC_21 (char*,int) ;
 int FUNC_22 (char*) ;
 int FUNC_23 (struct rdtgroup*,char*,int) ;
 int VAR_9 ;
 int FUNC_24 (int ,int) ;
 int FUNC_25 (struct task_struct*) ;

int FUNC_26(struct rdtgroup *VAR_10)
{
 struct pseudo_lock_region *VAR_11 = VAR_10->plr;
 struct task_struct *VAR_12;
 unsigned int VAR_13;
 struct device *VAR_14;
 int VAR_15;

 VAR_15 = FUNC_19(VAR_11);
 if (VAR_15 < 0)
  return VAR_15;

 VAR_15 = FUNC_15(VAR_11);
 if (VAR_15 < 0) {
  VAR_15 = -VAR_0;
  goto out_region;
 }

 VAR_11->thread_done = 0;

 VAR_12 = FUNC_12(VAR_6, VAR_10,
     FUNC_5(VAR_11->cpu),
     "pseudo_lock/%u", VAR_11->cpu);
 if (FUNC_0(VAR_12)) {
  VAR_15 = FUNC_3(VAR_12);
  FUNC_21("Locking thread returned error %d\n", VAR_15);
  goto out_cstates;
 }

 FUNC_11(VAR_12, VAR_11->cpu);
 FUNC_25(VAR_12);

 VAR_15 = FUNC_24(VAR_11->lock_thread_wq,
           VAR_11->thread_done == 1);
 if (VAR_15 < 0) {
  FUNC_22("Locking thread interrupted\n");
  goto out_cstates;
 }

 VAR_15 = FUNC_17(&VAR_13);
 if (VAR_15 < 0) {
  FUNC_22("Unable to obtain a new minor number\n");
  goto out_cstates;
 }
 FUNC_14(&VAR_9);

 if (!FUNC_1(VAR_4)) {
  VAR_11->debugfs_dir = FUNC_6(VAR_10->kn->name,
            VAR_4);
  if (!FUNC_1(VAR_11->debugfs_dir))
   FUNC_7("pseudo_lock_measure", 0200,
         VAR_11->debugfs_dir, VAR_10,
         &VAR_8);
 }

 VAR_14 = FUNC_9(VAR_5, ((void*)0),
       FUNC_2(VAR_7, VAR_13),
       VAR_10, "%s", VAR_10->kn->name);

 FUNC_13(&VAR_9);

 if (FUNC_0(VAR_14)) {
  VAR_15 = FUNC_3(VAR_14);
  FUNC_21("Failed to create character device: %d\n",
        VAR_15);
  goto out_debugfs;
 }


 if (VAR_10->flags & VAR_2) {
  VAR_15 = -VAR_1;
  goto out_device;
 }

 VAR_11->minor = VAR_13;

 VAR_10->mode = VAR_3;
 FUNC_4(VAR_10->closid);
 FUNC_23(VAR_10, "cpus", 0444);
 FUNC_23(VAR_10, "cpus_list", 0444);

 VAR_15 = 0;
 goto out;

out_device:
 FUNC_10(VAR_5, FUNC_2(VAR_7, VAR_13));
out_debugfs:
 FUNC_8(VAR_11->debugfs_dir);
 FUNC_18(VAR_13);
out_cstates:
 FUNC_16(VAR_11);
out_region:
 FUNC_20(VAR_11);
out:
 return VAR_15;
}
