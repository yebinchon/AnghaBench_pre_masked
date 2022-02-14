
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct trapframe {int dummy; } ;
struct thread {int * td_frame; struct pcb* td_pcb; } ;
struct TYPE_9__ {int * vr; int vrsave; int vscr; } ;
struct TYPE_8__ {TYPE_1__* fpr; int fpscr; } ;
struct pcb {int pcb_flags; TYPE_3__ pcb_vec; TYPE_2__ pcb_fpu; } ;
struct TYPE_10__ {int mc_len; int * mc_avec; int mc_vrsave; int mc_vscr; int mc_flags; int * mc_vsxfpreg; int * mc_fpreg; int mc_fpscr; scalar_t__* mc_gpr; int mc_frame; int mc_vers; } ;
typedef TYPE_4__ mcontext_t ;
struct TYPE_7__ {int * vsr; int fpr; } ;


 int VAR_0 ;
 int FUNC_0 (int,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 struct thread* VAR_8 ;
 int FUNC_3 (int *,int *,int) ;
 int FUNC_4 (TYPE_4__*,int ,int) ;
 int FUNC_5 (struct thread*) ;
 int FUNC_6 (struct thread*) ;

__attribute__((used)) static int
FUNC_7(struct thread *VAR_9, mcontext_t *VAR_10, int VAR_11)
{
 struct pcb *VAR_12;
 int VAR_13;

 VAR_12 = VAR_9->td_pcb;

 FUNC_4(VAR_10, 0, sizeof(mcontext_t));

 VAR_10->mc_vers = VAR_7;
 VAR_10->mc_flags = 0;
 FUNC_3(&VAR_10->mc_frame, VAR_9->td_frame, sizeof(struct trapframe));
 if (VAR_11 & VAR_0) {
  VAR_10->mc_gpr[3] = 0;
  VAR_10->mc_gpr[4] = 0;
 }







 if (VAR_12->pcb_flags & VAR_1) {
  if (VAR_12->pcb_flags & VAR_2) {
   FUNC_0(VAR_9 == VAR_8,
    ("get_mcontext: fp save not curthread"));
   FUNC_1();
   FUNC_5(VAR_9);
   FUNC_2();
  }
  VAR_10->mc_flags |= VAR_6;
  FUNC_3(&VAR_10->mc_fpscr, &VAR_12->pcb_fpu.fpscr, sizeof(double));
  for (VAR_13 = 0; VAR_13 < 32; VAR_13++)
   FUNC_3(&VAR_10->mc_fpreg[VAR_13], &VAR_12->pcb_fpu.fpr[VAR_13].fpr,
       sizeof(double));
 }

 if (VAR_12->pcb_flags & VAR_4) {
  for (VAR_13 = 0; VAR_13 < 32; VAR_13++)
   FUNC_3(&VAR_10->mc_vsxfpreg[VAR_13],
       &VAR_12->pcb_fpu.fpr[VAR_13].vsr[2], sizeof(double));
 }





 if (VAR_12->pcb_flags & VAR_3) {
  FUNC_0(VAR_9 == VAR_8,
   ("get_mcontext: fp save not curthread"));
  FUNC_1();
  FUNC_6(VAR_9);
  FUNC_2();
  VAR_10->mc_flags |= VAR_5;
  VAR_10->mc_vscr = VAR_12->pcb_vec.vscr;
  VAR_10->mc_vrsave = VAR_12->pcb_vec.vrsave;
  FUNC_3(VAR_10->mc_avec, VAR_12->pcb_vec.vr, sizeof(VAR_10->mc_avec));
 }

 VAR_10->mc_len = sizeof(*VAR_10);

 return (0);
}
