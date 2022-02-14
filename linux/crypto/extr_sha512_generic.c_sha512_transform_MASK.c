
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u64 ;


 int FUNC_0 (int,scalar_t__*) ;
 scalar_t__ FUNC_1 (scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_2 (int,scalar_t__*,int const*) ;
 scalar_t__ FUNC_3 (scalar_t__,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 scalar_t__* VAR_0 ;

__attribute__((used)) static void
FUNC_6(u64 *VAR_1, const u8 *VAR_2)
{
 u64 VAR_3, VAR_4, VAR_5, VAR_6, VAR_7, VAR_8, VAR_9, VAR_10, VAR_11, VAR_12;

 int VAR_13;
 u64 VAR_14[16];


 VAR_3=VAR_1[0]; VAR_4=VAR_1[1]; VAR_5=VAR_1[2]; VAR_6=VAR_1[3];
 VAR_7=VAR_1[4]; VAR_8=VAR_1[5]; VAR_9=VAR_1[6]; VAR_10=VAR_1[7];


 for (VAR_13=0; VAR_13<80; VAR_13+=8) {
  if (!(VAR_13 & 8)) {
   int VAR_15;

   if (VAR_13 < 16) {

    for (VAR_15 = 0; VAR_15 < 16; VAR_15++)
     FUNC_2(VAR_13 + VAR_15, VAR_14, VAR_2);
   } else {
    for (VAR_15 = 0; VAR_15 < 16; VAR_15++) {
     FUNC_0(VAR_13 + VAR_15, VAR_14);
    }
   }
  }

  VAR_11 = VAR_10 + FUNC_5(VAR_7) + FUNC_1(VAR_7,VAR_8,VAR_9) + VAR_0[VAR_13 ] + VAR_14[(VAR_13 & 15)];
  VAR_12 = FUNC_4(VAR_3) + FUNC_3(VAR_3,VAR_4,VAR_5); VAR_6+=VAR_11; VAR_10=VAR_11+VAR_12;
  VAR_11 = VAR_9 + FUNC_5(VAR_6) + FUNC_1(VAR_6,VAR_7,VAR_8) + VAR_0[VAR_13+1] + VAR_14[(VAR_13 & 15) + 1];
  VAR_12 = FUNC_4(VAR_10) + FUNC_3(VAR_10,VAR_3,VAR_4); VAR_5+=VAR_11; VAR_9=VAR_11+VAR_12;
  VAR_11 = VAR_8 + FUNC_5(VAR_5) + FUNC_1(VAR_5,VAR_6,VAR_7) + VAR_0[VAR_13+2] + VAR_14[(VAR_13 & 15) + 2];
  VAR_12 = FUNC_4(VAR_9) + FUNC_3(VAR_9,VAR_10,VAR_3); VAR_4+=VAR_11; VAR_8=VAR_11+VAR_12;
  VAR_11 = VAR_7 + FUNC_5(VAR_4) + FUNC_1(VAR_4,VAR_5,VAR_6) + VAR_0[VAR_13+3] + VAR_14[(VAR_13 & 15) + 3];
  VAR_12 = FUNC_4(VAR_8) + FUNC_3(VAR_8,VAR_9,VAR_10); VAR_3+=VAR_11; VAR_7=VAR_11+VAR_12;
  VAR_11 = VAR_6 + FUNC_5(VAR_3) + FUNC_1(VAR_3,VAR_4,VAR_5) + VAR_0[VAR_13+4] + VAR_14[(VAR_13 & 15) + 4];
  VAR_12 = FUNC_4(VAR_7) + FUNC_3(VAR_7,VAR_8,VAR_9); VAR_10+=VAR_11; VAR_6=VAR_11+VAR_12;
  VAR_11 = VAR_5 + FUNC_5(VAR_10) + FUNC_1(VAR_10,VAR_3,VAR_4) + VAR_0[VAR_13+5] + VAR_14[(VAR_13 & 15) + 5];
  VAR_12 = FUNC_4(VAR_6) + FUNC_3(VAR_6,VAR_7,VAR_8); VAR_9+=VAR_11; VAR_5=VAR_11+VAR_12;
  VAR_11 = VAR_4 + FUNC_5(VAR_9) + FUNC_1(VAR_9,VAR_10,VAR_3) + VAR_0[VAR_13+6] + VAR_14[(VAR_13 & 15) + 6];
  VAR_12 = FUNC_4(VAR_5) + FUNC_3(VAR_5,VAR_6,VAR_7); VAR_8+=VAR_11; VAR_4=VAR_11+VAR_12;
  VAR_11 = VAR_3 + FUNC_5(VAR_8) + FUNC_1(VAR_8,VAR_9,VAR_10) + VAR_0[VAR_13+7] + VAR_14[(VAR_13 & 15) + 7];
  VAR_12 = FUNC_4(VAR_4) + FUNC_3(VAR_4,VAR_5,VAR_6); VAR_7+=VAR_11; VAR_3=VAR_11+VAR_12;
 }

 VAR_1[0] += VAR_3; VAR_1[1] += VAR_4; VAR_1[2] += VAR_5; VAR_1[3] += VAR_6;
 VAR_1[4] += VAR_7; VAR_1[5] += VAR_8; VAR_1[6] += VAR_9; VAR_1[7] += VAR_10;


 VAR_3 = VAR_4 = VAR_5 = VAR_6 = VAR_7 = VAR_8 = VAR_9 = VAR_10 = VAR_11 = VAR_12 = 0;
}
