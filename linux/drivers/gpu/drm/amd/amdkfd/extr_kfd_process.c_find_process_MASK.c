
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {int mm; } ;
struct kfd_process {int dummy; } ;


 struct kfd_process* FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int) ;

__attribute__((used)) static struct kfd_process *FUNC_3(const struct task_struct *VAR_1)
{
 struct kfd_process *VAR_2;
 int VAR_3;

 VAR_3 = FUNC_1(&VAR_0);
 VAR_2 = FUNC_0(VAR_1->mm);
 FUNC_2(&VAR_0, VAR_3);

 return VAR_2;
}
