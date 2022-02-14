
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct passwd {int pw_uid; } ;


 struct passwd* FUNC_0 (char const*) ;
 int FUNC_1 (char const*,char*) ;
 int VAR_0 ;

__attribute__((used)) static void
FUNC_2(const char *VAR_1)
{
 struct passwd *VAR_2;

 if (*VAR_1 == '\0')
  return;
 VAR_0 = ((VAR_2 = FUNC_0(VAR_1)) != ((void*)0)) ? VAR_2->pw_uid : FUNC_1(VAR_1, "user");
}
