
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ pid_t ;
struct TYPE_2__ {int client_pid; int ** sync_fd; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (int) ;
 scalar_t__ FUNC_5 (int ) ;
 TYPE_1__ VAR_5 ;
 int FUNC_6 (char*) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (char*,...) ;
 scalar_t__ FUNC_9 (int ,int*,int ) ;

int
FUNC_10(void)
{
 int VAR_6;
 pid_t VAR_7;

 FUNC_6("waiting for client");

 if (FUNC_5(VAR_5.sync_fd[VAR_4][VAR_2]) < 0 ||
     FUNC_5(VAR_5.sync_fd[VAR_1][VAR_3]) < 0) {
  FUNC_7("client_wait: close");
  return (-1);
 }

 VAR_7 = FUNC_9(VAR_5.client_pid, &VAR_6, 0);
 if (VAR_7 == (pid_t)-1) {
  FUNC_7("client_wait: waitpid");
  return (-1);
 }

 if (FUNC_2(VAR_6)) {
  if (FUNC_1(VAR_6) != VAR_0) {
   FUNC_8("client exit status is %d",
       FUNC_1(VAR_6));
   return (-FUNC_1(VAR_6));
  }
 } else {
  if (FUNC_3(VAR_6))
   FUNC_8("abnormal termination of client, signal %d%s",
       FUNC_4(VAR_6), FUNC_0(VAR_6) ?
       " (core file generated)" : "");
  else
   FUNC_8("termination of client, unknown status");
  return (-1);
 }

 return (0);
}
