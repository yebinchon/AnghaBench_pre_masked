
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct trapframe {int dummy; } ;
struct thread {int td_intr_nesting_level; struct trapframe* td_intr_frame; } ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 struct thread* VAR_0 ;
 int FUNC_2 () ;

__attribute__((used)) static void
FUNC_3(struct trapframe *VAR_1)
{
 struct trapframe *VAR_2;
 struct thread *VAR_3;

 FUNC_0();
 VAR_3 = VAR_0;
 VAR_3->td_intr_nesting_level++;
 VAR_2 = VAR_3->td_intr_frame;
 VAR_3->td_intr_frame = VAR_1;
 FUNC_2();
 VAR_3->td_intr_frame = VAR_2;
 VAR_3->td_intr_nesting_level--;
 FUNC_1();
}
