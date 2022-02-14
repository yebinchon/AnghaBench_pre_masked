
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int uint32_t ;
typedef int limb ;
typedef int int32_t ;



__attribute__((used)) static inline limb
FUNC_0(const limb VAR_0)
{

  const uint32_t VAR_1 = (uint32_t) (((uint64_t) VAR_0) >> 32);

  const int32_t VAR_2 = ((int32_t) VAR_1) >> 31;

  const int32_t VAR_3 = ((uint32_t) VAR_2) >> 7;

  return (VAR_0 + VAR_3) >> 25;
}
