
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * fph; int flags; } ;
struct task_struct {TYPE_1__ thread; } ;
struct ia64_psr {scalar_t__ mfh; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct task_struct*) ;
 struct ia64_psr* FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 (struct task_struct*) ;

inline void
FUNC_6 (struct task_struct *VAR_1)
{
 struct ia64_psr *VAR_2 = FUNC_1(FUNC_5(VAR_1));





 FUNC_3();
 if (FUNC_0(VAR_1) && VAR_2->mfh) {
  VAR_2->mfh = 0;
  VAR_1->thread.flags |= VAR_0;
  FUNC_2(&VAR_1->thread.fph[0]);
 }
 FUNC_4();
}
