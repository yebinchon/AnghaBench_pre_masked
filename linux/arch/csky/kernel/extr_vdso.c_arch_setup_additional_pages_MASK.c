
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


 scalar_t__ FUNC_0 (unsigned long) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 TYPE_2__* VAR_7 ;
 int FUNC_1 (int *) ;
 unsigned long FUNC_2 (int *,int ,int ,int ,int ) ;
 int FUNC_3 (struct mm_struct*,unsigned long,int ,int,int *) ;
 int FUNC_4 (int *) ;
 int VAR_8 ;

int FUNC_5(struct linux_binprm *VAR_9, int VAR_10)
{
 int VAR_11;
 unsigned long VAR_12;
 struct mm_struct *VAR_13 = VAR_7->mm;

 FUNC_1(&VAR_13->mmap_sem);

 VAR_12 = FUNC_2(((void*)0), VAR_1, VAR_0, 0, 0);
 if (FUNC_0(VAR_12)) {
  VAR_11 = VAR_12;
  goto up_fail;
 }

 VAR_11 = FUNC_3(
   VAR_13,
   VAR_12,
   VAR_0,
   VAR_6|VAR_2|VAR_4|VAR_5|VAR_3,
   &VAR_8);
 if (VAR_11)
  goto up_fail;

 VAR_13->context.vdso = (void *)VAR_12;

up_fail:
 FUNC_4(&VAR_13->mmap_sem);
 return VAR_11;
}
