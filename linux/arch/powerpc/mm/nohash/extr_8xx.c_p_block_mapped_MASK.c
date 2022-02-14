
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long phys_addr_t ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (unsigned long) ;
 unsigned long VAR_4 ;

unsigned long FUNC_1(phys_addr_t VAR_5)
{
 unsigned long VAR_6 = VAR_1;

 if (VAR_3)
  return 0;
 if (VAR_5 >= VAR_6 && VAR_5 < VAR_6 + VAR_0)
  return VAR_2 + VAR_5 - VAR_6;
 if (VAR_5 < VAR_4)
  return (unsigned long)FUNC_0(VAR_5);
 return 0;
}
