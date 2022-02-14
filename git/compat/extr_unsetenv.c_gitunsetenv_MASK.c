
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 size_t FUNC_0 (char const*) ;
 scalar_t__ FUNC_1 (char*,char const*,size_t) ;

void FUNC_2 (const char *VAR_0)
{

     extern char **VAR_1;

     int VAR_2, VAR_3;
     size_t VAR_4;

     VAR_4 = FUNC_0(VAR_0);

     for (VAR_2 = VAR_3 = 0; VAR_1[VAR_2]; ++VAR_2) {
   size_t VAR_5;
   VAR_5 = FUNC_0(VAR_1[VAR_2]);
   if (VAR_5 > VAR_4) {

        if (0 == FUNC_1 (VAR_1[VAR_2], VAR_0, VAR_4)
     && '=' == VAR_1[VAR_2][VAR_4])

      continue;
   }
   VAR_1[VAR_3] = VAR_1[VAR_2];
   ++VAR_3;
     }
     VAR_1[VAR_3] = ((void*)0);
}
