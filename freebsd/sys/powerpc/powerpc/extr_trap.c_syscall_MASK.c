
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct trapframe {int dummy; } ;
struct thread {TYPE_3__* td_pcb; struct trapframe* td_frame; } ;
struct TYPE_4__ {scalar_t__ usr_vsid; } ;
struct TYPE_5__ {TYPE_1__ aim; } ;
struct TYPE_6__ {TYPE_2__ pcb_cpu; } ;


 struct thread* VAR_0 ;
 int FUNC_0 (struct thread*) ;
 int FUNC_1 (struct thread*) ;

void
FUNC_2(struct trapframe *VAR_1)
{
 struct thread *VAR_2;

 VAR_2 = VAR_0;
 VAR_2->td_frame = VAR_1;
 FUNC_0(VAR_2);
 FUNC_1(VAR_2);
}
