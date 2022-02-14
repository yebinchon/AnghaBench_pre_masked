
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned long VAR_0 ;
 scalar_t__ VAR_1 ;
 unsigned long FUNC_0 (unsigned long) ;
 int FUNC_1 (char*,unsigned long,unsigned long,unsigned long,unsigned long) ;

int
FUNC_2(unsigned long VAR_2, unsigned long VAR_3,
     unsigned long VAR_4, unsigned long VAR_5)
{
 unsigned long VAR_6, VAR_7;






 for (VAR_6 = VAR_2; VAR_6 <= VAR_3; VAR_6 += VAR_1)
 {
  VAR_7 = (FUNC_0(VAR_6) | VAR_0);
  if (VAR_7 >= VAR_4 && VAR_7 <= VAR_5)
  {





   return 1;
  }
 }
 return 0;
}
