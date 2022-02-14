
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct trapframe {int srr0; int * fixreg; } ;
struct thread {TYPE_1__* td_pcb; } ;
struct TYPE_2__ {int pcb_flags; int pcb_dscr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct thread* VAR_6 ;
 int FUNC_0 (int) ;

__attribute__((used)) static int
FUNC_1(int VAR_7, int VAR_8, struct trapframe *VAR_9){
 struct thread *VAR_10;

 VAR_10 = VAR_6;

 if (VAR_7 == VAR_3 || VAR_7 == VAR_4) {
  if (!(VAR_5 & VAR_1))
   return (VAR_2);

  if ((VAR_10->td_pcb->pcb_flags & VAR_0) == 0)
   VAR_10->td_pcb->pcb_dscr = FUNC_0(VAR_4);

  VAR_9->fixreg[VAR_8] = VAR_10->td_pcb->pcb_dscr;
  VAR_9->srr0 += 4;
  return (0);
 } else
  return (VAR_2);
}
