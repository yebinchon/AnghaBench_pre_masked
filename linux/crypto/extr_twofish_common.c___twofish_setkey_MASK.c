
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct twofish_ctx {int dummy; } ;


 int FUNC_0 (int,int,int ,int ,int ,int ) ;
 int FUNC_1 (int,int,int ,int ,int ,int ) ;
 int FUNC_2 (int,int,int ,int ,int ,int ) ;
 int FUNC_3 (int ,int ,int ,int ,int,int,int,int,int) ;
 int FUNC_4 (int,int ,int ) ;
 int FUNC_5 (int,int ,int ) ;
 int FUNC_6 (int,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int * VAR_2 ;
 int * VAR_3 ;
 int * VAR_4 ;
 int VAR_5 ;

int FUNC_7(struct twofish_ctx *VAR_6, const u8 *VAR_7,
       unsigned int VAR_8, u32 *VAR_9)
{
 int VAR_10, VAR_11, VAR_12;


 u32 VAR_13, VAR_14;



 u8 VAR_15 = 0, VAR_16 = 0, VAR_17 = 0, VAR_18 = 0, VAR_19 = 0, VAR_20 = 0, VAR_21 = 0, VAR_22 = 0;
 u8 VAR_23 = 0, VAR_24 = 0, VAR_25 = 0, VAR_26 = 0, VAR_27 = 0, VAR_28 = 0, VAR_29 = 0, VAR_30 = 0;


 u8 VAR_31;


 if (VAR_8 % 8)
 {
  *VAR_9 |= VAR_0;
  return -VAR_1;
 }





 FUNC_3 (VAR_15, VAR_16, VAR_17, VAR_18, 0, 0x00, 0x2D, 0x01, 0x2D);
 FUNC_3 (VAR_15, VAR_16, VAR_17, VAR_18, 1, 0x2D, 0xA4, 0x44, 0x8A);
 FUNC_3 (VAR_15, VAR_16, VAR_17, VAR_18, 2, 0x8A, 0xD5, 0xBF, 0xD1);
 FUNC_3 (VAR_15, VAR_16, VAR_17, VAR_18, 3, 0xD1, 0x7F, 0x3D, 0x99);
 FUNC_3 (VAR_15, VAR_16, VAR_17, VAR_18, 4, 0x99, 0x46, 0x66, 0x96);
 FUNC_3 (VAR_15, VAR_16, VAR_17, VAR_18, 5, 0x96, 0x3C, 0x5B, 0xED);
 FUNC_3 (VAR_15, VAR_16, VAR_17, VAR_18, 6, 0xED, 0x37, 0x4F, 0xE0);
 FUNC_3 (VAR_15, VAR_16, VAR_17, VAR_18, 7, 0xE0, 0xD0, 0x8C, 0x17);
 FUNC_3 (VAR_19, VAR_20, VAR_21, VAR_22, 8, 0x00, 0x2D, 0x01, 0x2D);
 FUNC_3 (VAR_19, VAR_20, VAR_21, VAR_22, 9, 0x2D, 0xA4, 0x44, 0x8A);
 FUNC_3 (VAR_19, VAR_20, VAR_21, VAR_22, 10, 0x8A, 0xD5, 0xBF, 0xD1);
 FUNC_3 (VAR_19, VAR_20, VAR_21, VAR_22, 11, 0xD1, 0x7F, 0x3D, 0x99);
 FUNC_3 (VAR_19, VAR_20, VAR_21, VAR_22, 12, 0x99, 0x46, 0x66, 0x96);
 FUNC_3 (VAR_19, VAR_20, VAR_21, VAR_22, 13, 0x96, 0x3C, 0x5B, 0xED);
 FUNC_3 (VAR_19, VAR_20, VAR_21, VAR_22, 14, 0xED, 0x37, 0x4F, 0xE0);
 FUNC_3 (VAR_19, VAR_20, VAR_21, VAR_22, 15, 0xE0, 0xD0, 0x8C, 0x17);

 if (VAR_8 == 24 || VAR_8 == 32) {

  FUNC_3 (VAR_23, VAR_24, VAR_25, VAR_26, 16, 0x00, 0x2D, 0x01, 0x2D);
  FUNC_3 (VAR_23, VAR_24, VAR_25, VAR_26, 17, 0x2D, 0xA4, 0x44, 0x8A);
  FUNC_3 (VAR_23, VAR_24, VAR_25, VAR_26, 18, 0x8A, 0xD5, 0xBF, 0xD1);
  FUNC_3 (VAR_23, VAR_24, VAR_25, VAR_26, 19, 0xD1, 0x7F, 0x3D, 0x99);
  FUNC_3 (VAR_23, VAR_24, VAR_25, VAR_26, 20, 0x99, 0x46, 0x66, 0x96);
  FUNC_3 (VAR_23, VAR_24, VAR_25, VAR_26, 21, 0x96, 0x3C, 0x5B, 0xED);
  FUNC_3 (VAR_23, VAR_24, VAR_25, VAR_26, 22, 0xED, 0x37, 0x4F, 0xE0);
  FUNC_3 (VAR_23, VAR_24, VAR_25, VAR_26, 23, 0xE0, 0xD0, 0x8C, 0x17);
 }

 if (VAR_8 == 32) {

  FUNC_3 (VAR_27, VAR_28, VAR_29, VAR_30, 24, 0x00, 0x2D, 0x01, 0x2D);
  FUNC_3 (VAR_27, VAR_28, VAR_29, VAR_30, 25, 0x2D, 0xA4, 0x44, 0x8A);
  FUNC_3 (VAR_27, VAR_28, VAR_29, VAR_30, 26, 0x8A, 0xD5, 0xBF, 0xD1);
  FUNC_3 (VAR_27, VAR_28, VAR_29, VAR_30, 27, 0xD1, 0x7F, 0x3D, 0x99);
  FUNC_3 (VAR_27, VAR_28, VAR_29, VAR_30, 28, 0x99, 0x46, 0x66, 0x96);
  FUNC_3 (VAR_27, VAR_28, VAR_29, VAR_30, 29, 0x96, 0x3C, 0x5B, 0xED);
  FUNC_3 (VAR_27, VAR_28, VAR_29, VAR_30, 30, 0xED, 0x37, 0x4F, 0xE0);
  FUNC_3 (VAR_27, VAR_28, VAR_29, VAR_30, 31, 0xE0, 0xD0, 0x8C, 0x17);


  for ( VAR_10 = VAR_11 = 0, VAR_12 = 1; VAR_10 < 256; VAR_10++, VAR_11 += 2, VAR_12 += 2 ) {
   FUNC_5( VAR_10, VAR_2[VAR_11], VAR_2[VAR_12] );
  }
  for ( VAR_10 = 0; VAR_10 < 8; VAR_10 += 2 ) {
   FUNC_2 (VAR_5, VAR_10, VAR_3[VAR_10], VAR_4[VAR_10], VAR_3[VAR_10+1], VAR_4[VAR_10+1]);
  }
  for ( VAR_10 = 0; VAR_10 < 32; VAR_10 += 2 ) {
   FUNC_2 (VAR_12, VAR_10, VAR_3[VAR_10+8], VAR_4[VAR_10+8], VAR_3[VAR_10+9], VAR_4[VAR_10+9]);
  }
 } else if (VAR_8 == 24) {

  for ( VAR_10 = VAR_11 = 0, VAR_12 = 1; VAR_10 < 256; VAR_10++, VAR_11 += 2, VAR_12 += 2 ) {
          FUNC_4( VAR_10, VAR_2[VAR_11], VAR_2[VAR_12] );
  }


  for ( VAR_10 = 0; VAR_10 < 8; VAR_10 += 2 ) {
   FUNC_1 (VAR_5, VAR_10, VAR_3[VAR_10], VAR_4[VAR_10], VAR_3[VAR_10+1], VAR_4[VAR_10+1]);
  }
  for ( VAR_10 = 0; VAR_10 < 32; VAR_10 += 2 ) {
   FUNC_1 (VAR_12, VAR_10, VAR_3[VAR_10+8], VAR_4[VAR_10+8], VAR_3[VAR_10+9], VAR_4[VAR_10+9]);
  }
 } else {

  for ( VAR_10 = VAR_11 = 0, VAR_12 = 1; VAR_10 < 256; VAR_10++, VAR_11 += 2, VAR_12 += 2 ) {
   FUNC_6( VAR_10, VAR_2[VAR_11], VAR_2[VAR_12] );
  }


  for ( VAR_10 = 0; VAR_10 < 8; VAR_10 += 2 ) {
   FUNC_0 (VAR_5, VAR_10, VAR_3[VAR_10], VAR_4[VAR_10], VAR_3[VAR_10+1], VAR_4[VAR_10+1]);
  }
  for ( VAR_10 = 0; VAR_10 < 32; VAR_10 += 2 ) {
   FUNC_0 (VAR_12, VAR_10, VAR_3[VAR_10+8], VAR_4[VAR_10+8], VAR_3[VAR_10+9], VAR_4[VAR_10+9]);
  }
 }

 return 0;
}
