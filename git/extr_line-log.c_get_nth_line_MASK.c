
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static char *FUNC_0(long VAR_0, unsigned long *VAR_1, void *VAR_2)
{
 if (VAR_0 == 0)
  return (char *)VAR_2;
 else
  return (char *)VAR_2 + VAR_1[VAR_0] + 1;
}
