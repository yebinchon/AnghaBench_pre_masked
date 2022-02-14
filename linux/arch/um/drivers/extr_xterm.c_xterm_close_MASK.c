
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xterm_chan {int pid; int helper_pid; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int,int) ;

__attribute__((used)) static void FUNC_2(int VAR_0, void *VAR_1)
{
 struct xterm_chan *VAR_2 = VAR_1;

 if (VAR_2->pid != -1)
  FUNC_1(VAR_2->pid, 1);
 VAR_2->pid = -1;

 if (VAR_2->helper_pid != -1)
  FUNC_1(VAR_2->helper_pid, 0);
 VAR_2->helper_pid = -1;

 FUNC_0(VAR_0);
}
