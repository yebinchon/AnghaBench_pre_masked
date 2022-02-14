
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (double) ;
 int FUNC_1 (double) ;

int
FUNC_2 (double VAR_0)
{
  int VAR_1, VAR_2;

  VAR_1 = (FUNC_0 (VAR_0) & 0x7fffffff);
  VAR_2 = FUNC_1 (VAR_0);
  VAR_1 |= (unsigned) (VAR_2 | (-VAR_2)) >> 31;
  VAR_1 = 0x7ff00000 - VAR_1;
  return ((unsigned) (VAR_1)) >> 31;
}
