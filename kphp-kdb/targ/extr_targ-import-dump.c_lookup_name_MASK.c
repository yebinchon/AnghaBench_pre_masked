
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;

char *FUNC_0 (char *VAR_1, int VAR_2, int VAR_3, int *VAR_4, int VAR_5) {
  *VAR_4 = 0;
  if (!VAR_1 || VAR_2 < VAR_0 * 4 || VAR_3 <= 0 || VAR_3 >= VAR_0) {
    return 0;
  }
  int VAR_6 = ((int *) VAR_1)[VAR_3];
  if (VAR_6 < VAR_0 * 4 || VAR_6 + 4 > VAR_2) {
    return 0;
  }
  int VAR_7 = *((int *) (VAR_1 + VAR_6));
  if ((unsigned) VAR_7 > (unsigned) VAR_5 || VAR_6 + VAR_7 + 5 > VAR_2) {
    return 0;
  }
  *VAR_4 = VAR_7;
  return VAR_1 + VAR_6 + 4;
}
