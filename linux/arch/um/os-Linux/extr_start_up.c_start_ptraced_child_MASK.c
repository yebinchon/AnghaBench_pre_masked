
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int) ;
 int VAR_1 ;
 int FUNC_3 (char*,int) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 int VAR_2 ;
 int FUNC_8 (int,int*,int ) ;

__attribute__((used)) static int FUNC_9(void)
{
 int VAR_3, VAR_4, VAR_5;

 FUNC_5(VAR_2);

 VAR_3 = FUNC_6();
 if (VAR_3 == 0)
  FUNC_7();
 else if (VAR_3 < 0)
  FUNC_4("start_ptraced_child : fork failed");

 FUNC_0(VAR_4 = FUNC_8(VAR_3, &VAR_5, VAR_1));
 if (VAR_4 < 0)
  FUNC_4("check_ptrace : waitpid failed");
 if (!FUNC_1(VAR_5) || (FUNC_2(VAR_5) != VAR_0))
  FUNC_3("check_ptrace : expected SIGSTOP, got status = %d",
        VAR_5);

 return VAR_3;
}
