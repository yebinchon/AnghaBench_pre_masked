
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct passwd {int dummy; } ;


 int FUNC_0 (char const*,struct passwd*) ;
 int FUNC_1 (int ) ;
 char* FUNC_2 (int ,size_t*) ;
 int FUNC_3 (struct passwd*) ;
 int FUNC_4 (char*) ;
 struct passwd* FUNC_5 (struct passwd*) ;
 int FUNC_6 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 struct passwd* FUNC_7 (char const*,struct passwd*) ;
 int FUNC_8 (char*) ;

struct passwd *
FUNC_9(const char *VAR_2, struct passwd *VAR_3)
{
 struct passwd *VAR_4;
 char *VAR_5;
 size_t VAR_6;

 if (FUNC_0(VAR_2, VAR_3) == -1)
  return (((void*)0));
 for (;;) {
  switch (FUNC_6(1)) {
  case -1:
   return (((void*)0));
  case 0:
   return (FUNC_5(VAR_3));
  default:
   break;
  }
  if ((VAR_4 = FUNC_7(VAR_2, VAR_3)) != ((void*)0))
   return (VAR_4);
  FUNC_3(VAR_4);
  FUNC_4("re-edit the password file? ");
  FUNC_1(VAR_1);
  if ((VAR_5 = FUNC_2(VAR_0, &VAR_6)) == ((void*)0)) {
   FUNC_8("fgetln()");
   return (((void*)0));
  }
  if (VAR_6 > 0 && (*VAR_5 == 'N' || *VAR_5 == 'n'))
   return (((void*)0));
 }
}
