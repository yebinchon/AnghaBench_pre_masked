
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct thread_info {scalar_t__ slb_preload_nr; } ;
struct mm_struct {unsigned long mmap_base; } ;
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

void FUNC_8(void)
{
 struct thread_info *VAR_2 = FUNC_1();
 struct mm_struct *VAR_3 = VAR_1->mm;
 unsigned long VAR_4 = 0x10000000;

 FUNC_0(FUNC_3());





 if (VAR_2->slb_preload_nr + 2 > VAR_0)
  return;

 FUNC_2();
 if (!FUNC_4(VAR_4)) {
  if (FUNC_6(VAR_2, VAR_4))
   FUNC_7(VAR_3, VAR_4);
 }


 if (!FUNC_4(VAR_3->mmap_base)) {
  if (FUNC_6(VAR_2, VAR_3->mmap_base))
   FUNC_7(VAR_3, VAR_3->mmap_base);
 }


 asm volatile("isync" : : : "memory");

 FUNC_5();
}
