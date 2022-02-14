
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int md_spinlock_count; int md_saved_sstatus_ie; } ;
struct thread {TYPE_1__ td_md; } ;
typedef int register_t ;


 int FUNC_0 () ;
 struct thread* VAR_0 ;
 int FUNC_1 () ;

void
FUNC_2(void)
{
 struct thread *VAR_1;
 register_t VAR_2;

 VAR_1 = VAR_0;
 if (VAR_1->td_md.md_spinlock_count == 0) {
  VAR_2 = FUNC_1();
  VAR_1->td_md.md_spinlock_count = 1;
  VAR_1->td_md.md_saved_sstatus_ie = VAR_2;
 } else
  VAR_1->td_md.md_spinlock_count++;
 FUNC_0();
}
