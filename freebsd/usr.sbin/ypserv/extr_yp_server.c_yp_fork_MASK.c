
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pid_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 (char*,scalar_t__) ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static pid_t
FUNC_3(void)
{
 if (VAR_2 != FUNC_1()) {
  FUNC_2("child %d trying to fork!", FUNC_1());
  VAR_1 = VAR_0;
  return(-1);
 }

 return(FUNC_0());
}
