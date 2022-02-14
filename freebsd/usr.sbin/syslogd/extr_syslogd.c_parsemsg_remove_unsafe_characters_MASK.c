
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ VAR_0 ;

__attribute__((used)) static void
FUNC_2(const char *VAR_1, char *VAR_2, size_t VAR_3)
{
 char *VAR_4;
 int VAR_5;

 VAR_4 = VAR_2;
 while ((VAR_5 = (unsigned char)*VAR_1++) != '\0' && VAR_4 < VAR_2 + VAR_3 - 4) {
  if (VAR_0 && (VAR_5 & 0x80) && VAR_5 < 0xA0) {
   VAR_5 &= 0x7F;
   *VAR_4++ = 'M';
   *VAR_4++ = '-';
  }
  if (FUNC_0(VAR_5) && FUNC_1(VAR_5)) {
   if (VAR_5 == '\n') {
    *VAR_4++ = ' ';
   } else if (VAR_5 == '\t') {
    *VAR_4++ = '\t';
   } else {
    *VAR_4++ = '^';
    *VAR_4++ = VAR_5 ^ 0100;
   }
  } else {
   *VAR_4++ = VAR_5;
  }
 }
 *VAR_4 = '\0';
}
