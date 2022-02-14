
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;


 int VAR_0 ;
 int VAR_1 ;







__attribute__((used)) static unsigned int FUNC_0(u8 *VAR_2, u8 *VAR_3)
{
 int VAR_4;
 int VAR_5 = (VAR_2[0] >> 6) & 0x03;

 if (VAR_5 == 2 || VAR_5 == 3) {




  return VAR_0 << 16;
 }

 VAR_3[0] = 0x70 | VAR_5 | (VAR_2[1] & 0x80);
 VAR_3[1] = 0x0;
 VAR_3[2] = ((VAR_2[1] << 1) & 0xe0) | (VAR_2[1] & 0x0f);
 VAR_3[3] = VAR_2[4];
 VAR_3[4] = VAR_2[5];
 VAR_3[5] = VAR_2[6];
 VAR_3[6] = VAR_2[7];
 VAR_3[7] = 10;
 VAR_3[8] = VAR_2[8];
 VAR_3[9] = VAR_2[9];
 VAR_3[10] = VAR_2[10];
 VAR_3[11] = VAR_2[11];
 VAR_3[12] = VAR_2[2];
 VAR_3[13] = VAR_2[3];
 VAR_3[14] = VAR_2[12];
 VAR_3[15] = VAR_2[13];

 VAR_4 = VAR_2[0] & 0x3f;

 switch (VAR_4) {
 case 129:
 case 132:
 case 130:
 case 133:
 case 128:
 case 131:
  return VAR_1 << 16 | VAR_4;

 default:
  return VAR_0 << 16;
 }
}
