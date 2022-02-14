
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;



__attribute__((used)) static inline u8 FUNC_0(unsigned long VAR_0)
{

 if (VAR_0 >= 93750)
  return 0x01;
 if (VAR_0 >= 720)
  return 24000000UL / (VAR_0 << 8);
 if (VAR_0 < 6)
  return 0xFF;
 else
  return 0x80 | (180000UL / (VAR_0 << 8));
}
