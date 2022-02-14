
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pid_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 () ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int,int*,int ) ;

__attribute__((used)) static pid_t
FUNC_3(int VAR_3, int *VAR_4) {
 pid_t VAR_5;

 if (FUNC_0()) {
  VAR_2 = VAR_0;
  return (-1);
 }

 while ((VAR_5 = FUNC_2(-1, VAR_4, VAR_3 ? 0 : VAR_1)) > 0)
  if (FUNC_1(VAR_5))
   break;

 return (VAR_5);
}
