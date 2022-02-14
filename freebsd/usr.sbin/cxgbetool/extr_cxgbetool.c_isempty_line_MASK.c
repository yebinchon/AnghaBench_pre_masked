
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (char) ;

__attribute__((used)) static int
FUNC_1(char *VAR_0, size_t VAR_1)
{


 while (FUNC_0(*VAR_0)) {
  VAR_0++;
  VAR_1--;
 }
 if (VAR_1 == 0 || *VAR_0 == '#' || *VAR_0 == '\n')
  return (1);

 return (0);
}
