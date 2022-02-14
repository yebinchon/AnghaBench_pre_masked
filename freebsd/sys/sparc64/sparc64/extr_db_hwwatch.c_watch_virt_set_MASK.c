
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ vm_offset_t ;
typedef int u_long ;


 int FUNC_0 (scalar_t__,int) ;

int
FUNC_1(vm_offset_t VAR_0, int VAR_1)
{
 u_long VAR_2;

 VAR_2 = (u_long)VAR_0 & 7;

 if (VAR_2 + VAR_1 > 8)
  return (-1);
 return (FUNC_0(VAR_0, ((1 << VAR_1) - 1) << VAR_2));
}
