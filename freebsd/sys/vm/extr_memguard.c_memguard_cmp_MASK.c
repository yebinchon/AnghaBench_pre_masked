
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 unsigned long VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned long VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 () ;

__attribute__((used)) static int
FUNC_1(unsigned long VAR_7)
{

 if (VAR_7 < VAR_4) {
  VAR_5++;
  return (0);
 }
 if ((VAR_6 & VAR_0) != 0 && VAR_7 >= VAR_1)
  return (1);
 if (VAR_2 > 0 &&
     (FUNC_0() % 100000) < VAR_2) {
  VAR_3++;
  return (1);
 }

 return (0);
}
