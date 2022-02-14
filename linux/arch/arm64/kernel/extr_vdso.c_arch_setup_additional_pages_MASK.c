
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mm_struct {int mmap_sem; } ;
struct linux_binprm {int dummy; } ;
struct TYPE_2__ {struct mm_struct* mm; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,struct mm_struct*,struct linux_binprm*,int) ;
 TYPE_1__* VAR_2 ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

int FUNC_3(struct linux_binprm *VAR_3,
    int VAR_4)
{
 struct mm_struct *VAR_5 = VAR_2->mm;
 int VAR_6;

 if (FUNC_1(&VAR_5->mmap_sem))
  return -VAR_1;

 VAR_6 = FUNC_0(VAR_0,
           VAR_5,
           VAR_3,
           VAR_4);

 FUNC_2(&VAR_5->mmap_sem);

 return VAR_6;
}
