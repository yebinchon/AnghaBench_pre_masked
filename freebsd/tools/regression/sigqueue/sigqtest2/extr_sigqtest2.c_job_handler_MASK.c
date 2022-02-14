
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ si_code; int si_pid; } ;
typedef TYPE_1__ siginfo_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int VAR_4 ;
 int FUNC_1 (int,char*) ;
 int VAR_5 ;
 int FUNC_2 (int,int ) ;
 int FUNC_3 (char*,int) ;
 int VAR_6 ;
 int FUNC_4 (int,int*,int ) ;

void
FUNC_5(int VAR_7, siginfo_t *VAR_8, void *VAR_9)
{
 int VAR_10;
 int VAR_11;

 if (VAR_8->si_code == VAR_2) {
  FUNC_3("%d: stop received\n", VAR_8->si_pid);
  VAR_6 = 1;
  FUNC_2(VAR_8->si_pid, VAR_3);
 } else if (VAR_8->si_code == VAR_1) {
  FUNC_3("%d: exit received\n", VAR_8->si_pid);
  VAR_11 = FUNC_4(VAR_8->si_pid, &VAR_10, 0);
  if (VAR_11 == -1)
   FUNC_1(1, "waitpid");
  if (!FUNC_0(VAR_10))
   FUNC_1(1, "!WIFEXITED(status)");
  VAR_5 = 1;
 } else if (VAR_8->si_code == VAR_0) {
  FUNC_3("%d: cont received\n", VAR_8->si_pid);
  VAR_4 = 1;
 }
}
