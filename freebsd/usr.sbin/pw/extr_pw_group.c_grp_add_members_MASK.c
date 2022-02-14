
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct passwd {int pw_name; } ;
struct group {int dummy; } ;


 struct group* FUNC_0 (struct group*,int ) ;
 scalar_t__ FUNC_1 (struct group*,int ) ;
 struct passwd* FUNC_2 (char*) ;
 char* FUNC_3 (char*,char*) ;

__attribute__((used)) static void
FUNC_4(struct group **VAR_0, char *VAR_1)
{
 struct passwd *VAR_2;
 char *VAR_3;
 char VAR_4[] = ", \t";

 if (VAR_1 == ((void*)0))
  return;
 for (VAR_3 = FUNC_3(VAR_1, VAR_4); VAR_3 != ((void*)0); VAR_3 = FUNC_3(((void*)0), VAR_4)) {
  VAR_2 = FUNC_2(VAR_3);
  if (FUNC_1(*VAR_0, VAR_2->pw_name))
   continue;
  *VAR_0 = FUNC_0(*VAR_0, VAR_2->pw_name);
 }
}
