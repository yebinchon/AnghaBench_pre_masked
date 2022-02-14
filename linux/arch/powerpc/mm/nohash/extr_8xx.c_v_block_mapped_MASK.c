
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long phys_addr_t ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 scalar_t__ VAR_4 ;
 unsigned long FUNC_0 (unsigned long) ;
 unsigned long VAR_5 ;

phys_addr_t FUNC_1(unsigned long VAR_6)
{
 unsigned long VAR_7 = VAR_2;

 if (VAR_4)
  return 0;
 if (VAR_6 >= VAR_3 && VAR_6 < VAR_3 + VAR_0)
  return VAR_7 + VAR_6 - VAR_3;
 if (VAR_6 >= VAR_1 && VAR_6 < VAR_1 + VAR_5)
  return FUNC_0(VAR_6);
 return 0;
}
