
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char const*,int) ;
 int* VAR_0 ;
 scalar_t__ VAR_1 ;

int FUNC_1 (const char *VAR_2, int VAR_3) {
  if (VAR_1) {
    return FUNC_0 (VAR_2, VAR_3);
  }
  int VAR_4, VAR_5 = -1;
  for (VAR_4 = 0; VAR_4 < VAR_3; VAR_4++) {
    VAR_5 &= VAR_0[(unsigned char) VAR_2[VAR_4]];
  }
  return VAR_5;
}
