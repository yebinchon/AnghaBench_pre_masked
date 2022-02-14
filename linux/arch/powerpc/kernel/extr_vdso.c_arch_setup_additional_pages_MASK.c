
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct page {int dummy; } ;
struct TYPE_3__ {unsigned long vdso_base; } ;
struct mm_struct {int mmap_sem; TYPE_1__ context; } ;
struct linux_binprm {int dummy; } ;
struct TYPE_4__ {struct mm_struct* mm; } ;


 unsigned long FUNC_0 (unsigned long,int) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (unsigned long) ;
 int VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 TYPE_2__* VAR_10 ;
 scalar_t__ FUNC_2 (int *) ;
 unsigned long FUNC_3 (int *,unsigned long,unsigned long,int ,int ) ;
 int FUNC_4 (struct mm_struct*,unsigned long,unsigned long,int,struct page**) ;
 scalar_t__ FUNC_5 () ;
 int FUNC_6 (int *) ;
 struct page** VAR_11 ;
 unsigned long VAR_12 ;
 struct page** VAR_13 ;
 unsigned long VAR_14 ;
 int VAR_15 ;

int FUNC_7(struct linux_binprm *VAR_16, int VAR_17)
{
 struct mm_struct *VAR_18 = VAR_10->mm;
 struct page **VAR_19;
 unsigned long VAR_20;
 unsigned long VAR_21;
 int VAR_22;

 if (!VAR_15)
  return 0;
 VAR_19 = VAR_11;
 VAR_20 = VAR_12;
 VAR_21 = VAR_3;


 VAR_10->mm->context.vdso_base = 0;




 if (VAR_20 == 0)
  return 0;

 VAR_20 ++;







 if (FUNC_2(&VAR_18->mmap_sem))
  return -VAR_0;
 VAR_21 = FUNC_3(((void*)0), VAR_21,
          (VAR_20 << VAR_2) +
          ((VAR_4 - 1) & VAR_1),
          0, 0);
 if (FUNC_1(VAR_21)) {
  VAR_22 = VAR_21;
  goto fail_mmapsem;
 }


 VAR_21 = FUNC_0(VAR_21, VAR_4);






 VAR_10->mm->context.vdso_base = VAR_21;
 VAR_22 = FUNC_4(VAR_18, VAR_21, VAR_20 << VAR_2,
         VAR_9|VAR_5|
         VAR_7|VAR_8|VAR_6,
         VAR_19);
 if (VAR_22) {
  VAR_10->mm->context.vdso_base = 0;
  goto fail_mmapsem;
 }

 FUNC_6(&VAR_18->mmap_sem);
 return 0;

 fail_mmapsem:
 FUNC_6(&VAR_18->mmap_sem);
 return VAR_22;
}
