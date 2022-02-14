
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int dummy; } ;
struct pcb {scalar_t__ pcb_sp; } ;
struct frame {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct thread*,struct frame*,int) ;
 struct pcb* FUNC_1 (struct thread*) ;

int
FUNC_2(struct thread *VAR_1, int VAR_2)
{
 struct pcb *VAR_3;

 VAR_3 = FUNC_1(VAR_1);
 return (FUNC_0(VAR_1,
     (struct frame *)(VAR_3->pcb_sp + VAR_0), VAR_2));
}
