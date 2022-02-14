
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
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_1__* VAR_6 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct mm_struct*,int ,int ,int,int ) ;
 int VAR_7 ;
 int FUNC_2 (int *) ;

int FUNC_3(struct linux_binprm *VAR_8, int VAR_9)
{
 struct mm_struct *VAR_10 = VAR_6->mm;
 int VAR_11;

 FUNC_0(&VAR_10->mmap_sem);


 VAR_11 = FUNC_1(VAR_10, VAR_0, VAR_1,
          VAR_5 | VAR_2 | VAR_4 |
          VAR_3, VAR_7);

 FUNC_2(&VAR_10->mmap_sem);

 return VAR_11;
}
