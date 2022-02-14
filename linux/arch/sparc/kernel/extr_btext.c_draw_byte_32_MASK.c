
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static void FUNC_0(unsigned char *VAR_0, unsigned int *VAR_1, int VAR_2)
{
 int VAR_3, VAR_4;
 int VAR_5 = 0xFFFFFFFFUL;
 int VAR_6 = 0x00000000UL;

 for (VAR_3 = 0; VAR_3 < 16; ++VAR_3)
 {
  VAR_4 = *VAR_0++;
  VAR_1[0] = (-(VAR_4 >> 7) & VAR_5) ^ VAR_6;
  VAR_1[1] = (-((VAR_4 >> 6) & 1) & VAR_5) ^ VAR_6;
  VAR_1[2] = (-((VAR_4 >> 5) & 1) & VAR_5) ^ VAR_6;
  VAR_1[3] = (-((VAR_4 >> 4) & 1) & VAR_5) ^ VAR_6;
  VAR_1[4] = (-((VAR_4 >> 3) & 1) & VAR_5) ^ VAR_6;
  VAR_1[5] = (-((VAR_4 >> 2) & 1) & VAR_5) ^ VAR_6;
  VAR_1[6] = (-((VAR_4 >> 1) & 1) & VAR_5) ^ VAR_6;
  VAR_1[7] = (-(VAR_4 & 1) & VAR_5) ^ VAR_6;
  VAR_1 = (unsigned int *) ((char *)VAR_1 + VAR_2);
 }
}
