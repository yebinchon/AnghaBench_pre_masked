
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,...) ;

void
FUNC_1(char *VAR_0, int VAR_1)
{
 int VAR_2, VAR_3;

 for (VAR_3 = 0; VAR_1 > 0; VAR_3 += 16, VAR_1 -= 16) {
  FUNC_0("%s%04x:", VAR_3 == 0 ? "\n" : "", VAR_3);
  VAR_2 = (VAR_1 >= 16 ? 16 : VAR_1);
  do {
   FUNC_0(" %02x", *VAR_0++ & 0xff);
  } while (--VAR_2);
  FUNC_0("\n");
 }
}
