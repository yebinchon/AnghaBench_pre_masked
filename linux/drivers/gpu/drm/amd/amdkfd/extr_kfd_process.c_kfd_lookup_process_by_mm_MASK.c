
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mm_struct {int dummy; } ;
struct kfd_process {int ref; } ;


 struct kfd_process* FUNC_0 (struct mm_struct const*) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int) ;

struct kfd_process *FUNC_4(const struct mm_struct *VAR_1)
{
 struct kfd_process *VAR_2;

 int VAR_3 = FUNC_2(&VAR_0);

 VAR_2 = FUNC_0(VAR_1);
 if (VAR_2)
  FUNC_1(&VAR_2->ref);

 FUNC_3(&VAR_0, VAR_3);

 return VAR_2;
}
