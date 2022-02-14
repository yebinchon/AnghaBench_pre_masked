
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct task_struct {scalar_t__ mm; TYPE_1__* group_leader; } ;
struct kfd_process {int dummy; } ;
struct TYPE_2__ {scalar_t__ mm; } ;


 int VAR_0 ;
 struct kfd_process* FUNC_0 (int ) ;
 struct kfd_process* FUNC_1 (struct task_struct const*) ;

struct kfd_process *FUNC_2(const struct task_struct *VAR_1)
{
 struct kfd_process *VAR_2;

 if (!VAR_1->mm)
  return FUNC_0(-VAR_0);


 if (VAR_1->group_leader->mm != VAR_1->mm)
  return FUNC_0(-VAR_0);

 VAR_2 = FUNC_1(VAR_1);
 if (!VAR_2)
  return FUNC_0(-VAR_0);

 return VAR_2;
}
