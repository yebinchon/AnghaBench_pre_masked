
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*,int,int) ;
 int VAR_0 ;

int FUNC_2 (int *VAR_1, int VAR_2, int VAR_3, int VAR_4) {
  int VAR_5, VAR_6 = 0;
  for (VAR_5 = 0; VAR_5 < VAR_2; VAR_5++) {
    if (VAR_4 + 1 < VAR_1[2 * VAR_5 + 1]) {
      FUNC_1 (VAR_0, "max = %d, cur = %d\n", VAR_4, VAR_1[2 * VAR_5 + 1]);
    }
    FUNC_0 (VAR_1[2 * VAR_5 + 1] <= VAR_4 + 1);
    if (VAR_1[2 * VAR_5 + 1] >= VAR_3 ) {
      VAR_6 ++;
    }
  }
  return VAR_6;
}
