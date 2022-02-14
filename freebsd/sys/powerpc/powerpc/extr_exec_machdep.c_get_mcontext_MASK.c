
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_5__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct thread {TYPE_1__* td_frame; } ;
struct TYPE_7__ {int mc_onstack; } ;
typedef TYPE_2__ mcontext_t ;
struct TYPE_8__ {int td_proc; } ;
struct TYPE_6__ {int * fixreg; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 TYPE_5__* VAR_0 ;
 int FUNC_2 (struct thread*,TYPE_2__*,int) ;
 int FUNC_3 (int ) ;

int
FUNC_4(struct thread *VAR_1, mcontext_t *VAR_2, int VAR_3)
{
 int VAR_4;

 VAR_4 = FUNC_2(VAR_1, VAR_2, VAR_3);
 if (VAR_4 == 0) {
  FUNC_0(VAR_0->td_proc);
  VAR_2->mc_onstack = FUNC_3(VAR_1->td_frame->fixreg[1]);
  FUNC_1(VAR_0->td_proc);
 }

 return (VAR_4);
}
