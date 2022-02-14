
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct task_struct {int dummy; } ;
struct rdtgroup {int flags; struct pseudo_lock_region* plr; } ;
struct pseudo_lock_region {int thread_done; unsigned int cpu; int lock_thread_wq; TYPE_1__* d; } ;
struct TYPE_2__ {int cpu_mask; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct task_struct*) ;
 int FUNC_1 (struct task_struct*) ;
 int VAR_1 ;
 int FUNC_2 (unsigned int) ;
 int FUNC_3 (unsigned int) ;
 unsigned int FUNC_4 (int *) ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 (struct task_struct*,unsigned int) ;
 struct task_struct* FUNC_8 (int ,struct pseudo_lock_region*,int ,char*,unsigned int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int VAR_5 ;
 int FUNC_11 (int ,int) ;
 int FUNC_12 (struct task_struct*) ;

__attribute__((used)) static int FUNC_13(struct rdtgroup *VAR_6, int VAR_7)
{
 struct pseudo_lock_region *VAR_8 = VAR_6->plr;
 struct task_struct *VAR_9;
 unsigned int VAR_10;
 int VAR_11 = -1;

 FUNC_5();
 FUNC_9(&VAR_5);

 if (VAR_6->flags & VAR_1) {
  VAR_11 = -VAR_0;
  goto out;
 }

 if (!VAR_8->d) {
  VAR_11 = -VAR_0;
  goto out;
 }

 VAR_8->thread_done = 0;
 VAR_10 = FUNC_4(&VAR_8->d->cpu_mask);
 if (!FUNC_2(VAR_10)) {
  VAR_11 = -VAR_0;
  goto out;
 }

 VAR_8->cpu = VAR_10;

 if (VAR_7 == 1)
  VAR_9 = FUNC_8(VAR_2, VAR_8,
      FUNC_3(VAR_10),
      "pseudo_lock_measure/%u",
      VAR_10);
 else if (VAR_7 == 2)
  VAR_9 = FUNC_8(VAR_3, VAR_8,
      FUNC_3(VAR_10),
      "pseudo_lock_measure/%u",
      VAR_10);
 else if (VAR_7 == 3)
  VAR_9 = FUNC_8(VAR_4, VAR_8,
      FUNC_3(VAR_10),
      "pseudo_lock_measure/%u",
      VAR_10);
 else
  goto out;

 if (FUNC_0(VAR_9)) {
  VAR_11 = FUNC_1(VAR_9);
  goto out;
 }
 FUNC_7(VAR_9, VAR_10);
 FUNC_12(VAR_9);

 VAR_11 = FUNC_11(VAR_8->lock_thread_wq,
           VAR_8->thread_done == 1);
 if (VAR_11 < 0)
  goto out;

 VAR_11 = 0;

out:
 FUNC_10(&VAR_5);
 FUNC_6();
 return VAR_11;
}
