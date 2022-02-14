
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int argc; int * argv; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ,char const*) ;
 scalar_t__ FUNC_2 (char const*,char const*) ;
 TYPE_1__ VAR_0 ;
 scalar_t__ FUNC_3 (int ,char const*,char const**) ;

int FUNC_4(const char *VAR_1, const char *VAR_2,
       int VAR_3)
{
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++) {
  const char *VAR_5;
  if (FUNC_3(VAR_0[VAR_4], VAR_1, &VAR_5) &&
      (!*VAR_5 || *(VAR_5++) == '=')) {
   if (FUNC_2(VAR_5, VAR_2))
    return 1;
   else
    break;
  }
 }

 if (VAR_3)
  FUNC_1(FUNC_0("server doesn't support feature '%s'"), VAR_2);

 return 0;
}
