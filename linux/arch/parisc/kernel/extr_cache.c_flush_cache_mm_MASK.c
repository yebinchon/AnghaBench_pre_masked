
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {unsigned long vm_start; unsigned long vm_end; int vm_flags; struct vm_area_struct* vm_next; } ;
struct mm_struct {scalar_t__ context; struct vm_area_struct* mmap; int * pgd; } ;
typedef int pte_t ;
typedef int pgd_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (unsigned long) ;
 int VAR_2 ;
 int FUNC_2 (struct vm_area_struct*,unsigned long,int ) ;
 int FUNC_3 (struct vm_area_struct*,unsigned long,int ) ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 (struct vm_area_struct*,unsigned long) ;
 int FUNC_8 (struct vm_area_struct*,unsigned long,unsigned long) ;
 int FUNC_9 (unsigned long,unsigned long) ;
 int FUNC_10 (unsigned long,unsigned long) ;
 int * FUNC_11 (int *,unsigned long) ;
 scalar_t__ FUNC_12 (int) ;
 scalar_t__ FUNC_13 (struct mm_struct*) ;
 scalar_t__ VAR_3 ;
 int FUNC_14 (unsigned long) ;
 unsigned long FUNC_15 (int ) ;
 scalar_t__ FUNC_16 (scalar_t__) ;

void FUNC_17(struct mm_struct *VAR_4)
{
 struct vm_area_struct *VAR_5;
 pgd_t *VAR_6;



 if ((!FUNC_0(VAR_0) || !FUNC_4()) &&
     FUNC_13(VAR_4) >= VAR_3) {
  if (VAR_4->context)
   FUNC_6();
  FUNC_5();
  return;
 }

 if (VAR_4->context == FUNC_12(3)) {
  for (VAR_5 = VAR_4->mmap; VAR_5; VAR_5 = VAR_5->vm_next) {
   FUNC_9(VAR_5->vm_start, VAR_5->vm_end);
   if (VAR_5->vm_flags & VAR_2)
    FUNC_10(VAR_5->vm_start, VAR_5->vm_end);
   FUNC_8(VAR_5, VAR_5->vm_start, VAR_5->vm_end);
  }
  return;
 }

 VAR_6 = VAR_4->pgd;
 for (VAR_5 = VAR_4->mmap; VAR_5; VAR_5 = VAR_5->vm_next) {
  unsigned long VAR_7;

  for (VAR_7 = VAR_5->vm_start; VAR_7 < VAR_5->vm_end;
       VAR_7 += VAR_1) {
   unsigned long VAR_8;
   pte_t *VAR_9 = FUNC_11(VAR_6, VAR_7);
   if (!VAR_9)
    continue;
   VAR_8 = FUNC_15(*VAR_9);
   if (!FUNC_14(VAR_8))
    continue;
   if (FUNC_16(VAR_4->context)) {
    FUNC_7(VAR_5, VAR_7);
    FUNC_2(VAR_5, VAR_7, FUNC_1(VAR_8));
   } else {
    FUNC_3(VAR_5, VAR_7, FUNC_1(VAR_8));
   }
  }
 }
}
