
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
 int VAR_6 ;
 TYPE_1__* VAR_7 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (struct mm_struct*,int ,int ,int,int ) ;
 int VAR_8 ;
 int FUNC_2 (int *) ;
 int VAR_9 ;
 int VAR_10 ;

int FUNC_3(struct linux_binprm *VAR_11, int VAR_12)
{
 int VAR_13;
 struct mm_struct *VAR_14 = VAR_7->mm;

 if (!VAR_9)
  return 0;

 if (FUNC_0(&VAR_14->mmap_sem))
  return -VAR_0;

 VAR_13 = FUNC_1(VAR_14, VAR_8, VAR_1,
  VAR_6|VAR_2|
  VAR_4|VAR_5|VAR_3,
  VAR_10);

 FUNC_2(&VAR_14->mmap_sem);

 return VAR_13;
}
