
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct passwd {int pw_uid; } ;


 int VAR_0 ;
 struct passwd* FUNC_0 (char*) ;
 int FUNC_1 (int ,int ,char*) ;
 int FUNC_2 (char*,char*) ;

__attribute__((used)) static int
FUNC_3(char *VAR_1)
{
 struct passwd *VAR_2 = FUNC_0(VAR_1);

 if (VAR_2 == ((void*)0)) {
  FUNC_2("%s: unknown user", VAR_1);
  return(1);
 }
 return(FUNC_1(VAR_0, VAR_2->pw_uid, VAR_1));
}
