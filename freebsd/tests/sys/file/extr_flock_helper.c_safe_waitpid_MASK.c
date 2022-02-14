
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ pid_t ;


 int VAR_0 ;
 int FUNC_0 (int,char*) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (scalar_t__,int*,int ) ;

__attribute__((used)) static int
FUNC_2(pid_t VAR_2)
{
 int VAR_3;
 int VAR_4;

 VAR_3 = VAR_1;
 VAR_1 = 0;
 while (FUNC_1(VAR_2, &VAR_4, 0) != VAR_2) {
  if (VAR_1 == VAR_0)
   continue;
  FUNC_0(1, "waitpid");
 }
 VAR_1 = VAR_3;

 return (VAR_4);
}
