
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_long ;
struct trapframe {int* tf_out; } ;
struct thread {TYPE_1__* td_proc; } ;
struct rwindow {int* rw_in; } ;
struct TYPE_2__ {int p_comm; } ;


 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int ,char*,struct thread*,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (void*,struct rwindow*,int) ;
 int FUNC_3 (struct thread*) ;

int
FUNC_4(struct thread *VAR_3, struct trapframe *VAR_4, int VAR_5)
{
 struct rwindow VAR_6;
 u_long VAR_7;
 int VAR_8;
 int VAR_9;

 FUNC_1(VAR_0, "rwindow_load: td=%p (%s) n=%d",
     VAR_3, VAR_3->td_proc->p_comm, VAR_5);





 if ((VAR_8 = FUNC_3(VAR_3)) != 0)
  return (VAR_8);
 VAR_7 = VAR_4->tf_out[6];
 for (VAR_9 = 0; VAR_9 < VAR_5; VAR_9++) {
  FUNC_0(VAR_0, "rwindow_load: usp=%#lx", VAR_7);
  VAR_7 += VAR_2;
  if ((VAR_8 = (VAR_7 & 0x7)) != 0)
   break;
  VAR_8 = FUNC_2((void *)VAR_7, &VAR_6, sizeof VAR_6);
  VAR_7 = VAR_6.rw_in[6];
 }
 FUNC_0(VAR_0, "rwindow_load: error=%d", VAR_8);
 return (VAR_8 == 0 ? 0 : VAR_1);
}
