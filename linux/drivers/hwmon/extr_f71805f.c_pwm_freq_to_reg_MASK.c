
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;



__attribute__((used)) static inline u8 FUNC_0(unsigned long VAR_0)
{
 if (VAR_0 >= 187500)
  return 0x80;
 if (VAR_0 >= 1475)
  return 0x80 | (48000000UL / (VAR_0 << 8));
 if (VAR_0 < 31)
  return 0x7f;
 else
  return 1000000UL / (VAR_0 << 8);
}
