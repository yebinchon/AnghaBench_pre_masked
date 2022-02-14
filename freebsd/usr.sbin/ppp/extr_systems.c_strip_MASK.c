
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (char) ;
 int FUNC_1 (char*) ;

__attribute__((used)) static char *
FUNC_2(char *VAR_0)
{
  int VAR_1;

  VAR_1 = FUNC_1(VAR_0);
  while (VAR_1 && (VAR_0[VAR_1-1] == '\n' || VAR_0[VAR_1-1] == '\r' ||
                 FUNC_0(VAR_0[VAR_1-1])))
    VAR_0[--VAR_1] = '\0';

  while (FUNC_0(*VAR_0))
    VAR_0++;

  if (*VAR_0 == '#')
    *VAR_0 = '\0';

  return VAR_0;
}
