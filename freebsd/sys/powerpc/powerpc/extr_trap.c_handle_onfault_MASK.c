
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct trapframe {int srr0; int* fixreg; int cr; } ;
struct thread {TYPE_1__* td_pcb; } ;
typedef int register_t ;
typedef TYPE_2__* jmp_buf ;
struct TYPE_4__ {int* _jb; } ;
struct TYPE_3__ {TYPE_2__** pcb_onfault; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 int FUNC_0 (int*,int*,int) ;
 struct thread* VAR_5 ;

__attribute__((used)) static int
FUNC_1(struct trapframe *VAR_6)
{
 struct thread *VAR_7;
 jmp_buf *VAR_8;

 VAR_7 = VAR_5;
 VAR_8 = VAR_7->td_pcb->pcb_onfault;
 if (VAR_8 != ((void*)0)) {
  VAR_6->srr0 = (*VAR_8)->_jb[VAR_1];
  VAR_6->fixreg[1] = (*VAR_8)->_jb[VAR_2];
  VAR_6->fixreg[2] = (*VAR_8)->_jb[VAR_4];
  VAR_6->fixreg[3] = 1;
  VAR_6->cr = (*VAR_8)->_jb[VAR_0];
  FUNC_0(&(*VAR_8)->_jb[VAR_3], &VAR_6->fixreg[14],
      18 * sizeof(register_t));
  VAR_7->td_pcb->pcb_onfault = ((void*)0);
  return (1);
 }
 return (0);
}
