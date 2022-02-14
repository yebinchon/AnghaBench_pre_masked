
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;



__attribute__((used)) static unsigned long FUNC_0(unsigned long VAR_0,
          unsigned long VAR_1,
          u8 VAR_2,
          u8 *VAR_3,
          bool *VAR_4)
{
 unsigned long VAR_5 = 0;
 u8 VAR_6 = 0, VAR_7;
 bool VAR_8 = 0;

 for (VAR_7 = VAR_2 ?: 1; VAR_7 < (16 + VAR_2); VAR_7++) {
  u8 VAR_9;

  for (VAR_9 = 1; VAR_9 < 3; VAR_9++) {
   unsigned long VAR_10;

   VAR_10 = VAR_1 / VAR_7 / VAR_9;

   if (VAR_10 > VAR_0)
    continue;

   if (!VAR_5 ||
       (VAR_0 - VAR_10) < (VAR_0 - VAR_5)) {
    VAR_5 = VAR_10;
    VAR_6 = VAR_7;
    VAR_8 = (VAR_9 == 2) ? 1 : 0;
   }
  }
 }

 if (VAR_3 && VAR_4) {
  *VAR_3 = VAR_6;
  *VAR_4 = VAR_8;
 }

 return VAR_5;
}
