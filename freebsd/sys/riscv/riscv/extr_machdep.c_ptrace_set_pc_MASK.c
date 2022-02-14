
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_long ;
struct thread {TYPE_1__* td_frame; } ;
struct TYPE_2__ {int tf_sepc; } ;



int
FUNC_0(struct thread *VAR_0, u_long VAR_1)
{

 VAR_0->td_frame->tf_sepc = VAR_1;
 return (0);
}
