
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mmu_gather {int page_size; unsigned long start; unsigned long end; scalar_t__ need_flush_all; scalar_t__ fullmm; struct mm_struct* mm; } ;
struct mm_struct {int dummy; } ;


 int FUNC_0 (struct mm_struct*,int) ;
 int FUNC_1 (struct mm_struct*,unsigned long,unsigned long,int) ;
 scalar_t__ FUNC_2 (struct mm_struct*) ;
 int FUNC_3 (struct mm_struct*) ;
 int FUNC_4 (struct mm_struct*) ;
 int FUNC_5 (struct mm_struct*,unsigned long,unsigned long,int) ;
 int FUNC_6 (struct mm_struct*,unsigned long,unsigned long,int) ;
 int FUNC_7 (int) ;

void FUNC_8(struct mmu_gather *VAR_0)
{
 int VAR_1 = 0;
 struct mm_struct *VAR_2 = VAR_0->mm;
 int VAR_3 = VAR_0->page_size;
 unsigned long VAR_4 = VAR_0->start;
 unsigned long VAR_5 = VAR_0->end;
 if (VAR_0->fullmm) {
  FUNC_0(VAR_2, 1);
 } else if ( (VAR_1 = FUNC_7(VAR_3)) == -1) {
  if (!VAR_0->need_flush_all)
   FUNC_4(VAR_2);
  else
   FUNC_3(VAR_2);
 } else {
  if (!VAR_0->need_flush_all)
   FUNC_6(VAR_2, VAR_4, VAR_5, VAR_1);
  else
   FUNC_5(VAR_2, VAR_4, VAR_5, VAR_1);
 }
 VAR_0->need_flush_all = 0;
}
