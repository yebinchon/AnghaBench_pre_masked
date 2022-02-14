
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
typedef int u_int8_t ;


 int FUNC_0 (char*,int const) ;
 int FUNC_1 (char*) ;

__attribute__((used)) static void
FUNC_2(const uint8_t *VAR_0, uint32_t VAR_1)
{
 const uint8_t *VAR_2;
 char VAR_3[128];
 int VAR_4;
 int VAR_5;
 int VAR_6;

 for (VAR_2 = VAR_0; VAR_2 < (VAR_0 + VAR_1); VAR_2 += 16) {

  VAR_4 = 0;

  VAR_3[VAR_4] = ' ';
  FUNC_0(VAR_3 + VAR_4 + 1, ((VAR_2 - VAR_0) >> 8) & 0xFF);
  FUNC_0(VAR_3 + VAR_4 + 3, (VAR_2 - VAR_0) & 0xFF);
  VAR_3[VAR_4 + 5] = ' ';
  VAR_3[VAR_4 + 6] = ' ';
  VAR_4 += 7;

  for (VAR_5 = 0; VAR_5 < 16; VAR_5++) {
    if ((VAR_2 + VAR_5) < (VAR_0 + VAR_1)) {
   FUNC_0(VAR_3 + VAR_4,
       *(const u_int8_t *)(VAR_2 + VAR_5));
    } else {
     VAR_3[VAR_4] = '-';
     VAR_3[VAR_4 + 1] = '-';
   }
   VAR_3[VAR_4 + 2] = ' ';
   if (VAR_5 == 7) {
     VAR_3[VAR_4 + 3] = ' ';
     VAR_4 += 4;
   } else {
     VAR_4 += 3;
   }
  }
  VAR_3[VAR_4] = ' ';
  VAR_3[VAR_4 + 1] = '|';
  VAR_4 += 2;
  for (VAR_5 = 0; VAR_5 < 16; VAR_5++) {
   if ((VAR_2 + VAR_5) < (VAR_0 + VAR_1)) {
    VAR_6 = *(const u_int8_t *)(VAR_2 + VAR_5);

    if ((VAR_6 < ' ') || (VAR_6 > '~'))
     VAR_6 = '.';
    VAR_3[VAR_4] = VAR_6;
   } else {
    VAR_3[VAR_4] = ' ';
   }
   VAR_4++;
  }
  VAR_3[VAR_4] = '|';
  VAR_3[VAR_4 + 1] = 0;
  VAR_4 += 2;
  FUNC_1(VAR_3);
 }
}
