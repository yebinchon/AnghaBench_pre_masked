
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread_info {int preempt_count; int cpu; struct task_struct* task; int flags; } ;
struct task_struct {int comm; int sibling; int children; struct task_struct* group_leader; struct task_struct* real_parent; struct task_struct* parent; int tasks; int cpus_mask; int state; struct thread_info* stack; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int,int *) ;
 int FUNC_2 (struct task_struct*,int ,int ) ;
 int FUNC_3 (int ,char const*,int) ;
 struct thread_info* FUNC_4 (struct task_struct*) ;

__attribute__((used)) static void
FUNC_5(void *VAR_3, unsigned long VAR_4,
  const char *VAR_5, int VAR_6)
{
 struct task_struct *VAR_7 = (struct task_struct *)((char *)VAR_3 + VAR_4);
 struct thread_info *VAR_8;
 FUNC_2(VAR_7, 0, VAR_0);
 VAR_8 = FUNC_4(VAR_7);
 VAR_8->flags = VAR_2;
 VAR_8->preempt_count = 1;
 VAR_8->task = VAR_7;
 VAR_8->cpu = VAR_6;
 VAR_7->stack = VAR_8;
 VAR_7->state = VAR_1;
 FUNC_1(VAR_6, &VAR_7->cpus_mask);
 FUNC_0(&VAR_7->tasks);
 VAR_7->parent = VAR_7->real_parent = VAR_7->group_leader = VAR_7;
 FUNC_0(&VAR_7->children);
 FUNC_0(&VAR_7->sibling);
 FUNC_3(VAR_7->comm, VAR_5, sizeof(VAR_7->comm)-1);
}
