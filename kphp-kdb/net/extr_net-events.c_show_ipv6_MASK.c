
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (unsigned short const*,char*) ;

char *FUNC_1 (const unsigned char VAR_0[16]) {
  static char VAR_1[256], *VAR_2 = VAR_1;
  char *VAR_3;
  if (VAR_2 > VAR_1 + 200) {
    VAR_2 = VAR_1;
  }
  VAR_3 = VAR_2;
  VAR_2 += FUNC_0 ((const unsigned short *) VAR_0, VAR_2) + 1;
  return VAR_3;
}
