
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct trussinfo {int outfile; struct threadinfo* curthread; } ;
struct threadinfo {int after; } ;
struct TYPE_3__ {scalar_t__ si_code; int si_status; } ;
typedef TYPE_1__ siginfo_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int ,char*,int,...) ;
 int FUNC_2 (struct trussinfo*) ;

__attribute__((used)) static void
FUNC_3(struct trussinfo *VAR_3, siginfo_t *VAR_4)
{
 struct threadinfo *VAR_5;

 VAR_5 = VAR_3->curthread;
 FUNC_0(VAR_2, &VAR_5->after);
 FUNC_2(VAR_3);
 if (VAR_4->si_code == VAR_1)
  FUNC_1(VAR_3->outfile, "process exit, rval = %u\n",
      VAR_4->si_status);
 else
  FUNC_1(VAR_3->outfile, "process killed, signal = %u%s\n",
      VAR_4->si_status, VAR_4->si_code == VAR_0 ?
      " (core dumped)" : "");
}
