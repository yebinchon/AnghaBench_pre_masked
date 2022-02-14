
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned long FUNC_0 () ;

__attribute__((used)) static __inline int
FUNC_1(int VAR_4, int VAR_5)
{
 unsigned long VAR_6;

 if (VAR_4 < VAR_3) {
  VAR_6 = (((VAR_0 / 100) * VAR_1) /
      (VAR_3 - VAR_2)) * (VAR_4 - VAR_2);
 } else {
  if (VAR_4 > VAR_3)
   VAR_6 = (((VAR_0 / 100) * VAR_1) /
       (VAR_5 - VAR_3)) * (VAR_5 - VAR_4);
  else
   VAR_6 = (VAR_0 / 100) * VAR_1;
 }

 return (FUNC_0() < VAR_6);
}
