
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vm_area_struct {int vm_flags; unsigned long vm_start; unsigned long vm_end; TYPE_1__* vm_mm; } ;
typedef int pte_t ;
typedef int pgd_t ;
struct TYPE_2__ {scalar_t__ context; int * pgd; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (unsigned long) ;
 int VAR_2 ;
 int FUNC_2 (struct vm_area_struct*,unsigned long,int ) ;
 int FUNC_3 (struct vm_area_struct*,unsigned long,int ) ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 (struct vm_area_struct*,unsigned long) ;
 int FUNC_7 (struct vm_area_struct*,unsigned long,unsigned long) ;
 int FUNC_8 (unsigned long,unsigned long) ;
 int FUNC_9 (unsigned long,unsigned long) ;
 int * FUNC_10 (int *,unsigned long) ;
 scalar_t__ FUNC_11 (int) ;
 unsigned long VAR_3 ;
 scalar_t__ FUNC_12 (unsigned long) ;
 unsigned long FUNC_13 (int ) ;
 scalar_t__ FUNC_14 (scalar_t__) ;

void FUNC_15(struct vm_area_struct *VAR_4,
  unsigned long VAR_5, unsigned long VAR_6)
{
 pgd_t *VAR_7;
 unsigned long VAR_8;

 if ((!FUNC_0(VAR_0) || !FUNC_4()) &&
     VAR_6 - VAR_5 >= VAR_3) {
  if (VAR_4->vm_mm->context)
   FUNC_7(VAR_4, VAR_5, VAR_6);
  FUNC_5();
  return;
 }

 if (VAR_4->vm_mm->context == FUNC_11(3)) {
  FUNC_8(VAR_5, VAR_6);
  if (VAR_4->vm_flags & VAR_2)
   FUNC_9(VAR_5, VAR_6);
  FUNC_7(VAR_4, VAR_5, VAR_6);
  return;
 }

 VAR_7 = VAR_4->vm_mm->pgd;
 for (VAR_8 = VAR_4->vm_start; VAR_8 < VAR_4->vm_end; VAR_8 += VAR_1) {
  unsigned long VAR_9;
  pte_t *VAR_10 = FUNC_10(VAR_7, VAR_8);
  if (!VAR_10)
   continue;
  VAR_9 = FUNC_13(*VAR_10);
  if (FUNC_12(VAR_9)) {
   if (FUNC_14(VAR_4->vm_mm->context)) {
    FUNC_6(VAR_4, VAR_8);
    FUNC_2(VAR_4, VAR_8, FUNC_1(VAR_9));
   } else {
    FUNC_3(VAR_4, VAR_8, FUNC_1(VAR_9));
   }
  }
 }
}
