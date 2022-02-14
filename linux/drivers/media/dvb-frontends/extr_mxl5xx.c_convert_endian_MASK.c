
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;



__attribute__((used)) static void FUNC_0(u8 VAR_0, u32 VAR_1, u8 *VAR_2)
{
 u32 VAR_3;

 if (!VAR_0)
  return;
 for (VAR_3 = 0; VAR_3 < (VAR_1 & ~3); VAR_3 += 4) {
  VAR_2[VAR_3 + 0] ^= VAR_2[VAR_3 + 3];
  VAR_2[VAR_3 + 3] ^= VAR_2[VAR_3 + 0];
  VAR_2[VAR_3 + 0] ^= VAR_2[VAR_3 + 3];

  VAR_2[VAR_3 + 1] ^= VAR_2[VAR_3 + 2];
  VAR_2[VAR_3 + 2] ^= VAR_2[VAR_3 + 1];
  VAR_2[VAR_3 + 1] ^= VAR_2[VAR_3 + 2];
 }

 switch (VAR_1 & 3) {
 case 0:
 case 1:

  break;
 case 2:
  VAR_2[VAR_3 + 0] ^= VAR_2[VAR_3 + 1];
  VAR_2[VAR_3 + 1] ^= VAR_2[VAR_3 + 0];
  VAR_2[VAR_3 + 0] ^= VAR_2[VAR_3 + 1];
  break;

 case 3:
  VAR_2[VAR_3 + 0] ^= VAR_2[VAR_3 + 2];
  VAR_2[VAR_3 + 2] ^= VAR_2[VAR_3 + 0];
  VAR_2[VAR_3 + 0] ^= VAR_2[VAR_3 + 2];
  break;
 }

}
