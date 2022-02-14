
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct trapframe {int tf_fprs; int tf_y; int tf_tstate; int tf_tpc; int tf_tnpc; int tf_gsr; int tf_fsr; int * tf_out; int * tf_global; } ;
struct thread {struct pcb* td_pcb; struct trapframe* td_frame; } ;
struct pcb {int pcb_flags; int pcb_ufp; } ;
struct TYPE_3__ {long _mc_flags; int _mc_fprs; int mc_fp; int _mc_y; int _mc_tstate; int _mc_tpc; int _mc_tnpc; int _mc_gsr; int _mc_fsr; int * mc_out; int * mc_global; } ;
typedef TYPE_1__ mcontext_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 long VAR_3 ;
 long VAR_4 ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 () ;

int
FUNC_3(struct thread *VAR_5, mcontext_t *VAR_6)
{
 struct trapframe *VAR_7;
 struct pcb *VAR_8;

 if (!FUNC_0(VAR_6->_mc_tstate) ||
     (VAR_6->_mc_flags & ((1L << VAR_4) - 1)) != VAR_3)
  return (VAR_0);
 VAR_7 = VAR_5->td_frame;
 VAR_8 = VAR_5->td_pcb;

 FUNC_2();






 VAR_7->tf_global[1] = VAR_6->mc_global[1];
 VAR_7->tf_global[2] = VAR_6->mc_global[2];
 VAR_7->tf_global[3] = VAR_6->mc_global[3];
 VAR_7->tf_global[4] = VAR_6->mc_global[4];
 VAR_7->tf_global[5] = VAR_6->mc_global[5];
 VAR_7->tf_global[6] = VAR_6->mc_global[6];
 VAR_7->tf_out[0] = VAR_6->mc_out[0];
 VAR_7->tf_out[1] = VAR_6->mc_out[1];
 VAR_7->tf_out[2] = VAR_6->mc_out[2];
 VAR_7->tf_out[3] = VAR_6->mc_out[3];
 VAR_7->tf_out[4] = VAR_6->mc_out[4];
 VAR_7->tf_out[5] = VAR_6->mc_out[5];
 VAR_7->tf_out[6] = VAR_6->mc_out[6];
 VAR_7->tf_out[7] = VAR_6->mc_out[7];
 VAR_7->tf_fprs = VAR_6->_mc_fprs;
 VAR_7->tf_fsr = VAR_6->_mc_fsr;
 VAR_7->tf_gsr = VAR_6->_mc_gsr;
 VAR_7->tf_tnpc = VAR_6->_mc_tnpc;
 VAR_7->tf_tpc = VAR_6->_mc_tpc;
 VAR_7->tf_tstate = VAR_6->_mc_tstate;
 VAR_7->tf_y = VAR_6->_mc_y;
 if ((VAR_6->_mc_fprs & VAR_1) != 0) {
  VAR_7->tf_fprs = 0;
  FUNC_1(VAR_6->mc_fp, VAR_8->pcb_ufp, sizeof(VAR_8->pcb_ufp));
  VAR_8->pcb_flags |= VAR_2;
 }
 return (0);
}
