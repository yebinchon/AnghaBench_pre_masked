
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int *) ;
 int * VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 scalar_t__ VAR_4 ;

int FUNC_1 (char *VAR_5, int VAR_6) {
  int VAR_7 = 0;
  while (VAR_4 > 0 && VAR_7 < VAR_6) {
    *VAR_5++ = VAR_1[VAR_2];
    VAR_1[VAR_2] = 0;
    if (++VAR_2 == VAR_3) {
      VAR_2 = 0;
    }
    VAR_7++;
    VAR_4--;
  }
  int VAR_8 = 0;
  while (VAR_7 < VAR_6 && VAR_8 < 65536) {
    *VAR_5++ = FUNC_0 (&VAR_0);
    VAR_7++;
    VAR_8++;
  }
  return VAR_7;
}
