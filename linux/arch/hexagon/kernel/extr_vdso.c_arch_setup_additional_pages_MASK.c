
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {void* vdso; } ;
struct mm_struct {int mmap_sem; TYPE_1__ context; } ;
struct linux_binprm {int dummy; } ;
struct TYPE_4__ {struct mm_struct* mm; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (unsigned long) ;
 int VAR_1 ;
 unsigned long VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 TYPE_2__* VAR_8 ;
 scalar_t__ FUNC_1 (int *) ;
 unsigned long FUNC_2 (int *,unsigned long,int ,int ,int ) ;
 int FUNC_3 (struct mm_struct*,unsigned long,int ,int,int *) ;
 int FUNC_4 (int *) ;
 int VAR_9 ;

int FUNC_5(struct linux_binprm *VAR_10, int VAR_11)
{
 int VAR_12;
 unsigned long VAR_13;
 struct mm_struct *VAR_14 = VAR_8->mm;

 if (FUNC_1(&VAR_14->mmap_sem))
  return -VAR_0;


 VAR_13 = VAR_2;

 VAR_13 = FUNC_2(((void*)0), VAR_13, VAR_1, 0, 0);
 if (FUNC_0(VAR_13)) {
  VAR_12 = VAR_13;
  goto up_fail;
 }


 VAR_12 = FUNC_3(VAR_14, VAR_13, VAR_1,
          VAR_7|VAR_3|
          VAR_5|VAR_6|VAR_4,
          &VAR_9);

 if (VAR_12)
  goto up_fail;

 VAR_14->context.vdso = (void *)VAR_13;

up_fail:
 FUNC_4(&VAR_14->mmap_sem);
 return VAR_12;
}
