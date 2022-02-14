
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 char** VAR_0 ;
 scalar_t__ FUNC_0 (char*) ;
 int * FUNC_1 (char const*,char*) ;
 char* FUNC_2 (char*) ;
 unsigned int FUNC_3 (char**) ;
 int FUNC_4 (char*,...) ;

__attribute__((used)) static FILE *
FUNC_5(const char *VAR_1)
{
 FILE *VAR_2;
 char *VAR_3 = FUNC_2("HOME");
 unsigned int VAR_4;

 if (VAR_3 == ((void*)0) || *VAR_3 == '\0') {
  FUNC_4("Cannot get home directory");
  return (((void*)0));
 }

 if (FUNC_0(VAR_3) != 0) {
  FUNC_4("Cannot enter home directory");
  return (((void*)0));
 }

 for (VAR_4 = 0; VAR_4 < FUNC_3(VAR_0); VAR_4++) {
  if (FUNC_0(VAR_0[VAR_4]) != 0)
   continue;

  if ((VAR_2 = FUNC_1(VAR_1, "r")) != ((void*)0))
   return (VAR_2);
 }

 FUNC_4("can't open calendar file \"%s\"", VAR_1);

 return (((void*)0));
}
