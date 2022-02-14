
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int process_name; scalar_t__ tgid; int task_name; scalar_t__ pid; } ;
struct amdgpu_vm {TYPE_1__ task_info; } ;
struct TYPE_5__ {scalar_t__ mm; struct TYPE_5__* group_leader; scalar_t__ pid; } ;


 TYPE_2__* VAR_0 ;
 int FUNC_0 (int ,TYPE_2__*) ;

void FUNC_1(struct amdgpu_vm *VAR_1)
{
 if (!VAR_1->task_info.pid) {
  VAR_1->task_info.pid = VAR_0->pid;
  FUNC_0(VAR_1->task_info.task_name, VAR_0);

  if (VAR_0->group_leader->mm == VAR_0->mm) {
   VAR_1->task_info.tgid = VAR_0->group_leader->pid;
   FUNC_0(VAR_1->task_info.process_name, VAR_0->group_leader);
  }
 }
}
