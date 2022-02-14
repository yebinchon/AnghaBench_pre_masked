
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct thread_info {scalar_t__ slb_preload_nr; } ;
struct mm_struct {unsigned long start_brk; } ;
struct TYPE_2__ {struct mm_struct* mm; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 TYPE_1__* VAR_1 ;
 struct thread_info* FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (unsigned long) ;
 int FUNC_5 () ;
 scalar_t__ FUNC_6 (struct thread_info*,unsigned long) ;
 int FUNC_7 (struct mm_struct*,unsigned long) ;

void FUNC_8(unsigned long VAR_2, unsigned long VAR_3)
{
 struct thread_info *VAR_4 = FUNC_1();
 struct mm_struct *VAR_5 = VAR_1->mm;
 unsigned long VAR_6 = VAR_5->start_brk;

 FUNC_0(FUNC_3());


 if (VAR_4->slb_preload_nr + 3 > VAR_0)
  return;

 FUNC_2();


 if (!FUNC_4(VAR_2)) {
  if (FUNC_6(VAR_4, VAR_2))
   FUNC_7(VAR_5, VAR_2);
 }


 if (!FUNC_4(VAR_3)) {
  if (FUNC_6(VAR_4, VAR_3))
   FUNC_7(VAR_5, VAR_3);
 }


 if (VAR_6 && !FUNC_4(VAR_6)) {
  if (FUNC_6(VAR_4, VAR_6))
   FUNC_7(VAR_5, VAR_6);
 }


 asm volatile("isync" : : : "memory");

 FUNC_5();
}
