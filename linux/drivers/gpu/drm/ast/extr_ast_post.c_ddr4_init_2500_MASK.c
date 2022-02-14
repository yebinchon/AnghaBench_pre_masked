
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ast_private {int dummy; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 size_t VAR_10 ;
 size_t VAR_11 ;
 size_t VAR_12 ;
 size_t VAR_13 ;
 size_t VAR_14 ;
 size_t VAR_15 ;
 size_t VAR_16 ;
 int FUNC_0 (struct ast_private*,int) ;
 int FUNC_1 (struct ast_private*,int,int const) ;
 scalar_t__ FUNC_2 (struct ast_private*) ;
 int FUNC_3 (struct ast_private*,int const) ;
 int FUNC_4 (struct ast_private*) ;
 int FUNC_5 (struct ast_private*) ;

__attribute__((used)) static void FUNC_6(struct ast_private *VAR_17, const u32 *VAR_18)
{
 u32 VAR_19, VAR_20, VAR_21, VAR_22;
 u32 VAR_23, VAR_24;
 u32 VAR_25 = 0, VAR_26 = 0;
 u32 VAR_27 = 0, VAR_28 = 0;

 FUNC_1(VAR_17, 0x1E6E0004, 0x00000313);
 FUNC_1(VAR_17, 0x1E6E0010, VAR_18[VAR_0]);
 FUNC_1(VAR_17, 0x1E6E0014, VAR_18[VAR_1]);
 FUNC_1(VAR_17, 0x1E6E0018, VAR_18[VAR_2]);
 FUNC_1(VAR_17, 0x1E6E0020, VAR_18[VAR_3]);
 FUNC_1(VAR_17, 0x1E6E0024, VAR_18[VAR_4]);
 FUNC_1(VAR_17, 0x1E6E002C, VAR_18[VAR_5] | 0x100);
 FUNC_1(VAR_17, 0x1E6E0030, VAR_18[VAR_6]);


 FUNC_1(VAR_17, 0x1E6E0200, 0x42492AAE);
 FUNC_1(VAR_17, 0x1E6E0204, 0x09002000);
 FUNC_1(VAR_17, 0x1E6E020C, 0x55E00B0B);
 FUNC_1(VAR_17, 0x1E6E0210, 0x20000000);
 FUNC_1(VAR_17, 0x1E6E0214, VAR_18[VAR_7]);
 FUNC_1(VAR_17, 0x1E6E02E0, VAR_18[VAR_8]);
 FUNC_1(VAR_17, 0x1E6E02E4, VAR_18[VAR_9]);
 FUNC_1(VAR_17, 0x1E6E02E8, VAR_18[VAR_10]);
 FUNC_1(VAR_17, 0x1E6E02EC, VAR_18[VAR_11]);
 FUNC_1(VAR_17, 0x1E6E02F0, VAR_18[VAR_12]);
 FUNC_1(VAR_17, 0x1E6E02F4, VAR_18[VAR_13]);
 FUNC_1(VAR_17, 0x1E6E02F8, VAR_18[VAR_14]);
 FUNC_1(VAR_17, 0x1E6E0290, 0x00100008);
 FUNC_1(VAR_17, 0x1E6E02C4, 0x3C183C3C);
 FUNC_1(VAR_17, 0x1E6E02C8, 0x00631E0E);


 FUNC_1(VAR_17, 0x1E6E0034, 0x0001A991);


 VAR_21 = 0;

 for (VAR_22 = 0; VAR_22 < 4 && VAR_21 == 0; VAR_22++) {
  VAR_28 = 0x0;
  VAR_21 = 0;
  FUNC_1(VAR_17, 0x1E6E02C0, 0x00001C06);
  for (VAR_24 = 0x40; VAR_24 < 0x80; VAR_24++) {
   FUNC_1(VAR_17, 0x1E6E000C, 0x00000000);
   FUNC_1(VAR_17, 0x1E6E0060, 0x00000000);
   FUNC_1(VAR_17, 0x1E6E02CC, VAR_24 | (VAR_24 << 8));

   FUNC_4(VAR_17);
   FUNC_1(VAR_17, 0x1E6E000C, 0x00005C01);
   if (FUNC_2(VAR_17)) {
    VAR_21++;
    VAR_19 = FUNC_0(VAR_17, 0x1E6E03D0);
    VAR_20 = VAR_19 >> 8;
    VAR_19 = VAR_19 & 0xff;
    if (VAR_19 > VAR_20)
     VAR_19 = VAR_20;
    if (VAR_28 < VAR_19) {
     VAR_28 = VAR_19;
     VAR_26 = VAR_24;
    }
   } else if (VAR_21 > 0)
    break;
  }
 }
 FUNC_1(VAR_17, 0x1E6E02CC, VAR_26 | (VAR_26 << 8));


 VAR_21 = 0;

 for (VAR_22 = 0; VAR_22 < 4 && VAR_21 == 0; VAR_22++) {
  VAR_25 = 0xFF;
  VAR_27 = 0x0;
  VAR_21 = 0;
  for (VAR_23 = 0x00; VAR_23 < 0x40; VAR_23++) {
   FUNC_1(VAR_17, 0x1E6E000C, 0x00000000);
   FUNC_1(VAR_17, 0x1E6E0060, 0x00000000);
   FUNC_1(VAR_17, 0x1E6E02C0, 0x00000006 | (VAR_23 << 8));

   FUNC_4(VAR_17);
   FUNC_1(VAR_17, 0x1E6E000C, 0x00005C01);
   if (FUNC_2(VAR_17)) {
    VAR_21++;
    if (VAR_25 > VAR_23)
     VAR_25 = VAR_23;
    if (VAR_27 < VAR_23)
     VAR_27 = VAR_23;
   } else if (VAR_21 != 0)
    break;
  }
 }

 FUNC_1(VAR_17, 0x1E6E000C, 0x00000000);
 FUNC_1(VAR_17, 0x1E6E0060, 0x00000000);
 VAR_23 = (VAR_25 + VAR_27 + 1) >> 1;
 FUNC_1(VAR_17, 0x1E6E02C0, 0x00000006 | (VAR_23 << 8));


 FUNC_4(VAR_17);

 FUNC_1(VAR_17, 0x1E6E0120, VAR_18[VAR_15]);
 FUNC_1(VAR_17, 0x1E6E000C, 0x42AA5C81);
 FUNC_1(VAR_17, 0x1E6E0034, 0x0001AF93);

 FUNC_3(VAR_17, VAR_18[VAR_16]);
 FUNC_5(VAR_17);
 FUNC_1(VAR_17, 0x1E6E001C, 0x00000008);
 FUNC_1(VAR_17, 0x1E6E0038, 0xFFFFFF00);
}
