
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct thread {TYPE_2__* td_frame; int td_proc; TYPE_1__* td_pcb; int * td_retval; } ;
struct TYPE_4__ {int tf_tnpc; int tf_tstate; int * tf_out; int tf_tpc; } ;
struct TYPE_3__ {int pcb_tpc; } ;




 int FUNC_0 (int ,int) ;
 int VAR_0 ;

void
FUNC_1(struct thread *VAR_1, int VAR_2)
{

 switch (VAR_2) {
 case 0:
  VAR_1->td_frame->tf_out[0] = VAR_1->td_retval[0];
  VAR_1->td_frame->tf_out[1] = VAR_1->td_retval[1];
  VAR_1->td_frame->tf_tstate &= ~VAR_0;
  break;

 case 128:




  VAR_1->td_frame->tf_tpc = VAR_1->td_pcb->pcb_tpc;
  VAR_1->td_frame->tf_tnpc -= 4;
  break;

 case 129:
  break;

 default:
  VAR_1->td_frame->tf_out[0] = FUNC_0(VAR_1->td_proc, VAR_2);
  VAR_1->td_frame->tf_tstate |= VAR_0;
  break;
 }
}
