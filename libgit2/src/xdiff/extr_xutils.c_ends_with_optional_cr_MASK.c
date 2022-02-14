
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static int FUNC_0(const char *VAR_0, long VAR_1, long VAR_2)
{
 int VAR_3 = VAR_1 && VAR_0[VAR_1-1] == '\n';

 if (VAR_3)
  VAR_1--;
 if (VAR_1 == VAR_2)
  return 1;

 if (VAR_3 && VAR_1 == VAR_2 + 1 && VAR_0[VAR_2] == '\r')
  return 1;
 return 0;
}
