
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {int vm_flags; struct mm_struct* vm_mm; } ;
struct mm_struct {int dummy; } ;
typedef int pud_t ;
typedef int pte_t ;
typedef int pmd_t ;
typedef int pgd_t ;


 unsigned long FUNC_0 (unsigned long) ;
 unsigned long VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int ,struct mm_struct*) ;
 int * FUNC_2 (struct mm_struct*,unsigned long) ;
 int * FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (char*,scalar_t__,unsigned long) ;
 int * FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int ) ;
 int * FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (unsigned long,scalar_t__) ;
 int FUNC_9 (unsigned long,scalar_t__) ;
 int FUNC_10 () ;

__attribute__((used)) static void FUNC_11(struct vm_area_struct *VAR_4,
     unsigned long VAR_5, unsigned long VAR_6)
{
 unsigned long VAR_7 = FUNC_0(VAR_6 << VAR_0);
 int VAR_8 = VAR_4->vm_flags & VAR_2;
 struct mm_struct *VAR_9 = VAR_4->vm_mm;
 pgd_t *VAR_10;
 pud_t *VAR_11;
 pmd_t *VAR_12;
 pte_t *VAR_13;

 FUNC_4("cpage[%08llx,%08lx]\n",
   FUNC_1(FUNC_10(), VAR_9), VAR_5);


 if (FUNC_1(FUNC_10(), VAR_9) == 0)
  return;

 VAR_10 = FUNC_2(VAR_9, VAR_5);
 VAR_11 = FUNC_7(VAR_10, VAR_5);
 VAR_12 = FUNC_3(VAR_11, VAR_5);
 VAR_13 = FUNC_5(VAR_12, VAR_5);


 if (!(FUNC_6(*VAR_13) & VAR_3))
  return;

 FUNC_8(VAR_7, VAR_7 + VAR_1);
 if (VAR_8)
  FUNC_9(VAR_7, VAR_7 + VAR_1);
}
