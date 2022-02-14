
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mm_struct {int dummy; } ;
struct kfd_process {int dummy; } ;


 int VAR_0 ;
 struct kfd_process* FUNC_0 (struct mm_struct*) ;
 int FUNC_1 (struct kfd_process*) ;
 int FUNC_2 (struct kfd_process*) ;

int FUNC_3(struct mm_struct *VAR_1)
{
 struct kfd_process *VAR_2;
 int VAR_3;





 VAR_2 = FUNC_0(VAR_1);
 if (!VAR_2)
  return -VAR_0;

 VAR_3 = FUNC_1(VAR_2);

 FUNC_2(VAR_2);
 return VAR_3;
}
