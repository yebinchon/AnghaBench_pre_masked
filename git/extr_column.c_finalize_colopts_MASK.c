
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 () ;

int FUNC_2(unsigned int *VAR_3, int VAR_4)
{
 if ((*VAR_3 & VAR_2) == VAR_0) {
  if (VAR_4 < 0)
   VAR_4 = FUNC_0(1);
  *VAR_3 &= ~VAR_2;
  if (VAR_4 || FUNC_1())
   *VAR_3 |= VAR_1;
 }
 return 0;
}
