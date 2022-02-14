
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,char const*,int) ;
 size_t FUNC_1 (char const*) ;
 char* FUNC_2 (int) ;

char *
FUNC_3 (const char *VAR_0, int VAR_1, int VAR_2)
{
  char *VAR_3;
  if (VAR_0 == ((void*)0))
    return ((void*)0);
  if (VAR_1 < 0)
    VAR_1 = FUNC_1 (VAR_0) + VAR_1;
  if (VAR_1 < 0)
    VAR_1 = 0;
  if (VAR_2 < 0)
    VAR_2 = 0;
  if (((size_t) VAR_1) > FUNC_1 (VAR_0))
    VAR_1 = FUNC_1 (VAR_0);
  if (((size_t) VAR_2) > FUNC_1 (&VAR_0[VAR_1]))
    VAR_2 = FUNC_1 (&VAR_0[VAR_1]);
  if ((VAR_3 = FUNC_2 (VAR_2 + 1)) == ((void*)0))
    return ((void*)0);
  FUNC_0 (VAR_3, &(VAR_0[VAR_1]), VAR_2);
  VAR_3[VAR_2] = '\0';

  return VAR_3;
}
