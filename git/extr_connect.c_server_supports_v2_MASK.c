
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int argc; int * argv; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ,char const*) ;
 TYPE_1__ VAR_0 ;
 scalar_t__ FUNC_2 (int ,char const*,char const**) ;

int FUNC_3(const char *VAR_1, int VAR_2)
{
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
  const char *VAR_4;
  if (FUNC_2(VAR_0[VAR_3], VAR_1, &VAR_4) &&
      (!*VAR_4 || *VAR_4 == '='))
   return 1;
 }

 if (VAR_2)
  FUNC_1(FUNC_0("server doesn't support '%s'"), VAR_1);

 return 0;
}
