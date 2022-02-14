
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct vm_area_struct {int dummy; } ;
struct TYPE_7__ {void* vdso; } ;
struct mm_struct {int mmap_sem; TYPE_3__ context; } ;
struct mips_vdso_image {unsigned long size; int mapping; } ;
struct linux_binprm {int dummy; } ;
struct TYPE_6__ {TYPE_1__* abi; } ;
struct TYPE_8__ {struct mm_struct* mm; TYPE_2__ thread; } ;
struct TYPE_5__ {struct mips_vdso_image* vdso; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct vm_area_struct*) ;
 scalar_t__ FUNC_1 (unsigned long) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long VAR_4 ;
 int FUNC_2 (struct vm_area_struct*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 unsigned long FUNC_3 (unsigned long,int) ;
 struct vm_area_struct* FUNC_4 (struct mm_struct*,unsigned long,unsigned long,int,int *) ;
 scalar_t__ VAR_11 ;
 TYPE_4__* VAR_12 ;
 scalar_t__ FUNC_5 (int *) ;
 unsigned long FUNC_6 (int *,int ,unsigned long,int ,int ) ;
 int FUNC_7 (struct vm_area_struct*,unsigned long,unsigned long,unsigned long,int ) ;
 scalar_t__ VAR_13 ;
 scalar_t__ FUNC_8 () ;
 unsigned long FUNC_9 (int *,int ,unsigned long,int,int ,int *) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (struct vm_area_struct*,unsigned long,unsigned long,unsigned long,int ) ;
 int VAR_14 ;
 int FUNC_12 (int *) ;
 int FUNC_13 () ;
 scalar_t__ VAR_15 ;
 int VAR_16 ;
 unsigned long FUNC_14 (scalar_t__) ;

int FUNC_15(struct linux_binprm *VAR_17, int VAR_18)
{
 struct mips_vdso_image *VAR_19 = VAR_12->thread.abi->vdso;
 struct mm_struct *VAR_20 = VAR_12->mm;
 unsigned long VAR_21, VAR_22, VAR_23, VAR_24, VAR_25, VAR_26, VAR_27;
 struct vm_area_struct *VAR_28;
 int VAR_29;

 if (FUNC_5(&VAR_20->mmap_sem))
  return -VAR_0;


 VAR_24 = FUNC_9(((void*)0), VAR_5, VAR_4,
      VAR_10 | VAR_6 |
      VAR_8 | VAR_9 | VAR_7,
      0, ((void*)0));
 if (FUNC_1(VAR_24)) {
  VAR_29 = VAR_24;
  goto out;
 }
 VAR_21 = FUNC_8() ? VAR_4 : 0;
 VAR_22 = VAR_21 + VAR_4;
 VAR_23 = VAR_22 + VAR_19->size;





 if (VAR_11)
  VAR_23 += VAR_14 + 1;

 VAR_24 = FUNC_6(((void*)0), FUNC_13(), VAR_23, 0, 0);
 if (FUNC_1(VAR_24)) {
  VAR_29 = VAR_24;
  goto out;
 }







 if (VAR_11) {
  VAR_24 = FUNC_3(VAR_24, VAR_14);
  VAR_24 += ((unsigned long)VAR_15 - VAR_21) & VAR_14;
 }

 VAR_25 = VAR_24 + VAR_21;
 VAR_26 = VAR_25 + VAR_4;

 VAR_28 = FUNC_4(VAR_20, VAR_24, VAR_22,
           VAR_10 | VAR_8,
           &VAR_16);
 if (FUNC_0(VAR_28)) {
  VAR_29 = FUNC_2(VAR_28);
  goto out;
 }


 if (VAR_21) {
  VAR_27 = FUNC_14(VAR_13 + VAR_1) >> VAR_3;

  VAR_29 = FUNC_7(VAR_28, VAR_24, VAR_27, VAR_21,
      FUNC_10(VAR_2));
  if (VAR_29)
   goto out;
 }


 VAR_29 = FUNC_11(VAR_28, VAR_25,
         FUNC_14(VAR_15) >> VAR_3,
         VAR_4, VAR_2);
 if (VAR_29)
  goto out;


 VAR_28 = FUNC_4(VAR_20, VAR_26, VAR_19->size,
           VAR_10 | VAR_6 |
           VAR_8 | VAR_9 | VAR_7,
           &VAR_19->mapping);
 if (FUNC_0(VAR_28)) {
  VAR_29 = FUNC_2(VAR_28);
  goto out;
 }

 VAR_20->context.vdso = (void *)VAR_26;
 VAR_29 = 0;

out:
 FUNC_12(&VAR_20->mmap_sem);
 return VAR_29;
}
