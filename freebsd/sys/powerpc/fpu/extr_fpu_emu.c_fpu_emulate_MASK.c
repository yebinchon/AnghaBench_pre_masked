
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ i_xo; } ;
struct TYPE_3__ {scalar_t__ i_opcd; } ;
union instr {int i_int; TYPE_2__ i_x; TYPE_1__ i_any; } ;
struct trapframe {scalar_t__ srr0; } ;
struct fpu {int dummy; } ;
struct fpemu {scalar_t__ fe_cx; struct fpu* fe_fpstate; } ;


 int FUNC_0 (int,char*) ;


 int VAR_0 ;
 int VAR_1 ;

 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_1 (void*,int*,int) ;
 int VAR_9 ;
 int FUNC_2 (struct trapframe*,struct fpemu*,union instr*) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (scalar_t__,int) ;
 int FUNC_5 (char*,...) ;

int
FUNC_6(struct trapframe *VAR_10, struct fpu *VAR_11)
{
 union instr VAR_12;
 struct fpemu VAR_13;
 int VAR_14;


 VAR_13.fe_fpstate = VAR_11;
 VAR_13.fe_cx = 0;



 if (FUNC_1((void *) (VAR_10->srr0), &VAR_12.i_int, sizeof (VAR_12.i_int))) {



  return VAR_7;
 }

 FUNC_0(VAR_0, ("fpu_emulate: emulating insn %x at %p\n",
     VAR_12.i_int, (void *)VAR_10->srr0));


 if ((VAR_12.i_any.i_opcd == VAR_3) ||
     ((VAR_12.i_any.i_opcd == VAR_4) &&
     (VAR_12.i_x.i_xo == VAR_2))) {

  FUNC_0(VAR_0, ("fpu_emulate: SIGTRAP\n"));
  return (VAR_8);
 }
 VAR_14 = 0;
 switch (FUNC_2(VAR_10, &VAR_13, &VAR_12)) {
 case 0:
  FUNC_0(VAR_0, ("fpu_emulate: success\n"));
  VAR_10->srr0 += 4;
  break;

 case 129:
  FUNC_0(VAR_0, ("fpu_emulate: SIGFPE\n"));
  VAR_14 = VAR_5;
  break;

 case 130:
  FUNC_0(VAR_0, ("fpu_emulate: SIGSEGV\n"));
  VAR_14 = VAR_7;
  break;

 case 128:
 default:
  FUNC_0(VAR_0, ("fpu_emulate: SIGILL\n"));







  VAR_14 = VAR_6;




  break;
 }

 return (VAR_14);
}
