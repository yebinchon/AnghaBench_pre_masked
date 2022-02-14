
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;



__attribute__((used)) static inline uint32_t FUNC_0(uint32_t VAR_0)
{
 uint32_t VAR_1 = (((VAR_0 & 0x80) % 24) / 12);

 return (((VAR_1 & 0x3) << 10) | (((VAR_1 & 0x4) >> 2) << 31));
}
