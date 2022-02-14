
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct macro_definition {int dummy; } ;


 int FUNC_0 (char const*,struct macro_definition*) ;
 struct macro_definition* FUNC_1 (char const*) ;
 int FUNC_2 (int (*) (char const*,struct macro_definition*)) ;

__attribute__((used)) static void
FUNC_3(const char *VAR_0[], int VAR_1)
{
 int VAR_2;
 struct macro_definition *VAR_3;

 if (VAR_1 > 2) {
  for (VAR_2 = 2; VAR_2 < VAR_1; VAR_2++)
   if ((VAR_3 = FUNC_1(VAR_0[VAR_2])) != ((void*)0))
    FUNC_0(VAR_0[VAR_2], VAR_3);
 } else
  FUNC_2(FUNC_0);
}
