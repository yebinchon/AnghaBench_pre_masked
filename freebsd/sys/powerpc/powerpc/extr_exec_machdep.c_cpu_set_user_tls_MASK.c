
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct thread {TYPE_1__* td_frame; int td_proc; } ;
typedef void* register_t ;
struct TYPE_2__ {void** fixreg; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int ) ;

int
FUNC_1(struct thread *VAR_1, void *VAR_2)
{

 if (FUNC_0(VAR_1->td_proc, VAR_0))
  VAR_1->td_frame->fixreg[13] = (register_t)VAR_2 + 0x7010;
 else
  VAR_1->td_frame->fixreg[2] = (register_t)VAR_2 + 0x7008;
 return (0);
}
