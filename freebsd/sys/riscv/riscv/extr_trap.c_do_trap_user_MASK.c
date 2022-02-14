
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct trapframe {int tf_scause; int tf_sepc; int tf_stval; int tf_sstatus; } ;
struct thread {struct pcb* td_pcb; struct trapframe* td_frame; } ;
struct pcb {int pcb_fpflags; } ;


 int FUNC_0 (int ,char*,struct thread*,int,struct trapframe*) ;






 int VAR_0 ;

 int VAR_1 ;


 int VAR_2 ;
 int FUNC_1 (int,char*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_2 (struct thread*,int ,int ,void*) ;
 struct thread* VAR_12 ;
 int FUNC_3 (struct trapframe*,int) ;
 int FUNC_4 (struct trapframe*) ;
 int FUNC_5 () ;
 int FUNC_6 (char*,int,int ) ;
 int FUNC_7 (struct trapframe*) ;
 int FUNC_8 (struct trapframe*) ;
 int FUNC_9 (struct thread*,struct trapframe*) ;

void
FUNC_10(struct trapframe *VAR_13)
{
 uint64_t VAR_14;
 struct thread *VAR_15;
 uint64_t VAR_16;
 struct pcb *VAR_17;

 VAR_15 = VAR_12;
 VAR_15->td_frame = VAR_13;
 VAR_17 = VAR_15->td_pcb;


 __asm __volatile("csrr %0, sstatus" : "=&r" (VAR_16));
 FUNC_1((VAR_16 & (VAR_10 | VAR_9)) == 0,
   ("We must came from U mode with interrupts disabled"));

 VAR_14 = (VAR_13->tf_scause & VAR_1);
 if (VAR_13->tf_scause & VAR_0) {

  FUNC_7(VAR_13);
  return;
 }

 FUNC_0(VAR_3, "do_trap_user: curthread: %p, sepc: %lx, frame: %p",
     VAR_12, VAR_13->tf_sepc, VAR_13);

 switch(VAR_14) {
 case 134:
 case 133:
 case 135:
 case 129:
 case 130:
 case 131:
  FUNC_3(VAR_13, 1);
  break;
 case 128:
  VAR_13->tf_sepc += 4;
  FUNC_8(VAR_13);
  break;
 case 132:
  FUNC_2(VAR_15, VAR_5, VAR_2, (void *)VAR_13->tf_sepc);
  FUNC_9(VAR_15, VAR_13);
  break;
 case 136:
  FUNC_2(VAR_15, VAR_6, VAR_11, (void *)VAR_13->tf_sepc);
  FUNC_9(VAR_15, VAR_13);
  break;
 default:
  FUNC_4(VAR_13);
  FUNC_6("Unknown userland exception %x, trap value %lx\n",
      VAR_14, VAR_13->tf_stval);
 }
}
