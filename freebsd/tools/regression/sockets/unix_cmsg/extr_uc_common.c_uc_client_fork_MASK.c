
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ pid_t ;
struct TYPE_2__ {int** sync_fd; scalar_t__ client_pid; char* proc_name; int server_flag; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 () ;
 scalar_t__ FUNC_2 (int*) ;
 TYPE_1__ VAR_4 ;
 int FUNC_3 (char*) ;

int
FUNC_4(void)
{
 int VAR_5, VAR_6;

 if (FUNC_2(VAR_4.sync_fd[VAR_3]) < 0 ||
     FUNC_2(VAR_4.sync_fd[VAR_0]) < 0) {
  FUNC_3("client_fork: pipe");
  return (-1);
 }
 VAR_4.client_pid = FUNC_1();
 if (VAR_4.client_pid == (pid_t)-1) {
  FUNC_3("client_fork: fork");
  return (-1);
 }
 if (VAR_4.client_pid == 0) {
  VAR_4.proc_name = "CLIENT";
  VAR_4.server_flag = 0;
  VAR_5 = VAR_4.sync_fd[VAR_3][VAR_1];
  VAR_6 = VAR_4.sync_fd[VAR_0][VAR_2];
 } else {
  VAR_5 = VAR_4.sync_fd[VAR_3][VAR_2];
  VAR_6 = VAR_4.sync_fd[VAR_0][VAR_1];
 }
 if (FUNC_0(VAR_5) < 0 || FUNC_0(VAR_6) < 0) {
  FUNC_3("client_fork: close");
  return (-1);
 }
 return (VAR_4.client_pid != 0);
}
