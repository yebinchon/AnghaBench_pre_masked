
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long long uint64_t ;
typedef unsigned long long uint32_t ;


 unsigned long long FUNC_0 (int) ;

__attribute__((used)) static uint32_t
FUNC_1(uint64_t VAR_0, int VAR_1, int VAR_2)
{
 uint64_t VAR_3;

 if (VAR_0 & (1ULL << 55))
  VAR_3 = FUNC_0(VAR_2);
 else
  VAR_3 = FUNC_0(VAR_1);


 return (VAR_3 >> 32);
}
