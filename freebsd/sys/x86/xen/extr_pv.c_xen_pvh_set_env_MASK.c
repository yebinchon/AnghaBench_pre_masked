
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (char*,char*) ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (char**,char*) ;
 int FUNC_3 (char*,char*,char*) ;

__attribute__((used)) static void
FUNC_4(char *VAR_0, bool (*VAR_1)(const char *))
{
 char *VAR_2;

 if (VAR_0 == ((void*)0))
  return;

 VAR_2 = VAR_0;
 while (*VAR_2 != 0) {
  char *VAR_3;

  if (VAR_1 != ((void*)0) && VAR_1(VAR_2)) {
   VAR_2 += FUNC_1(VAR_2) + 1;
   continue;
  }

  VAR_3 = VAR_2;
  VAR_2 = FUNC_2(&VAR_3, "=");
  if (FUNC_0(VAR_2, VAR_3) != 0)
   FUNC_3("unable to add kenv %s=%s\n", VAR_2, VAR_3);
  VAR_2 = VAR_3 + FUNC_1(VAR_3) + 1;
 }
}
