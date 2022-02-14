
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int* VAR_1 ;
 int* VAR_2 ;
 int FUNC_0 (int ,char*,int) ;
 int VAR_3 ;

void FUNC_1 (int VAR_4) {
  int VAR_5, VAR_6;
  int VAR_7;
  if (!VAR_4) { return; }

  VAR_5 = VAR_6 = VAR_4;
  if (VAR_5 < 0) { VAR_5 = 17-VAR_5; }
  VAR_5 = VAR_5 % VAR_0;
  if (VAR_6 < 0) { VAR_6 = 17239-VAR_6; }
  if (VAR_5 < 0 || VAR_6 < 0) { return; }
  VAR_6 = 1 + (VAR_6 % (VAR_0 - 1));
  while ((VAR_7 = VAR_1[VAR_5]) != 0) {
    if (VAR_7 == VAR_4) {
      VAR_2[VAR_5]++;
      return;
    }
    VAR_5 += VAR_6;
    if (VAR_5 >= VAR_0) { VAR_5 -= VAR_0; }
  }
  VAR_1[VAR_5] = VAR_4;
  VAR_2[VAR_5] = 1;
  FUNC_0 (VAR_3, "%d\n", VAR_4);
  return;
}
