
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 size_t FUNC_0 (int *) ;
 int * VAR_0 ;
 int * FUNC_1 (char const*,int ) ;

__attribute__((used)) static int
FUNC_2 (const char *VAR_1)
{
  size_t VAR_2;
  for (VAR_2 = 0; VAR_2 < FUNC_0 (VAR_0); VAR_2++) {
    if (FUNC_1 (VAR_1, VAR_0[VAR_2]) != ((void*)0))
      return 1;
  }
  return 0;
}
