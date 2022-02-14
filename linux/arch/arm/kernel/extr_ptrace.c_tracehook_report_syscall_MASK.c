
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pt_regs {unsigned long ARM_ip; } ;
typedef enum ptrace_syscall_dir { ____Placeholder_ptrace_syscall_dir } ptrace_syscall_dir ;
struct TYPE_2__ {int syscall; } ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 () ;
 scalar_t__ FUNC_1 (struct pt_regs*) ;
 int FUNC_2 (struct pt_regs*,int ) ;

__attribute__((used)) static void FUNC_3(struct pt_regs *VAR_1,
        enum ptrace_syscall_dir VAR_2)
{
 unsigned long VAR_3;





 VAR_3 = VAR_1->ARM_ip;
 VAR_1->ARM_ip = VAR_2;

 if (VAR_2 == VAR_0)
  FUNC_2(VAR_1, 0);
 else if (FUNC_1(VAR_1))
  FUNC_0()->syscall = -1;

 VAR_1->ARM_ip = VAR_3;
}
