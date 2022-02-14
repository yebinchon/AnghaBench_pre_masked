
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct trapframe {scalar_t__ srr0; int * fixreg; } ;
struct thread {struct pcb* td_pcb; } ;
struct pcb {int pcb_flags; scalar_t__ pcb_lastill; int pcb_fpu; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int *,int) ;
 int VAR_5 ;
 int FUNC_2 (int,int,struct trapframe*) ;
 int FUNC_3 (int,int,struct trapframe*) ;
 int FUNC_4 (struct thread*) ;
 int FUNC_5 (struct trapframe*,int *) ;
 int FUNC_6 (void*) ;
 int FUNC_7 () ;
 int FUNC_8 (int ,scalar_t__,int) ;
 int FUNC_9 () ;
 int FUNC_10 (struct thread*) ;

int
FUNC_11(struct trapframe *VAR_6, struct thread *VAR_7)
{
 struct pcb *VAR_8;
 uint32_t VAR_9;
 int VAR_10, VAR_11;
 int VAR_12, VAR_13;

 VAR_9 = FUNC_6((void *)VAR_6->srr0);
 VAR_11 = VAR_3;

 if ((VAR_9 & 0xfc1fffff) == 0x7c1f42a6) {
  VAR_10 = (VAR_9 & ~0xfc1fffff) >> 21;
  VAR_6->fixreg[VAR_10] = FUNC_7();
  VAR_6->srr0 += 4;
  return (0);
 } else if ((VAR_9 & VAR_4) == 0x7c0002a6) {
  VAR_12 = (VAR_9 & 0x3e00000) >> 21;
  VAR_13 = (VAR_9 & 0x1ff800) >> 16;
  return FUNC_2(VAR_13, VAR_12, VAR_6);
 } else if ((VAR_9 & VAR_4) == 0x7c0003a6) {
  VAR_12 = (VAR_9 & 0x3e00000) >> 21;
  VAR_13 = (VAR_9 & 0x1ff800) >> 16;
  return FUNC_3(VAR_13, VAR_12, VAR_6);
 } else if ((VAR_9 & 0xfc000ffe) == 0x7c0004ac) {
  FUNC_9();
  VAR_6->srr0 += 4;
  return (0);
 }

 VAR_8 = VAR_7->td_pcb;
 if (VAR_11 == VAR_3) {
  if (VAR_8->pcb_lastill != VAR_6->srr0) {

   VAR_11 = 0;
   FUNC_8(FUNC_0(VAR_5), VAR_6->srr0, 4);
   VAR_8->pcb_lastill = VAR_6->srr0;
  }
 }

 return (VAR_11);
}
