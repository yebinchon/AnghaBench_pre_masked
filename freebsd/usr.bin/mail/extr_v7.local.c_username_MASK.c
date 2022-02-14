
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uid_t ;


 char* FUNC_0 (char*) ;
 char* FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 (char*,unsigned int) ;

char *
FUNC_4(void)
{
 char *VAR_0;
 uid_t VAR_1;

 if ((VAR_0 = FUNC_0("USER")) != ((void*)0))
  return (VAR_0);
 if ((VAR_0 = FUNC_0("LOGNAME")) != ((void*)0))
  return (VAR_0);
 if ((VAR_0 = FUNC_1(VAR_1 = FUNC_2())) != ((void*)0))
  return (VAR_0);
 FUNC_3("Cannot associate a name with uid %u\n", (unsigned)VAR_1);
 return (((void*)0));
}
