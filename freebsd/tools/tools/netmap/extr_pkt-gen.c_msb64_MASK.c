
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int uint32_t ;



uint32_t
FUNC_0(uint64_t VAR_0)
{
 uint64_t VAR_1 = 1ULL << 63;
 int VAR_2;

 for (VAR_2 = 63; VAR_2 >= 0; VAR_2--, VAR_1 >>=1)
  if (VAR_1 & VAR_0)
   return VAR_2;
 return 0;
}
