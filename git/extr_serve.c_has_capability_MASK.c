
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct argv_array {int argc; int * argv; } ;


 scalar_t__ FUNC_0 (int ,char const*,char const**) ;

int FUNC_1(const struct argv_array *VAR_0, const char *VAR_1,
     const char **VAR_2)
{
 int VAR_3;
 for (VAR_3 = 0; VAR_3 < VAR_0->argc; VAR_3++) {
  const char *VAR_4;
  if (FUNC_0(VAR_0->argv[VAR_3], VAR_1, &VAR_4) &&
      (!*VAR_4 || *VAR_4 == '=')) {
   if (VAR_2) {
    if (*VAR_4 == '=')
     VAR_4++;
    *VAR_2 = VAR_4;
   }
   return 1;
  }
 }

 return 0;
}
