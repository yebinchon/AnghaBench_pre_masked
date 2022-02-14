
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 size_t FUNC_0 (int **) ;
 char const* FUNC_1 (int ) ;
 int ** VAR_0 ;
 int * FUNC_2 (int ,char const) ;

const char *
FUNC_3 (const char *VAR_1)
{
  size_t VAR_2;
  for (VAR_2 = 0; VAR_2 < FUNC_0 (VAR_0); VAR_2++)
    if (FUNC_2 (VAR_0[VAR_2][0], VAR_1[0]) != ((void*)0))
      return FUNC_1(VAR_0[VAR_2][1]);

  return "Unknown";
}
