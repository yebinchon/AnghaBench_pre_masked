
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_long ;
struct thread {TYPE_1__* td_proc; struct pcb* td_pcb; } ;
struct rwindow {int dummy; } ;
struct pcb {int pcb_nsaved; int* pcb_rwsp; struct rwindow* pcb_rw; } ;
struct TYPE_2__ {int p_comm; } ;


 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int ,char*,struct thread*,int ,int) ;
 int FUNC_2 (int,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_3 (struct rwindow*,void*,int) ;
 int FUNC_4 () ;

int
FUNC_5(struct thread *VAR_4)
{
 struct rwindow *VAR_5;
 struct pcb *VAR_6;
 u_long *VAR_7;
 u_long VAR_8;
 int VAR_9;
 int VAR_10;

 VAR_6 = VAR_4->td_pcb;
 FUNC_1(VAR_0, "rwindow_save: td=%p (%s) nsaved=%d", VAR_4,
     VAR_4->td_proc->p_comm, VAR_6->pcb_nsaved);

 FUNC_4();
 FUNC_2(VAR_6->pcb_nsaved < VAR_1,
     ("rwindow_save: pcb_nsaved > MAXWIN"));
 if ((VAR_10 = VAR_6->pcb_nsaved) == 0)
  return (0);
 VAR_7 = VAR_6->pcb_rwsp;
 VAR_5 = VAR_6->pcb_rw;
 VAR_9 = 0;
 do {
  VAR_8 = *VAR_7;
  FUNC_0(VAR_0, "rwindow_save: usp=%#lx", VAR_8);
  VAR_8 += VAR_3;
  if ((VAR_9 = (VAR_8 & 0x7)) != 0)
   break;
  VAR_9 = FUNC_3(VAR_5, (void *)VAR_8, sizeof *VAR_5);
  if (VAR_9)
   break;
  VAR_7++;
  VAR_5++;
 } while (--VAR_10 > 0);
 FUNC_0(VAR_0, "rwindow_save: error=%d", VAR_9);
 if (VAR_9 == 0)
  VAR_6->pcb_nsaved = 0;
 return (VAR_9 == 0 ? 0 : VAR_2);
}
