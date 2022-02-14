
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct argv_array {int argc; char** argv; } ;


 scalar_t__ FUNC_0 (char const*,char const*) ;

__attribute__((used)) static int FUNC_1(const struct argv_array *VAR_0, const char *VAR_1)
{
 int VAR_2;

 if (!VAR_0->argc)
  return 1;

 for (VAR_2 = 0; VAR_2 < VAR_0->argc; VAR_2++) {
  const char *VAR_3 = VAR_0->argv[VAR_2];

  if (FUNC_0(VAR_1, VAR_3))
   return 1;
 }

 return 0;
}
