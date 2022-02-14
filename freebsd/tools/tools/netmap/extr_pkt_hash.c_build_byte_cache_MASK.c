
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;


 int VAR_0 ;
 int FUNC_0 (int *,int) ;

__attribute__((used)) static void
FUNC_1(uint32_t VAR_1[256][4])
{

 int VAR_2, VAR_3, VAR_4;
 uint32_t VAR_5[96];

 FUNC_0(VAR_5, 96);

 for (VAR_2 = 0; VAR_2 < 4; VAR_2++) {
  for (VAR_3 = 0; VAR_3 < 256; VAR_3++) {
   uint8_t VAR_6 = VAR_3;
   VAR_1[VAR_3][VAR_2] = 0;
   for (VAR_4 = 0; VAR_4 < 8; VAR_4++) {
    if (VAR_6 & 0x80)
     VAR_1[VAR_3][VAR_2] ^= VAR_5[8 * VAR_2 + VAR_4];
    VAR_6 <<= 1U;
   }
  }
 }
}
