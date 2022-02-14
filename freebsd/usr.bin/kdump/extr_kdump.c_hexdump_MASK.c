
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,...) ;

void
FUNC_1(char *VAR_0, int VAR_1, int VAR_2)
{
 int VAR_3, VAR_4;
 int VAR_5;

 VAR_5 = 0;
 do {
  VAR_5 += 2;
  VAR_4 = 13;
  VAR_4 += (VAR_5 / 2) + 1;
  VAR_4 += (VAR_5 * 2);
  VAR_4 += 3;
  VAR_4 += VAR_5;
  VAR_4 += 1;
 } while (VAR_4 < VAR_2);
 VAR_5 -= 2;

 for (VAR_3 = 0; VAR_3 < VAR_1; VAR_3 += VAR_5) {
  for (VAR_4 = VAR_3; VAR_4 < VAR_3 + VAR_5; VAR_4++) {
   if ((VAR_4 % VAR_5) == 0) {
    FUNC_0("       0x%04x", VAR_4);
   }
   if ((VAR_4 % 2) == 0) {
    FUNC_0(" ");
   }
   if (VAR_4 < VAR_1)
    FUNC_0("%02x", VAR_0[VAR_4] & 0xff);
   else
    FUNC_0("  ");
  }
  FUNC_0("  |");
  for (VAR_4 = VAR_3; VAR_4 < VAR_3 + VAR_5; VAR_4++) {
   if (VAR_4 >= VAR_1)
    break;
   if (VAR_0[VAR_4] >= ' ' && VAR_0[VAR_4] <= '~')
    FUNC_0("%c", VAR_0[VAR_4]);
   else
    FUNC_0(".");
  }
  FUNC_0("|\n");
 }
 if ((VAR_4 % VAR_5) != 0)
  FUNC_0("\n");
}
