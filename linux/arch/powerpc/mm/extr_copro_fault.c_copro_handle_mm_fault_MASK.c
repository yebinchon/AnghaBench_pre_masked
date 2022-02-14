
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int vm_fault_t ;
struct vm_area_struct {unsigned long vm_start; int vm_flags; } ;
struct mm_struct {int mmap_sem; int * pgd; } ;
struct TYPE_2__ {int min_flt; int maj_flt; } ;


 int FUNC_0 () ;
 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_1 (unsigned long) ;
 TYPE_1__* VAR_14 ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (struct vm_area_struct*,unsigned long) ;
 struct vm_area_struct* FUNC_4 (struct mm_struct*,unsigned long) ;
 int FUNC_5 (struct vm_area_struct*,unsigned long,int ) ;
 int FUNC_6 () ;
 scalar_t__ FUNC_7 (int) ;
 int FUNC_8 (int *) ;

int FUNC_9(struct mm_struct *VAR_15, unsigned long VAR_16,
  unsigned long VAR_17, vm_fault_t *VAR_18)
{
 struct vm_area_struct *VAR_19;
 unsigned long VAR_20;
 int VAR_21;

 if (VAR_15 == ((void*)0))
  return -VAR_2;

 if (VAR_15->pgd == ((void*)0))
  return -VAR_2;

 FUNC_2(&VAR_15->mmap_sem);
 VAR_21 = -VAR_2;
 VAR_19 = FUNC_4(VAR_15, VAR_16);
 if (!VAR_19)
  goto out_unlock;

 if (VAR_16 < VAR_19->vm_start) {
  if (!(VAR_19->vm_flags & VAR_11))
   goto out_unlock;
  if (FUNC_3(VAR_19, VAR_16))
   goto out_unlock;
 }

 VAR_20 = VAR_17 & VAR_0;
 if (VAR_20) {
  if (!(VAR_19->vm_flags & VAR_13))
   goto out_unlock;
 } else {
  if (!(VAR_19->vm_flags & (VAR_12 | VAR_5)))
   goto out_unlock;






  if (!FUNC_6())
   FUNC_1(VAR_17 & VAR_1);
 }

 VAR_21 = 0;
 *VAR_18 = FUNC_5(VAR_19, VAR_16, VAR_20 ? VAR_4 : 0);
 if (FUNC_7(*VAR_18 & VAR_6)) {
  if (*VAR_18 & VAR_8) {
   VAR_21 = -VAR_3;
   goto out_unlock;
  } else if (*VAR_18 & (VAR_9 | VAR_10)) {
   VAR_21 = -VAR_2;
   goto out_unlock;
  }
  FUNC_0();
 }

 if (*VAR_18 & VAR_7)
  VAR_14->maj_flt++;
 else
  VAR_14->min_flt++;

out_unlock:
 FUNC_8(&VAR_15->mmap_sem);
 return VAR_21;
}
