
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;



__attribute__((used)) static inline void FUNC_0(uint32_t VAR_0, uint8_t VAR_1[4])
{
  *VAR_1++ = VAR_0 & 0xff;
  *VAR_1++ = (VAR_0 >> 8) & 0xff;
  *VAR_1++ = (VAR_0 >> 16) & 0xff;
  *VAR_1 = (VAR_0 >> 24) & 0xff;
}
