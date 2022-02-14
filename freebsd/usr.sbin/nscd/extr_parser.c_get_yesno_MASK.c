
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (char const*,char*) ;

__attribute__((used)) static int
FUNC_1(const char *VAR_0)
{

 if (FUNC_0(VAR_0, "yes") == 0)
  return (1);
 else if (FUNC_0(VAR_0, "no") == 0)
  return (0);
 else
  return (-1);
}
