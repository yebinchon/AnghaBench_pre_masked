
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct argv_array {int dummy; } ;


 int FUNC_0 (char const**,int,int) ;
 int FUNC_1 (struct argv_array*,char*) ;
 char* FUNC_2 (char*,char**) ;

__attribute__((used)) static int FUNC_3(char *VAR_0,
           const char ***VAR_1, int *VAR_2, int *VAR_3,
           struct argv_array *VAR_4)
{
 char *VAR_5 = VAR_0;

 if (!*VAR_0)
  return 0;
 do {
  char *VAR_6 = FUNC_2(VAR_5, &VAR_5);
  if (!VAR_6)
   return -1;
  if (VAR_1) {
   FUNC_0(*VAR_1, *VAR_2 + 1, *VAR_3);
   (*VAR_1)[(*VAR_2)++] = VAR_6;
  }
  if (VAR_4)
   FUNC_1(VAR_4, VAR_6);
 } while (VAR_5);

 return 0;
}
