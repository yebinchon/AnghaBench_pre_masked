
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {struct pcb* td_pcb; } ;
struct pcb {int pcb_fpflags; int pcb_fcsr; int pcb_x; } ;
struct fpreg {int fp_fcsr; int fp_x; } ;


 int VAR_0 ;
 struct thread* VAR_1 ;
 int FUNC_0 (struct thread*) ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (struct fpreg*,int ,int) ;

int
FUNC_3(struct thread *VAR_2, struct fpreg *VAR_3)
{
  FUNC_2(VAR_3, 0, sizeof(*VAR_3));

 return (0);
}
