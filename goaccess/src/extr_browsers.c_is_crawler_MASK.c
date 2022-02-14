
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (char*,char*) ;
 char* FUNC_2 (char*,char*) ;
 char* FUNC_3 (char const*) ;

int
FUNC_4 (const char *VAR_1)
{
  char VAR_2[VAR_0];
  char *VAR_3, *VAR_4;

  if (VAR_1 == ((void*)0) || *VAR_1 == '\0')
    return 0;

  if ((VAR_4 = FUNC_3 (VAR_1), VAR_3 = FUNC_2 (VAR_4, VAR_2)) != ((void*)0))
    FUNC_0 (VAR_3);
  FUNC_0 (VAR_4);

  return FUNC_1 (VAR_2, "Crawlers") == 0 ? 1 : 0;
}
