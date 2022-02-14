
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int*,int,int,int ) ;

void FUNC_2 (int *VAR_2, int VAR_3) {
  FUNC_0 (*VAR_2 <= VAR_3);
  FUNC_1 (VAR_2 + 1, *VAR_2, 8, VAR_0);
  int VAR_4;
  int VAR_5 = 0;
  for (VAR_4 = 0; VAR_4 < *VAR_2; VAR_4++) {
    if (VAR_4 == 0 || VAR_2[2 * VAR_4 + 1] != VAR_2[2 * VAR_4 - 1]) {
      VAR_2[2 * VAR_5 + 1] = VAR_2[2 * VAR_4 + 1];
      VAR_2[2 * VAR_5 + 2] = VAR_2[2 * VAR_4 + 2];
      VAR_5 ++;
    } else {
      VAR_2[2 * VAR_5] += VAR_2[2 * VAR_4 + 2];
    }
  }
  *VAR_2 = VAR_5;
  FUNC_1 (VAR_2 + 1, *VAR_2, 8, VAR_1);
}
