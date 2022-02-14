
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pid_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 (int,int*,int ) ;

__attribute__((used)) static int
FUNC_3(pid_t VAR_0)
{
 int VAR_1;

 VAR_0 = FUNC_2(VAR_0, &VAR_1, 0);
 if (VAR_0 == -1)
  FUNC_1(1, "waitpid");

 return (FUNC_0(VAR_1));
}
