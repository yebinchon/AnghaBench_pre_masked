
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;

int
FUNC_1(int VAR_2)
{

 if (VAR_2 < 4)
  return(FUNC_0(VAR_0) & (1 << VAR_2));
 else
  return(FUNC_0(VAR_1) & (1 << (VAR_2 & 3)));
}
