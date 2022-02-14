
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int uint32_t ;


 unsigned int FUNC_0 (unsigned int,int) ;
 int FUNC_1 (char*,...) ;
 int VAR_0 ;
 unsigned int FUNC_2 (unsigned int,unsigned int) ;

__attribute__((used)) static int FUNC_3(uint32_t *VAR_1, unsigned VAR_2[])
{
 unsigned VAR_3 = VAR_1[4];
 unsigned VAR_4 = VAR_1[6];
 unsigned VAR_5 = VAR_1[7];
 unsigned VAR_6 = VAR_1[9];
 unsigned VAR_7 = VAR_1[28];

 unsigned VAR_8 = VAR_4 / 16;
 unsigned VAR_9 = FUNC_0(VAR_5 / 16, 2);

 unsigned VAR_10, VAR_11, VAR_12;

 VAR_10 = VAR_4 * VAR_5;
 VAR_10 += VAR_10 / 2;
 VAR_10 = FUNC_0(VAR_10, 1024);

 switch (VAR_3) {
 case 0:


  VAR_12 = VAR_10 * 17;


  VAR_12 += VAR_8 * VAR_9 * 17 * 192;


  VAR_12 += VAR_8 * VAR_9 * 32;
  break;

 case 1:


  VAR_12 = VAR_10 * 3;


  VAR_12 += VAR_8 * VAR_9 * 128;


  VAR_12 += VAR_8 * 64;


  VAR_12 += VAR_8 * 128;


  VAR_11 = FUNC_2(VAR_8, VAR_9);
  VAR_12 += FUNC_0(VAR_11 * 7 * 16, 64);
  break;

 case 3:


  VAR_12 = VAR_10 * 3;
  break;

 case 4:


  VAR_12 = VAR_10 * 3;


  VAR_12 += VAR_8 * VAR_9 * 64;


  VAR_12 += FUNC_0(VAR_8 * VAR_9 * 32, 64);
  break;

 default:
  FUNC_1("UVD codec not handled %d!\n", VAR_3);
  return -VAR_0;
 }

 if (VAR_4 > VAR_7) {
  FUNC_1("Invalid UVD decoding target pitch!\n");
  return -VAR_0;
 }

 if (VAR_6 < VAR_12) {
  FUNC_1("Invalid dpb_size in UVD message (%d / %d)!\n",
     VAR_6, VAR_12);
  return -VAR_0;
 }

 VAR_2[0x1] = VAR_6;
 VAR_2[0x2] = VAR_10;
 return 0;
}
