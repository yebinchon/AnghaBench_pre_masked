
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct vm_area_struct {int vm_page_prot; } ;
struct TYPE_4__ {int * vdso; } ;
struct mm_struct {int mmap_sem; TYPE_1__ context; } ;
struct linux_binprm {int dummy; } ;
typedef int pgprot_t ;
struct TYPE_6__ {int aliasing_num; unsigned int aliasing_mask; } ;
struct TYPE_5__ {struct mm_struct* mm; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 unsigned long VAR_2 ;
 scalar_t__ FUNC_0 (struct vm_area_struct*) ;
 scalar_t__ FUNC_1 (unsigned long) ;
 TYPE_3__* VAR_3 ;
 unsigned long VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (struct vm_area_struct*) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_3 (int) ;
 struct vm_area_struct* FUNC_4 (struct mm_struct*,unsigned long,unsigned long,int,int *) ;
 TYPE_2__* VAR_15 ;
 scalar_t__ FUNC_5 (int *) ;
 unsigned long FUNC_6 (int *,unsigned long,unsigned long,int ,int ) ;
 int FUNC_7 (struct vm_area_struct*,unsigned long,unsigned long,int,int ) ;
 unsigned long VAR_16 ;
 int FUNC_8 (int *) ;
 scalar_t__ VAR_17 ;
 unsigned long VAR_18 ;
 unsigned long FUNC_9 (unsigned long) ;
 int * VAR_19 ;
 unsigned long FUNC_10 (scalar_t__) ;

int FUNC_11(struct linux_binprm *VAR_20, int VAR_21)
{
 struct mm_struct *VAR_22 = VAR_15->mm;
 unsigned long VAR_23, VAR_24, VAR_25;
 struct vm_area_struct *VAR_26;
 unsigned long VAR_27 = 0;
 pgprot_t VAR_28;
 int VAR_29, VAR_30 = 2;

 VAR_24 = VAR_18 << VAR_4;

 if(VAR_16 == VAR_2)
  VAR_30 = 1;

 VAR_25 = VAR_24 + VAR_30 * VAR_5;




 if (FUNC_5(&VAR_22->mmap_sem))
  return -VAR_1;

 VAR_27 = FUNC_9(VAR_25);
 VAR_23 = FUNC_6(((void*)0), VAR_27, VAR_25, 0, 0);
 if (FUNC_1(VAR_23)) {
  VAR_29 = VAR_23;
  goto up_fail;
 }
 VAR_26 = FUNC_4(VAR_22, VAR_23, VAR_30 * VAR_5,
           VAR_10 | VAR_8, &VAR_19[0]);
 if (FUNC_0(VAR_26)) {
  VAR_29 = FUNC_2(VAR_26);
  goto up_fail;
 }


 VAR_29 = FUNC_7(VAR_26, VAR_23,
     FUNC_10(VAR_17) >> VAR_4,
     VAR_5, VAR_26->vm_page_prot);
 if (VAR_29)
  goto up_fail;


 VAR_23 += VAR_5;
 VAR_28 = FUNC_3(VAR_14 | VAR_13 | VAR_12 | VAR_11);
 VAR_29 = FUNC_7(VAR_26, VAR_23, VAR_16 >> VAR_4,
     VAR_5, VAR_28);
 if (VAR_29)
  goto up_fail;


 VAR_23 += VAR_5;
 VAR_22->context.vdso = (void *)VAR_23;
 VAR_26 = FUNC_4(VAR_22, VAR_23, VAR_24,
           VAR_10 | VAR_6 |
           VAR_8 | VAR_9 | VAR_7,
           &VAR_19[1]);
 if (FUNC_0(VAR_26)) {
  VAR_29 = FUNC_2(VAR_26);
  goto up_fail;
 }

 FUNC_8(&VAR_22->mmap_sem);
 return 0;

up_fail:
 VAR_22->context.vdso = ((void*)0);
 FUNC_8(&VAR_22->mmap_sem);
 return VAR_29;
}
