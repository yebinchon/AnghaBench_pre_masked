
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_long ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int) ;

int
FUNC_1(int VAR_6, u_long VAR_7)
{
  if (VAR_6 < VAR_4 || VAR_6 > VAR_2)
    return 0;
  if (VAR_6 > VAR_3)
    return VAR_0 | VAR_1;

  return ((VAR_7 & FUNC_0(VAR_6)) ? VAR_0 : 0) |
    ((VAR_5 & FUNC_0(VAR_6)) ? VAR_1 : 0);
}
