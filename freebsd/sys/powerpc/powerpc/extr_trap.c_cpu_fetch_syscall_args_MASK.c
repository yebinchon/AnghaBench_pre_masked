
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint64_t ;
typedef int uint32_t ;
typedef int u_register_t ;
struct trapframe {size_t* fixreg; } ;
struct syscall_args {size_t code; int narg; int* args; TYPE_2__* callp; } ;
struct thread {size_t* td_retval; struct syscall_args td_sa; struct trapframe* td_frame; struct proc* td_proc; } ;
struct proc {TYPE_1__* p_sysent; } ;
typedef void* register_t ;
typedef scalar_t__ caddr_t ;
struct TYPE_4__ {int sy_narg; } ;
struct TYPE_3__ {size_t sv_size; TYPE_2__* sv_table; } ;


 int VAR_0 ;
 int FUNC_0 (size_t) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (struct proc*,int ) ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 int FUNC_2 (int ,int*,int) ;

int
FUNC_3(struct thread *VAR_5)
{
 struct proc *VAR_6;
 struct trapframe *VAR_7;
 struct syscall_args *VAR_8;
 caddr_t VAR_9;
 size_t VAR_10;
 int VAR_11, VAR_12, VAR_13;

 VAR_6 = VAR_5->td_proc;
 VAR_7 = VAR_5->td_frame;
 VAR_8 = &VAR_5->td_sa;

 VAR_8->code = VAR_7->fixreg[0];
 VAR_9 = (caddr_t)(VAR_7->fixreg + VAR_0);
 VAR_12 = VAR_1;

 if (VAR_8->code == VAR_4) {




  VAR_8->code = *(register_t *) VAR_9;
  VAR_9 += sizeof(register_t);
  VAR_12 -= 1;
 } else if (VAR_8->code == VAR_3) {





  if (FUNC_1(VAR_6, VAR_2)) {
   VAR_9 += sizeof(register_t);
   VAR_8->code = *(register_t *) VAR_9;
   VAR_9 += sizeof(register_t);
   VAR_12 -= 2;
  } else {
   VAR_8->code = *(register_t *) VAR_9;
   VAR_9 += sizeof(register_t);
   VAR_12 -= 1;
  }
 }

 if (VAR_8->code >= VAR_6->p_sysent->sv_size)
  VAR_8->callp = &VAR_6->p_sysent->sv_table[0];
 else
  VAR_8->callp = &VAR_6->p_sysent->sv_table[VAR_8->code];

 VAR_8->narg = VAR_8->callp->sy_narg;

 if (FUNC_1(VAR_6, VAR_2)) {
  VAR_10 = sizeof(uint32_t);

  for (VAR_13 = 0; VAR_13 < VAR_12; VAR_13++)
   VAR_8->args[VAR_13] = ((u_register_t *)(VAR_9))[VAR_13] &
       0xffffffff;
 } else {
  VAR_10 = sizeof(uint64_t);

  for (VAR_13 = 0; VAR_13 < VAR_12; VAR_13++)
   VAR_8->args[VAR_13] = ((u_register_t *)(VAR_9))[VAR_13];
 }

 if (VAR_8->narg > VAR_12)
  VAR_11 = FUNC_2(FUNC_0(VAR_7->fixreg[1]), VAR_8->args + VAR_12,
          (VAR_8->narg - VAR_12) * VAR_10);
 else
  VAR_11 = 0;
 if (VAR_11 == 0) {
  VAR_5->td_retval[0] = 0;
  VAR_5->td_retval[1] = VAR_7->fixreg[VAR_0 + 1];
 }
 return (VAR_11);
}
