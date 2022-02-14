
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uid_t ;
struct passwd {int pw_uid; } ;


 struct passwd* FUNC_0 (char*) ;

uid_t
FUNC_1(char VAR_0[])
{
 struct passwd *VAR_1;

 if ((VAR_1 = FUNC_0(VAR_0)) == ((void*)0))
  return (-1);
 return (VAR_1->pw_uid);
}
