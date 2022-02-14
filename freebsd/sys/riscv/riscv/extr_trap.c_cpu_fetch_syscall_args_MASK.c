
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct syscall_args {size_t code; int narg; int args; TYPE_3__* callp; } ;
struct thread {scalar_t__* td_retval; TYPE_1__* td_frame; struct syscall_args td_sa; struct proc* td_proc; } ;
struct proc {TYPE_2__* p_sysent; } ;
typedef int register_t ;
struct TYPE_6__ {int sy_narg; } ;
struct TYPE_5__ {size_t sv_size; TYPE_3__* sv_table; } ;
struct TYPE_4__ {size_t* tf_t; int * tf_a; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int FUNC_0 (int ,int *,int) ;
 int FUNC_1 (char*,int) ;

int
FUNC_2(struct thread *VAR_3)
{
 struct proc *VAR_4;
 register_t *VAR_5;
 struct syscall_args *VAR_6;
 int VAR_7;

 VAR_7 = VAR_0;
 VAR_4 = VAR_3->td_proc;
 VAR_6 = &VAR_3->td_sa;
 VAR_5 = &VAR_3->td_frame->tf_a[0];

 VAR_6->code = VAR_3->td_frame->tf_t[0];

 if (VAR_6->code == VAR_2 || VAR_6->code == VAR_1) {
  VAR_6->code = *VAR_5++;
  VAR_7--;
 }

 if (VAR_6->code >= VAR_4->p_sysent->sv_size)
  VAR_6->callp = &VAR_4->p_sysent->sv_table[0];
 else
  VAR_6->callp = &VAR_4->p_sysent->sv_table[VAR_6->code];

 VAR_6->narg = VAR_6->callp->sy_narg;
 FUNC_0(VAR_6->args, VAR_5, VAR_7 * sizeof(register_t));
 if (VAR_6->narg > VAR_7)
  FUNC_1("TODO: Could we have more then %d args?", VAR_0);

 VAR_3->td_retval[0] = 0;
 VAR_3->td_retval[1] = 0;

 return (0);
}
