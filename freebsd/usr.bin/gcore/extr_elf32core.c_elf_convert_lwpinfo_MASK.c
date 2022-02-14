
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ptrace_lwpinfo32 {int pl_syscall_narg; int pl_syscall_code; int pl_child_pid; int pl_tdname; int pl_siginfo; int pl_siglist; int pl_sigmask; int pl_flags; int pl_event; int pl_lwpid; } ;
struct ptrace_lwpinfo {int pl_syscall_narg; int pl_syscall_code; int pl_child_pid; int pl_tdname; int pl_siginfo; int pl_siglist; int pl_sigmask; int pl_flags; int pl_event; int pl_lwpid; } ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int ,int ,int) ;

__attribute__((used)) static void
FUNC_2(struct ptrace_lwpinfo32 *VAR_0, struct ptrace_lwpinfo *VAR_1)
{

 VAR_0->pl_lwpid = VAR_1->pl_lwpid;
 VAR_0->pl_event = VAR_1->pl_event;
 VAR_0->pl_flags = VAR_1->pl_flags;
 VAR_0->pl_sigmask = VAR_1->pl_sigmask;
 VAR_0->pl_siglist = VAR_1->pl_siglist;
 FUNC_0(&VAR_0->pl_siginfo, &VAR_1->pl_siginfo);
 FUNC_1(VAR_0->pl_tdname, VAR_1->pl_tdname, sizeof(VAR_0->pl_tdname));
 VAR_0->pl_child_pid = VAR_1->pl_child_pid;
 VAR_0->pl_syscall_code = VAR_1->pl_syscall_code;
 VAR_0->pl_syscall_narg = VAR_1->pl_syscall_narg;
}
