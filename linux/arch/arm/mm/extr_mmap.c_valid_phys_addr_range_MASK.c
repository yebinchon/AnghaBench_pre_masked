
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ phys_addr_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_1 ;

int FUNC_1(phys_addr_t VAR_2, size_t VAR_3)
{
 if (VAR_2 < VAR_0)
  return 0;
 if (VAR_2 + VAR_3 > FUNC_0(VAR_1 - 1) + 1)
  return 0;

 return 1;
}
