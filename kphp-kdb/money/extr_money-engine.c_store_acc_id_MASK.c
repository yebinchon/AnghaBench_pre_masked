
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*,char*,long long) ;

char *FUNC_2 (char *VAR_1, int VAR_2, long long VAR_3) {
  int VAR_4;
  FUNC_0 (VAR_2 >= 0 && VAR_2 <= VAR_0);
  if (VAR_2 >= 27 * 27) {
    *VAR_1++ = 64 + (VAR_2 / (27 * 27));
  }
  if (VAR_2 >= 27) {
    VAR_4 = VAR_2 / 27 % 27;
    *VAR_1++ = (VAR_4 > 0 ? 64 + VAR_4 : '_');
  }
  if (VAR_2) {
    VAR_4 = VAR_2 % 27;
    *VAR_1++ = (VAR_4 > 0 ? 64 + VAR_4 : '_');
  }
  return VAR_1 + FUNC_1 (VAR_1, "%lld", VAR_3);
}
