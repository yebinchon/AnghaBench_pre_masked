
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*) ;
 char* FUNC_1 (char*,char) ;
 char* FUNC_2 (char*,char) ;

__attribute__((used)) static void FUNC_3(char *VAR_0, char **VAR_1,
 char **VAR_2)
{
 if (*VAR_0 == '[') {
  char *VAR_3;

  VAR_3 = FUNC_1(VAR_0, ']');
  if (!VAR_3)
   FUNC_0("Invalid request ('[' without ']')");
  *VAR_3 = '\0';
  *VAR_1 = VAR_0 + 1;
  if (!VAR_3[1])
   *VAR_2 = ((void*)0);
  else if (VAR_3[1] == ':')
   *VAR_2 = VAR_3 + 2;
  else
   FUNC_0("Garbage after end of host part");
 } else {
  *VAR_1 = VAR_0;
  *VAR_2 = FUNC_2(VAR_0, ':');
  if (*VAR_2) {
   **VAR_2 = '\0';
   ++*VAR_2;
  }
 }
}
