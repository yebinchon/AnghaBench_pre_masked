
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef void* u_long ;
struct thread {TYPE_1__* td_frame; } ;
struct TYPE_2__ {void* tf_tnpc; void* tf_tpc; } ;



int
FUNC_0(struct thread *VAR_0, u_long VAR_1)
{

 VAR_0->td_frame->tf_tpc = VAR_1;
 VAR_0->td_frame->tf_tnpc = VAR_1 + 4;
 return (0);
}
