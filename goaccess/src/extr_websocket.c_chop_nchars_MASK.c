
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,char*,size_t) ;

__attribute__((used)) static size_t
FUNC_1 (char *VAR_0, size_t VAR_1, size_t VAR_2)
{
  if (VAR_1 == 0 || VAR_0 == 0)
    return 0;

  if (VAR_1 > VAR_2)
    VAR_1 = VAR_2;
  FUNC_0 (VAR_0, VAR_0 + VAR_1, VAR_2 - VAR_1);

  return (VAR_2 - VAR_1);
}
