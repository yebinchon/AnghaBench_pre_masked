
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct trapframe {int* tf_a; int* tf_t; int tf_sepc; } ;
struct thread {int* td_retval; struct trapframe* td_frame; } ;





void
FUNC_0(struct thread *VAR_0, int VAR_1)
{
 struct trapframe *VAR_2;

 VAR_2 = VAR_0->td_frame;

 switch (VAR_1) {
 case 0:
  VAR_2->tf_a[0] = VAR_0->td_retval[0];
  VAR_2->tf_a[1] = VAR_0->td_retval[1];
  VAR_2->tf_t[0] = 0;
  break;
 case 128:
  VAR_2->tf_sepc -= 4;
  break;
 case 129:
  break;
 default:
  VAR_2->tf_a[0] = VAR_1;
  VAR_2->tf_t[0] = 1;
  break;
 }
}
