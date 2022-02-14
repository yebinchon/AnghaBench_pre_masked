
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef unsigned long u32 ;



__attribute__((used)) static unsigned int FUNC_0(u8 *VAR_0, u32 VAR_1)
{
 unsigned int VAR_2 = 0;

 if (VAR_1 == 0)
  return 0;

 if (VAR_1 < ((1UL << 16) - (1UL << 8))) {
  VAR_2 = 2;

  VAR_0[0] = (VAR_1 >> 8) & 0xFF;
  VAR_0[1] = VAR_1 & 0xFF;
 } else {
  VAR_2 = 6;

  VAR_0[0] = 0xFF;
  VAR_0[1] = 0xFE;
  VAR_0[2] = (VAR_1 >> 24) & 0xFF;
  VAR_0[3] = (VAR_1 >> 16) & 0xFF;
  VAR_0[4] = (VAR_1 >> 8) & 0xFF;
  VAR_0[5] = VAR_1 & 0xFF;
 }

 return VAR_2;
}
