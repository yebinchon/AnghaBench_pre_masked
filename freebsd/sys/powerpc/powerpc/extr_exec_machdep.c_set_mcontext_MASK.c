
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct trapframe {int srr1; void** fixreg; } ;
struct thread {int td_proc; struct trapframe* td_frame; struct pcb* td_pcb; } ;
struct TYPE_7__ {struct trapframe* vr; int vrsave; int vscr; } ;
struct TYPE_6__ {TYPE_5__* fpr; struct trapframe fpscr; } ;
struct pcb {int pcb_flags; TYPE_2__ pcb_vec; TYPE_1__ pcb_fpu; } ;
typedef void* register_t ;
struct TYPE_8__ {scalar_t__ mc_vers; int mc_len; int mc_srr1; int mc_flags; int * mc_avec; int mc_vrsave; int mc_vscr; int * mc_vsxfpreg; int * mc_fpreg; int mc_fpscr; int * mc_frame; } ;
typedef TYPE_3__ mcontext_t ;
struct TYPE_9__ {struct trapframe* vsr; struct trapframe fpr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_1 (TYPE_5__*,int) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (struct thread*) ;
 int FUNC_5 (struct trapframe*,int *,int) ;
 int VAR_9 ;

int
FUNC_6(struct thread *VAR_10, mcontext_t *VAR_11)
{
 struct pcb *VAR_12;
 struct trapframe *VAR_13;
 register_t VAR_14;
 int VAR_15;

 VAR_12 = VAR_10->td_pcb;
 VAR_13 = VAR_10->td_frame;

 if (VAR_11->mc_vers != VAR_8 || VAR_11->mc_len != sizeof(*VAR_11))
  return (VAR_0);




 if ((VAR_11->mc_srr1 & VAR_9) != (VAR_13->srr1 & VAR_9)) {
  return (VAR_0);
 }


 if (FUNC_0(VAR_10->td_proc, VAR_5))
  VAR_14 = VAR_13->fixreg[13];
 else
  VAR_14 = VAR_13->fixreg[2];
 FUNC_5(VAR_13, VAR_11->mc_frame, sizeof(VAR_11->mc_frame));
 if (FUNC_0(VAR_10->td_proc, VAR_5))
  VAR_13->fixreg[13] = VAR_14;
 else
  VAR_13->fixreg[2] = VAR_14;


 VAR_13->srr1 &= ~VAR_4;
 VAR_12->pcb_flags &= ~VAR_2;

 if (VAR_11->mc_flags & VAR_7) {

  VAR_12->pcb_flags |= VAR_1;
  FUNC_5(&VAR_12->pcb_fpu.fpscr, &VAR_11->mc_fpscr, sizeof(double));
  FUNC_1(VAR_12->pcb_fpu.fpr, sizeof(VAR_12->pcb_fpu.fpr));
  for (VAR_15 = 0; VAR_15 < 32; VAR_15++) {
   FUNC_5(&VAR_12->pcb_fpu.fpr[VAR_15].fpr, &VAR_11->mc_fpreg[VAR_15],
       sizeof(double));
   FUNC_5(&VAR_12->pcb_fpu.fpr[VAR_15].vsr[2],
       &VAR_11->mc_vsxfpreg[VAR_15], sizeof(double));
  }
 }

 if (VAR_11->mc_flags & VAR_6) {
  if ((VAR_12->pcb_flags & VAR_3) != VAR_3) {
   FUNC_2();
   FUNC_4(VAR_10);
   FUNC_3();
  }
  VAR_12->pcb_vec.vscr = VAR_11->mc_vscr;
  VAR_12->pcb_vec.vrsave = VAR_11->mc_vrsave;
  FUNC_5(VAR_12->pcb_vec.vr, VAR_11->mc_avec, sizeof(VAR_11->mc_avec));
 }

 return (0);
}
