
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct trussinfo {int outfile; struct threadinfo* curthread; } ;
struct threadinfo {int after; } ;
struct ptrace_lwpinfo {scalar_t__ pl_event; int pl_flags; int pl_siginfo; } ;
struct TYPE_3__ {int si_status; } ;
typedef TYPE_1__ siginfo_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int ,char*,...) ;
 int FUNC_3 (struct trussinfo*) ;
 char* FUNC_4 (int) ;

__attribute__((used)) static void
FUNC_5(struct trussinfo *VAR_3, siginfo_t *VAR_4, struct ptrace_lwpinfo *VAR_5)
{
 struct threadinfo *VAR_6;
 const char *VAR_7;

 VAR_6 = VAR_3->curthread;
 FUNC_0(VAR_0, &VAR_6->after);
 FUNC_3(VAR_3);
 VAR_7 = FUNC_4(VAR_4->si_status);
 if (VAR_7 == ((void*)0))
  VAR_7 = "?";
 FUNC_2(VAR_3->outfile, "SIGNAL %u (%s)", VAR_4->si_status, VAR_7);
 if (VAR_5->pl_event == VAR_1 && VAR_5->pl_flags & VAR_2)
  FUNC_1(VAR_3->outfile, &VAR_5->pl_siginfo);
 FUNC_2(VAR_3->outfile, "\n");

}
