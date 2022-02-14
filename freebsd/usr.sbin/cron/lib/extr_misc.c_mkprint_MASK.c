
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,char*,unsigned char) ;

__attribute__((used)) static void
FUNC_1(register char *VAR_0, register unsigned char *VAR_1, register int VAR_2)
{
 while (VAR_2-- > 0)
 {
  register unsigned char VAR_3 = *VAR_1++;

  if (VAR_3 < ' ') {
   *VAR_0++ = '^';
   *VAR_0++ = VAR_3 + '@';
  } else if (VAR_3 < 0177) {
   *VAR_0++ = VAR_3;
  } else if (VAR_3 == 0177) {
   *VAR_0++ = '^';
   *VAR_0++ = '?';
  } else {
   FUNC_0(VAR_0, "\\%03o", VAR_3);
   VAR_0 += 4;
  }
 }
 *VAR_0 = '\0';
}
