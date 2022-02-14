
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct trapframe {int tf_scause; int tf_stval; int tf_sepc; } ;


 int FUNC_0 (int ,char*,int ,int ,struct trapframe*) ;





 int VAR_0 ;

 int VAR_1 ;

 int FUNC_1 (int,char*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (struct trapframe*,int ) ;
 int FUNC_3 (struct trapframe*) ;
 scalar_t__ FUNC_4 (struct trapframe*,int) ;
 int FUNC_5 (struct trapframe*) ;
 int FUNC_6 (int,int ,struct trapframe*) ;
 int FUNC_7 (char*,...) ;
 int FUNC_8 (struct trapframe*) ;
 scalar_t__ FUNC_9 (struct trapframe*,int) ;

void
FUNC_10(struct trapframe *VAR_6)
{
 uint64_t VAR_7;
 uint64_t VAR_8;


 __asm __volatile("csrr %0, sstatus" : "=&r" (VAR_8));
 FUNC_1((VAR_8 & (VAR_4 | VAR_3)) == VAR_4,
   ("We must came from S mode with interrupts disabled"));

 VAR_7 = (VAR_6->tf_scause & VAR_1);
 if (VAR_6->tf_scause & VAR_0) {

  FUNC_8(VAR_6);
  return;
 }






 FUNC_0(VAR_2, "do_trap_supervisor: curthread: %p, sepc: %lx, frame: %p",
     VAR_5, VAR_6->tf_sepc, VAR_6);

 switch(VAR_7) {
 case 132:
 case 131:
 case 133:
 case 128:
 case 129:
  FUNC_2(VAR_6, 0);
  break;
 case 134:
  FUNC_5(VAR_6);
  FUNC_7("No debugger in kernel.\n");

  break;
 case 130:
  FUNC_5(VAR_6);
  FUNC_7("Illegal instruction at 0x%016lx\n", VAR_6->tf_sepc);
  break;
 default:
  FUNC_5(VAR_6);
  FUNC_7("Unknown kernel exception %x trap value %lx\n",
      VAR_7, VAR_6->tf_stval);
 }
}
