
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int md_spinlock_count; int md_saved_pil; } ;
struct thread {TYPE_1__ td_md; } ;
typedef int register_t ;


 int VAR_0 ;
 int FUNC_0 () ;
 struct thread* VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int ) ;

void
FUNC_3(void)
{
 struct thread *VAR_2;
 register_t VAR_3;

 VAR_2 = VAR_1;
 if (VAR_2->td_md.md_spinlock_count == 0) {
  VAR_3 = FUNC_1(VAR_3);
  FUNC_2(VAR_3, 0, VAR_0);
  VAR_2->td_md.md_spinlock_count = 1;
  VAR_2->td_md.md_saved_pil = VAR_3;
 } else
  VAR_2->td_md.md_spinlock_count++;
 FUNC_0();
}
