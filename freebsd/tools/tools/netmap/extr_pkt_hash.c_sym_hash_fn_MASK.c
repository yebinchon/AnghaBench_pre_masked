
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint8_t ;
typedef int uint32_t ;
typedef int uint16_t ;


 int FUNC_0 (int**) ;

__attribute__((used)) static uint32_t
FUNC_1(uint32_t VAR_0, uint32_t VAR_1, uint16_t VAR_2, uint32_t VAR_3)
{
 uint32_t VAR_4 = 0;
 static int VAR_5 = 1;
 static uint32_t VAR_6[256][4];
 uint8_t *VAR_7 = (uint8_t *)&VAR_0,
  *VAR_8 = (uint8_t *)&VAR_1,
  *VAR_9 = (uint8_t *)&VAR_2,
  *VAR_10 = (uint8_t *)&VAR_3;

 if (VAR_5) {
  FUNC_0(VAR_6);
  VAR_5 = 0;
 }

 VAR_4 = VAR_6[VAR_7[3]][0] ^
      VAR_6[VAR_7[2]][1] ^
      VAR_6[VAR_7[1]][2] ^
      VAR_6[VAR_7[0]][3] ^
      VAR_6[VAR_8[3]][0] ^
      VAR_6[VAR_8[2]][1] ^
      VAR_6[VAR_8[1]][2] ^
      VAR_6[VAR_8[0]][3] ^
      VAR_6[VAR_9[1]][0] ^
      VAR_6[VAR_9[0]][1] ^
      VAR_6[VAR_10[1]][2] ^
      VAR_6[VAR_10[0]][3];

 return VAR_4;
}
