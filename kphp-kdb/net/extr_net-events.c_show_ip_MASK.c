
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (char*,char*,unsigned int,unsigned int,unsigned int,unsigned int) ;

char *FUNC_1 (unsigned VAR_0) {
  static char VAR_1[256], *VAR_2 = VAR_1;
  char *VAR_3;
  if (VAR_2 > VAR_1 + 200) {
    VAR_2 = VAR_1;
  }
  VAR_3 = VAR_2;
  VAR_2 += FUNC_0 (VAR_2, "%d.%d.%d.%d", VAR_0 >> 24, (VAR_0 >> 16) & 0xff, (VAR_0 >> 8) & 0xff, VAR_0 & 0xff) + 1;
  return VAR_3;
}
