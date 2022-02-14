
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char const*,int) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static void
FUNC_3 (const char *VAR_2)
{
  while (VAR_2 != ((void*)0) && *VAR_2 != 0)
  {
    int VAR_3 = -1;
    int VAR_4 = 0;
    for (; VAR_4 < VAR_0 - VAR_1 && VAR_2[VAR_4] != 0; VAR_4++)
    {
      if (VAR_2[VAR_4] == ' ')
      {
        VAR_3 = VAR_4;
      }
    }
    if (VAR_3 < 0 || VAR_4 < VAR_0 - VAR_1)
    {
      VAR_3 = VAR_4;
    }

    FUNC_1 (VAR_2, VAR_3);

    VAR_2 += VAR_3;
    while (*VAR_2 == ' ')
    {
      VAR_2++;
    }

    if (*VAR_2 != 0)
    {
      FUNC_2 ("\n");
      FUNC_0 (VAR_1);
    }
  }
}
