
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct passwd {int pw_uid; } ;
struct group {int gr_gid; } ;




 scalar_t__ FUNC_0 (char const*) ;
 int FUNC_1 (char const*) ;
 struct group* FUNC_2 (char const*) ;
 struct passwd* FUNC_3 (char const*) ;
 int FUNC_4 (int) ;
 int FUNC_5 (char*,...) ;

int
FUNC_6(const char *VAR_0, int VAR_1)
{
 struct passwd *VAR_2;
 struct group *VAR_3;

 if (FUNC_0(VAR_0))
  return (FUNC_1(VAR_0));
 switch(VAR_1) {
 case 128:
  if ((VAR_2 = FUNC_3(VAR_0)))
   return (VAR_2->pw_uid);
  FUNC_5("%s: no such user", VAR_0);
  FUNC_4(3);
  break;
 case 129:
  if ((VAR_3 = FUNC_2(VAR_0)))
   return (VAR_3->gr_gid);
  FUNC_5("%s: no such group", VAR_0);
  FUNC_4(3);
  break;
 default:
  FUNC_5("%d: unknown quota type", VAR_1);
  FUNC_4(3);
  break;
 }
 FUNC_4(1);
 return (-1);
}
