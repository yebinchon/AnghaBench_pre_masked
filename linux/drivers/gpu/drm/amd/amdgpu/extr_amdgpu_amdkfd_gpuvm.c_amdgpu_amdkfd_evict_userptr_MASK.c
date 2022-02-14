
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mm_struct {int dummy; } ;
struct kgd_mem {int invalid; struct amdkfd_process_info* process_info; } ;
struct amdkfd_process_info {int restore_userptr_work; int evicted_bos; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct mm_struct*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int *,int ) ;

int FUNC_5(struct kgd_mem *VAR_1,
    struct mm_struct *VAR_2)
{
 struct amdkfd_process_info *VAR_3 = VAR_1->process_info;
 int VAR_4, VAR_5;
 int VAR_6 = 0;

 VAR_4 = FUNC_0(&VAR_1->invalid);
 VAR_5 = FUNC_0(&VAR_3->evicted_bos);
 if (VAR_5 == 1) {

  VAR_6 = FUNC_1(VAR_2);
  if (VAR_6)
   FUNC_3("Failed to quiesce KFD\n");
  FUNC_4(&VAR_3->restore_userptr_work,
   FUNC_2(VAR_0));
 }

 return VAR_6;
}
