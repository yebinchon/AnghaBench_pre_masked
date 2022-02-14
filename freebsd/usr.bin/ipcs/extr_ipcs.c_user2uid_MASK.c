
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uid_t ;
struct passwd {int pw_uid; } ;


 int FUNC_0 () ;
 int FUNC_1 (int,char*) ;
 struct passwd* FUNC_2 (char*) ;
 int FUNC_3 (char*,char**,int ) ;

uid_t
FUNC_4(char *VAR_0)
{
 struct passwd *VAR_1;
 uid_t VAR_2;
 char *VAR_3;

 VAR_2 = FUNC_3(VAR_0, &VAR_3, 0);
 if (!*VAR_3 && VAR_3 != VAR_0)
  return (VAR_2);
 if ((VAR_1 = FUNC_2(VAR_0)) == ((void*)0))
  FUNC_1(1, "getpwnam failed: No such user");
 FUNC_0();
 return (VAR_1->pw_uid);
}
