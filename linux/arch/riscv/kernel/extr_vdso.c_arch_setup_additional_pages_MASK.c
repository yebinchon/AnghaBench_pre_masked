
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * vdso; } ;
struct mm_struct {int mmap_sem; TYPE_1__ context; } ;
struct linux_binprm {int dummy; } ;
struct TYPE_4__ {struct mm_struct* mm; } ;


 scalar_t__ FUNC_0 (unsigned long) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_2__* VAR_6 ;
 int FUNC_1 (int *) ;
 unsigned long FUNC_2 (int *,int ,unsigned long,int ,int ) ;
 int FUNC_3 (struct mm_struct*,unsigned long,unsigned long,int,int ) ;
 scalar_t__ FUNC_4 (int) ;
 int FUNC_5 (int *) ;
 int VAR_7 ;
 int VAR_8 ;

int FUNC_6(struct linux_binprm *VAR_9,
 int VAR_10)
{
 struct mm_struct *VAR_11 = VAR_6->mm;
 unsigned long VAR_12, VAR_13;
 int VAR_14;

 VAR_13 = (VAR_8 + 1) << VAR_0;

 FUNC_1(&VAR_11->mmap_sem);
 VAR_12 = FUNC_2(((void*)0), 0, VAR_13, 0, 0);
 if (FUNC_0(VAR_12)) {
  VAR_14 = VAR_12;
  goto end;
 }






 VAR_11->context.vdso = (void *)VAR_12;

 VAR_14 = FUNC_3(VAR_11, VAR_12, VAR_13,
  (VAR_5 | VAR_1 | VAR_3 | VAR_4 | VAR_2),
  VAR_7);

 if (FUNC_4(VAR_14))
  VAR_11->context.vdso = ((void*)0);

end:
 FUNC_5(&VAR_11->mmap_sem);
 return VAR_14;
}
