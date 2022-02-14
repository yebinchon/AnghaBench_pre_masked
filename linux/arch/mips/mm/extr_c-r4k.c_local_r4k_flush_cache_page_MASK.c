
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vm_area_struct {int vm_flags; struct mm_struct* vm_mm; } ;
struct page {int dummy; } ;
struct mm_struct {int dummy; } ;
struct flush_cache_page_args {unsigned long addr; int pfn; struct vm_area_struct* vma; } ;
typedef int pud_t ;
typedef int pte_t ;
typedef int pmd_t ;
typedef int pgd_t ;
struct TYPE_2__ {struct mm_struct* active_mm; } ;


 unsigned long VAR_0 ;
 int FUNC_0 (struct page*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 TYPE_1__* VAR_8 ;
 int FUNC_1 (struct mm_struct*) ;
 int FUNC_2 (struct mm_struct*,int ) ;
 void* FUNC_3 (struct page*) ;
 void* FUNC_4 (struct page*,unsigned long) ;
 int FUNC_5 (void*) ;
 int FUNC_6 () ;
 scalar_t__ FUNC_7 (struct page*) ;
 struct page* FUNC_8 (int ) ;
 int * FUNC_9 (struct mm_struct*,unsigned long) ;
 int * FUNC_10 (int *,unsigned long) ;
 int * FUNC_11 (int *,unsigned long) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int ) ;
 int * FUNC_14 (int *,unsigned long) ;
 int FUNC_15 (unsigned long) ;
 int FUNC_16 (unsigned long) ;
 int FUNC_17 (unsigned long) ;
 int FUNC_18 (unsigned long) ;
 int FUNC_19 (unsigned long) ;

__attribute__((used)) static inline void FUNC_20(void *VAR_9)
{
 struct flush_cache_page_args *VAR_10 = VAR_9;
 struct vm_area_struct *VAR_11 = VAR_10->vma;
 unsigned long VAR_12 = VAR_10->addr;
 struct page *VAR_13 = FUNC_8(VAR_10->pfn);
 int VAR_14 = VAR_11->vm_flags & VAR_2;
 struct mm_struct *VAR_15 = VAR_11->vm_mm;
 int VAR_16 = 0;
 pgd_t *VAR_17;
 pud_t *VAR_18;
 pmd_t *VAR_19;
 pte_t *VAR_20;
 void *VAR_21;





 if (!FUNC_2(VAR_15, VAR_1))
  return;

 VAR_12 &= VAR_0;
 VAR_17 = FUNC_9(VAR_15, VAR_12);
 VAR_18 = FUNC_14(VAR_17, VAR_12);
 VAR_19 = FUNC_10(VAR_18, VAR_12);
 VAR_20 = FUNC_11(VAR_19, VAR_12);





 if (!(FUNC_12(*VAR_20)))
  return;

 if ((VAR_15 == VAR_8->active_mm) && (FUNC_13(*VAR_20) & VAR_3))
  VAR_21 = ((void*)0);
 else {




  VAR_16 = (VAR_4 &&
    FUNC_7(VAR_13) &&
    !FUNC_0(VAR_13));
  if (VAR_16)
   VAR_21 = FUNC_4(VAR_13, VAR_12);
  else
   VAR_21 = FUNC_3(VAR_13);
  VAR_12 = (unsigned long)VAR_21;
 }

 if (VAR_4 || (VAR_14 && !VAR_5)) {
  VAR_21 ? FUNC_15(VAR_12) :
   FUNC_16(VAR_12);
  if (VAR_14 && !VAR_7)
   FUNC_19(VAR_12);
 }
 if (VAR_14) {
  if (VAR_21 && VAR_6 && VAR_15 == VAR_8->active_mm) {
   FUNC_1(VAR_15);
  } else
   VAR_21 ? FUNC_17(VAR_12) :
    FUNC_18(VAR_12);
 }

 if (VAR_21) {
  if (VAR_16)
   FUNC_6();
  else
   FUNC_5(VAR_21);
 }
}
