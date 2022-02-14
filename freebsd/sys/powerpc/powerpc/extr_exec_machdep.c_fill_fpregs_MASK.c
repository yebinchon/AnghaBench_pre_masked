
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct thread {struct pcb* td_pcb; } ;
struct TYPE_4__ {TYPE_1__* fpr; int fpscr; } ;
struct pcb {int pcb_flags; TYPE_2__ pcb_fpu; } ;
struct fpreg {int * fpreg; int fpscr; } ;
struct TYPE_3__ {int fpr; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int *,int) ;
 int FUNC_1 (struct fpreg*,int ,int) ;

int
FUNC_2(struct thread *VAR_1, struct fpreg *VAR_2)
{
 struct pcb *VAR_3;
 int VAR_4;

 VAR_3 = VAR_1->td_pcb;

 if ((VAR_3->pcb_flags & VAR_0) == 0)
  FUNC_1(VAR_2, 0, sizeof(struct fpreg));
 else {
  FUNC_0(&VAR_2->fpscr, &VAR_3->pcb_fpu.fpscr, sizeof(double));
  for (VAR_4 = 0; VAR_4 < 32; VAR_4++)
   FUNC_0(&VAR_2->fpreg[VAR_4], &VAR_3->pcb_fpu.fpr[VAR_4].fpr,
       sizeof(double));
 }

 return (0);
}
