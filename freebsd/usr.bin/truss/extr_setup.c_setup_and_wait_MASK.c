
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct trussinfo {int dummy; } ;
typedef int pid_t ;


 int VAR_0 ;
 int FUNC_0 (int,char*,...) ;
 int FUNC_1 (char*,char**) ;
 int FUNC_2 (struct trussinfo*,int,int ) ;
 int FUNC_3 (int ,int ,int ,int ) ;
 int FUNC_4 () ;
 scalar_t__ FUNC_5 (int,int *,int ) ;

void
FUNC_6(struct trussinfo *VAR_1, char *VAR_2[])
{
 pid_t VAR_3;

 VAR_3 = FUNC_4();
 if (VAR_3 == -1)
  FUNC_0(1, "fork failed");
 if (VAR_3 == 0) {
  FUNC_3(VAR_0, 0, 0, 0);
  FUNC_1(VAR_2[0], VAR_2);
  FUNC_0(1, "execvp %s", VAR_2[0]);
 }


 if (FUNC_5(VAR_3, ((void*)0), 0) < 0)
  FUNC_0(1, "unexpect stop in waitpid");

 FUNC_2(VAR_1, VAR_3, 0);
}
