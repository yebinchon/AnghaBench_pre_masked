
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct test {int dummy; } ;
typedef int pid_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (int,int *,int ) ;
 int FUNC_2 (char*,int) ;

void
FUNC_3(int VAR_3, int VAR_4, struct test *VAR_5)
{
 pid_t VAR_6;

 if (VAR_2) {
  (void)FUNC_0(VAR_1, VAR_0);
  while (1) {
   VAR_6 = FUNC_1(VAR_1, ((void*)0), 0);
   if (VAR_6 == -1)
    FUNC_2("waitpid(%d (test), NULL, 0)",
        VAR_1);
   if (VAR_6 == VAR_1)
    break;
  }
  VAR_2 = 0;
  VAR_1 = -1;
 }
}
