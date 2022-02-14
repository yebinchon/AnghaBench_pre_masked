
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct task_struct {scalar_t__ mm; TYPE_1__* group_leader; } ;
struct TYPE_8__ {char* name; int mode; } ;
struct kfd_process {TYPE_2__* lead_thread; TYPE_3__ attr_pasid; int kobj; } ;
struct file {int dummy; } ;
struct TYPE_9__ {int kobj; } ;
struct TYPE_7__ {scalar_t__ pid; } ;
struct TYPE_6__ {scalar_t__ mm; } ;


 int VAR_0 ;
 struct kfd_process* FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct kfd_process*) ;
 int VAR_1 ;
 struct kfd_process* FUNC_2 (struct task_struct*) ;
 struct task_struct* VAR_2 ;
 struct kfd_process* FUNC_3 (struct task_struct*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct kfd_process*,struct file*) ;
 int VAR_3 ;
 int FUNC_6 (int ,int *,int ,char*,int) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (char*) ;
 int FUNC_10 (char*,...) ;
 TYPE_5__ VAR_4 ;
 int VAR_5 ;
 int FUNC_11 (TYPE_3__*) ;
 int FUNC_12 (int ,TYPE_3__*) ;

struct kfd_process *FUNC_13(struct file *VAR_6)
{
 struct kfd_process *VAR_7;
 struct task_struct *VAR_8 = VAR_2;
 int VAR_9;

 if (!VAR_8->mm)
  return FUNC_0(-VAR_0);


 if (VAR_8->group_leader->mm != VAR_8->mm)
  return FUNC_0(-VAR_0);






 FUNC_7(&VAR_3);


 VAR_7 = FUNC_3(VAR_8);
 if (VAR_7) {
  FUNC_9("Process already found\n");
 } else {
  VAR_7 = FUNC_2(VAR_8);
  if (FUNC_1(VAR_7))
   goto out;

  VAR_9 = FUNC_5(VAR_7, VAR_6);
  if (VAR_9) {
   VAR_7 = FUNC_0(VAR_9);
   goto out;
  }

  if (!VAR_4.kobj)
   goto out;

  VAR_7->kobj = FUNC_4(VAR_7->kobj);
  if (!VAR_7->kobj) {
   FUNC_10("Creating procfs kobject failed");
   goto out;
  }
  VAR_9 = FUNC_6(VAR_7->kobj, &VAR_5,
        VAR_4.kobj, "%d",
        (int)VAR_7->lead_thread->pid);
  if (VAR_9) {
   FUNC_10("Creating procfs pid directory failed");
   goto out;
  }

  VAR_7->attr_pasid.name = "pasid";
  VAR_7->attr_pasid.mode = VAR_1;
  FUNC_11(&VAR_7->attr_pasid);
  VAR_9 = FUNC_12(VAR_7->kobj, &VAR_7->attr_pasid);
  if (VAR_9)
   FUNC_10("Creating pasid for pid %d failed",
     (int)VAR_7->lead_thread->pid);
 }
out:
 FUNC_8(&VAR_3);

 return VAR_7;
}
