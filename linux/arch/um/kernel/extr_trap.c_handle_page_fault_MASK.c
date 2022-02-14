
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int vm_fault_t ;
struct vm_area_struct {unsigned long vm_start; int vm_flags; } ;
struct mm_struct {int mmap_sem; } ;
typedef int pud_t ;
typedef int pte_t ;
typedef int pmd_t ;
typedef int pgd_t ;
struct TYPE_3__ {int min_flt; int maj_flt; struct mm_struct* mm; } ;


 int FUNC_0 (unsigned long) ;
 int FUNC_1 () ;
 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_2 (int) ;
 TYPE_1__* VAR_19 ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (struct vm_area_struct*,unsigned long) ;
 scalar_t__ FUNC_5 (TYPE_1__*) ;
 scalar_t__ FUNC_6 () ;
 struct vm_area_struct* FUNC_7 (struct mm_struct*,unsigned long) ;
 int FUNC_8 (struct vm_area_struct*,unsigned long) ;
 int FUNC_9 (struct vm_area_struct*,unsigned long,unsigned int) ;
 int FUNC_10 () ;
 int * FUNC_11 (struct mm_struct*,unsigned long) ;
 int * FUNC_12 (int *,unsigned long) ;
 int FUNC_13 (int ) ;
 int * FUNC_14 (int *,unsigned long) ;
 int FUNC_15 (int ) ;
 int FUNC_16 (int ) ;
 int * FUNC_17 (int *,unsigned long) ;
 scalar_t__ FUNC_18 (int) ;
 int FUNC_19 (int *) ;

int FUNC_20(unsigned long VAR_20, unsigned long VAR_21,
        int VAR_22, int VAR_23, int *VAR_24)
{
 struct mm_struct *VAR_25 = VAR_19->mm;
 struct vm_area_struct *VAR_26;
 pgd_t *VAR_27;
 pud_t *VAR_28;
 pmd_t *VAR_29;
 pte_t *VAR_30;
 int VAR_31 = -VAR_1;
 unsigned int VAR_32 = VAR_2 | VAR_3;

 *VAR_24 = VAR_8;





 if (FUNC_6())
  goto out_nosemaphore;

 if (VAR_23)
  VAR_32 |= VAR_5;
retry:
 FUNC_3(&VAR_25->mmap_sem);
 VAR_26 = FUNC_7(VAR_25, VAR_20);
 if (!VAR_26)
  goto out;
 else if (VAR_26->vm_start <= VAR_20)
  goto good_area;
 else if (!(VAR_26->vm_flags & VAR_16))
  goto out;
 else if (VAR_23 && !FUNC_0(VAR_20))
  goto out;
 else if (FUNC_4(VAR_26, VAR_20))
  goto out;

good_area:
 *VAR_24 = VAR_7;
 if (VAR_22) {
  if (!(VAR_26->vm_flags & VAR_18))
   goto out;
  VAR_32 |= VAR_6;
 } else {

  if (!(VAR_26->vm_flags & (VAR_17 | VAR_9)))
   goto out;
 }

 do {
  vm_fault_t VAR_33;

  VAR_33 = FUNC_9(VAR_26, VAR_20, VAR_32);

  if ((VAR_33 & VAR_13) && FUNC_5(VAR_19))
   goto out_nosemaphore;

  if (FUNC_18(VAR_33 & VAR_10)) {
   if (VAR_33 & VAR_12) {
    goto out_of_memory;
   } else if (VAR_33 & VAR_15) {
    goto out;
   } else if (VAR_33 & VAR_14) {
    VAR_31 = -VAR_0;
    goto out;
   }
   FUNC_1();
  }
  if (VAR_32 & VAR_2) {
   if (VAR_33 & VAR_11)
    VAR_19->maj_flt++;
   else
    VAR_19->min_flt++;
   if (VAR_33 & VAR_13) {
    VAR_32 &= ~VAR_2;
    VAR_32 |= VAR_4;

    goto retry;
   }
  }

  VAR_27 = FUNC_11(VAR_25, VAR_20);
  VAR_28 = FUNC_17(VAR_27, VAR_20);
  VAR_29 = FUNC_12(VAR_28, VAR_20);
  VAR_30 = FUNC_14(VAR_29, VAR_20);
 } while (!FUNC_15(*VAR_30));
 VAR_31 = 0;
 FUNC_8(VAR_26, VAR_20);
out:
 FUNC_19(&VAR_25->mmap_sem);
out_nosemaphore:
 return VAR_31;

out_of_memory:




 FUNC_19(&VAR_25->mmap_sem);
 if (!VAR_23)
  goto out_nosemaphore;
 FUNC_10();
 return 0;
}
