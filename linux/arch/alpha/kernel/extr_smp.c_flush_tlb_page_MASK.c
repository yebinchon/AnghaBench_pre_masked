
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vm_area_struct {struct mm_struct* vm_mm; } ;
struct mm_struct {scalar_t__* context; int mm_users; } ;
struct flush_tlb_page_struct {unsigned long addr; struct mm_struct* mm; struct vm_area_struct* vma; } ;
struct TYPE_2__ {struct mm_struct* active_mm; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int) ;
 TYPE_1__* VAR_1 ;
 int FUNC_2 (struct mm_struct*,struct vm_area_struct*,unsigned long) ;
 int VAR_2 ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 (int ,struct flush_tlb_page_struct*,int) ;
 int FUNC_6 () ;

void
FUNC_7(struct vm_area_struct *VAR_3, unsigned long VAR_4)
{
 struct flush_tlb_page_struct VAR_5;
 struct mm_struct *VAR_6 = VAR_3->vm_mm;

 FUNC_3();

 if (VAR_6 == VAR_1->active_mm) {
  FUNC_2(VAR_6, VAR_3, VAR_4);
  if (FUNC_0(&VAR_6->mm_users) <= 1) {
   int VAR_7, VAR_8 = FUNC_6();
   for (VAR_7 = 0; VAR_7 < VAR_0; VAR_7++) {
    if (!FUNC_1(VAR_7) || VAR_7 == VAR_8)
     continue;
    if (VAR_6->context[VAR_7])
     VAR_6->context[VAR_7] = 0;
   }
   FUNC_4();
   return;
  }
 }

 VAR_5.vma = VAR_3;
 VAR_5.mm = VAR_6;
 VAR_5.addr = VAR_4;

 FUNC_5(VAR_2, &VAR_5, 1);

 FUNC_4();
}
