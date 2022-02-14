
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static unsigned int FUNC_0(unsigned int VAR_0, int VAR_1)
{
 int VAR_2;
 unsigned int VAR_3 = 1 << 0xF;
 unsigned int VAR_4 = (unsigned int)((VAR_0 >> 0x18) ^ VAR_1);

 VAR_0 ^= VAR_4 << 0x8;
 for (VAR_2 = 0; VAR_2 < 0x8; VAR_2++) {
  if (VAR_0 & VAR_3)
   VAR_0 = (VAR_0 << 1) ^ 0x1021;
  else
   VAR_0 <<= 1;
 }
 return VAR_0 & 0xFFFF;
}
