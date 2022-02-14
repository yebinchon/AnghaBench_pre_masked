
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt_regs {unsigned long* regs; } ;
typedef enum ptrace_syscall_dir { ____Placeholder_ptrace_syscall_dir } ptrace_syscall_dir ;


 int VAR_0 ;
 int FUNC_0 (struct pt_regs*) ;
 scalar_t__ FUNC_1 () ;
 scalar_t__ FUNC_2 (struct pt_regs*) ;
 int FUNC_3 (struct pt_regs*,int ) ;

__attribute__((used)) static void FUNC_4(struct pt_regs *VAR_1,
         enum ptrace_syscall_dir VAR_2)
{
 int VAR_3;
 unsigned long VAR_4;





 VAR_3 = (FUNC_1() ? 12 : 7);
 VAR_4 = VAR_1->regs[VAR_3];
 VAR_1->regs[VAR_3] = VAR_2;

 if (VAR_2 == VAR_0)
  FUNC_3(VAR_1, 0);
 else if (FUNC_2(VAR_1))
  FUNC_0(VAR_1);

 VAR_1->regs[VAR_3] = VAR_4;
}
