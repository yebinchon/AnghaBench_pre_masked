
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;



__attribute__((used)) static void FUNC_0(u32 VAR_0, u32 VAR_1,
       int *VAR_2, int *VAR_3, int *VAR_4)
{
 int VAR_5, VAR_6, VAR_7;
 int VAR_8;

 VAR_5 = VAR_6 = -1;
 VAR_8 = 0;
 do {
  if ((VAR_5 == -1) && ((VAR_1 >> VAR_8) & 1))
   VAR_5 = VAR_8;
  if ((VAR_6 == -1) && ((VAR_0 >> (32 - VAR_8 - 1)) & 1))
   VAR_6 = (64 - VAR_8 - 1);
 } while (++VAR_8 < 32 && (VAR_6 == -1 ||
          VAR_5 == -1));
 if (VAR_8 == 32) {
  VAR_8 = 0;
  do {
   if (VAR_5 == -1 && ((VAR_0 >> VAR_8) & 1))
    VAR_5 = VAR_8 + 32;
   if (VAR_6 == -1 &&
       ((VAR_1 >> (32 - VAR_8 - 1)) & 1))
    VAR_6 = 32 - VAR_8 - 1;
  } while (++VAR_8 < 32 && (VAR_6 == -1 ||
          VAR_5 == -1));
 }

 VAR_7 = 1;
 for (VAR_8 = VAR_5; VAR_8 <= VAR_6; VAR_8++) {
  if (VAR_8 < 32) {
   if ((VAR_1 & (1 << VAR_8)) != 0)
    continue;
  } else {
   if ((VAR_0 & (1 << (VAR_8 - 32))) != 0)
    continue;
  }
  VAR_7 = 0;
  break;
 }
 *VAR_2 = VAR_6;
 *VAR_3 = VAR_5;
 *VAR_4 = VAR_7;
}
