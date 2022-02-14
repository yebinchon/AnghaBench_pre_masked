
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;

__attribute__((used)) static inline void FUNC_0(unsigned char *VAR_1, unsigned int *VAR_2, int VAR_3)
{
 int VAR_4, VAR_5;
 int VAR_6 = 0x0F0F0F0FUL;
 int VAR_7 = 0x00000000UL;
 unsigned int *VAR_8 = (int *)VAR_0;

 for (VAR_4 = 0; VAR_4 < 16; ++VAR_4)
 {
  VAR_5 = *VAR_1++;
  VAR_2[0] = (VAR_8[VAR_5 >> 4] & VAR_6) ^ VAR_7;
  VAR_2[1] = (VAR_8[VAR_5 & 0xf] & VAR_6) ^ VAR_7;
  VAR_2 = (unsigned int *) ((char *)VAR_2 + VAR_3);
 }
}
