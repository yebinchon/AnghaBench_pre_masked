
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,char const*,scalar_t__) ;
 char* FUNC_1 (char*,char) ;

__attribute__((used)) static void FUNC_2 (char *VAR_1, const char *VAR_2)
{
  FUNC_0 (VAR_1, VAR_2, VAR_0 - 1);

  char *VAR_3 = ((void*)0);

  if ((VAR_3 = FUNC_1 (VAR_1, '/')) != ((void*)0))
  {
    *VAR_3 = 0;
  }
  else if ((VAR_3 = FUNC_1 (VAR_1, '\\')) != ((void*)0))
  {
    *VAR_3 = 0;
  }
  else
  {
    VAR_1[0] = '.';
    VAR_1[1] = 0;
  }
}
