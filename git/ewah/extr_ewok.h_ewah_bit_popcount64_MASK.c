
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int uint32_t ;



__attribute__((used)) static inline uint32_t FUNC_0(uint64_t VAR_0)
{
 VAR_0 = (VAR_0 & 0x5555555555555555ULL) + ((VAR_0 >> 1) & 0x5555555555555555ULL);
 VAR_0 = (VAR_0 & 0x3333333333333333ULL) + ((VAR_0 >> 2) & 0x3333333333333333ULL);
 VAR_0 = (VAR_0 & 0x0F0F0F0F0F0F0F0FULL) + ((VAR_0 >> 4) & 0x0F0F0F0F0F0F0F0FULL);
 return (VAR_0 * 0x0101010101010101ULL) >> 56;
}
