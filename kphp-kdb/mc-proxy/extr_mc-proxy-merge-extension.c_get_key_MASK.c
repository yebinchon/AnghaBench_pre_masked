
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char const* VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (char const*,char*,int) ;

int FUNC_1 (const char *VAR_2, int VAR_3) {
  const char *VAR_4 = VAR_2, *VAR_5 = VAR_2 + VAR_3;

  if (!VAR_3) {
    return 0;
  }

  if (VAR_3 < 5 || FUNC_0 (VAR_2, "VALUE", 5)) {
    return 0;
  }
  VAR_4 += 5;

  while (VAR_4 < VAR_5 && *VAR_4 == ' ') {
    VAR_4++;
  }
  if (VAR_4 >= VAR_5) {
    return 0;
  }
  const char *VAR_6 = VAR_4;
  while (VAR_4 < VAR_5 && (unsigned char) *VAR_4 > ' ') {
    VAR_4++;
  }
  if (VAR_4 >= VAR_5) {
    return 0;
  }
  VAR_0 = VAR_6;
  VAR_1 = VAR_4 - VAR_6;
  return 1;
}
