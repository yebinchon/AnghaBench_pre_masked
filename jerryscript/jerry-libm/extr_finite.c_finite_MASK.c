
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (double) ;

int
FUNC_1 (double VAR_0)
{
  int VAR_1;

  VAR_1 = FUNC_0 (VAR_0);
  return (unsigned) ((VAR_1 & 0x7fffffff) - 0x7ff00000) >> 31;
}
