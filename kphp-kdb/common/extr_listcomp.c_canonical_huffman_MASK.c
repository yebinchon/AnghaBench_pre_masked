
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int*,int*,int) ;
 int FUNC_1 (int*,int ,int) ;
 scalar_t__ FUNC_2 (int ) ;

void FUNC_3 (int *VAR_1, int VAR_2, int VAR_3, int* VAR_4, int *VAR_5, int *VAR_6) {
  int VAR_7;
  int VAR_8[VAR_0+1], VAR_9[VAR_0+1];
  FUNC_1 (&VAR_8[1], 0, VAR_3 * sizeof(int));
  for (VAR_7 = 0; VAR_7 < VAR_2; VAR_7++) {
    VAR_8[VAR_1[VAR_7]]++;
  }
  VAR_4[VAR_3] = 0;
  for (VAR_7 = VAR_3 - 1; VAR_7 >= 1; VAR_7--) {
    VAR_4[VAR_7] = (VAR_4[VAR_7+1] + VAR_8[VAR_7+1]) >> 1;
  }
  FUNC_0 (&VAR_9[1], &VAR_4[1], VAR_3 * sizeof (int));

  if (FUNC_2 (VAR_5 != ((void*)0))) {
    for (VAR_7 = 0; VAR_7 < VAR_2; VAR_7++) {
      int VAR_10 = VAR_1[VAR_7];
      if (!VAR_10) {
        continue;
      }
      VAR_5[VAR_7] = VAR_9[VAR_10];
      VAR_6[(VAR_0+1) * ((VAR_9[VAR_10]++) - VAR_4[VAR_10]) + VAR_10] = VAR_7;
    }
  } else {
    for (VAR_7 = 0; VAR_7 < VAR_2; VAR_7++) {
      int VAR_11 = VAR_1[VAR_7];
      if (!VAR_11) {
        continue;
      }
      VAR_6[(VAR_0+1) * ((VAR_9[VAR_11]++) - VAR_4[VAR_11]) + VAR_11] = VAR_7;
    }
  }
}
