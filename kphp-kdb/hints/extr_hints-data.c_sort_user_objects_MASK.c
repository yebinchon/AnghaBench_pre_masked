
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int user ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int * FUNC_3 (int) ;
 int FUNC_4 (int *,int*,int,int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int,int,int*,int *,int*) ;
 int* VAR_3 ;
 int * FUNC_7 (int *,int,int ) ;
 scalar_t__ FUNC_8 (int *,int,int,int) ;
 int* VAR_4 ;
 int FUNC_9 (int *,long long) ;
 long long FUNC_10 (int *,int) ;
 int FUNC_11 (int *,int,int) ;
 int * VAR_5 ;

int FUNC_12 (int VAR_6, int VAR_7, long long *VAR_8, int VAR_9, int VAR_10, int VAR_11) {
  if (!FUNC_2 (VAR_6) || !FUNC_1 (VAR_10)) {
    VAR_2++;
    return -1;
  }

  int VAR_12 = FUNC_5 (VAR_6);
  if (VAR_12 == 0) {
    return 0;
  }
  FUNC_0 (VAR_12 > 0);

  user *VAR_13 = FUNC_3 (VAR_6);
  FUNC_0 (VAR_13 != ((void*)0));

  if (FUNC_7 (VAR_13, VAR_12, VAR_1) == ((void*)0)) {
    return -2;
  }

  FUNC_0 (VAR_8 != ((void*)0));

  int VAR_14, VAR_15, VAR_16, VAR_17;

  if (VAR_7 > VAR_0) {
    VAR_7 = VAR_0;
  }

  if (VAR_9 > VAR_0) {
    VAR_9 = VAR_0;
  }

  if (VAR_9 < 0) {
    VAR_9 = 0;
  }

  int VAR_18 = 0;
  for (VAR_14 = 0; VAR_14 < VAR_7; VAR_14++) {
    int VAR_19 = FUNC_9 (VAR_13, VAR_8[VAR_14]);
    if (VAR_19) {
      VAR_4[VAR_18++] = VAR_19;
    }
  }

  int VAR_20 = 0;
  if (VAR_9) {
    for (VAR_14 = 0; VAR_14 < VAR_18; VAR_14++) {
      if (VAR_11) {
        VAR_3[++VAR_20] = VAR_4[VAR_14];
      } else {
        if (VAR_20 < VAR_9) {
          VAR_3[++VAR_20] = VAR_4[VAR_14];
          VAR_15 = VAR_20;
          while (VAR_15 > 1 && FUNC_8 (VAR_13, VAR_3[VAR_15], VAR_3[VAR_16 = VAR_15 / 2], VAR_10) < 0) {
            VAR_17 = VAR_3[VAR_15], VAR_3[VAR_15] = VAR_3[VAR_16], VAR_3[VAR_16] = VAR_17;
            VAR_15 = VAR_16;
          }
        } else if (FUNC_8 (VAR_13, VAR_3[1], VAR_4[VAR_14], VAR_10) < 0) {
          VAR_3[1] = VAR_4[VAR_14];
          FUNC_4 (VAR_13, VAR_3, VAR_20, VAR_10);
        }
      }
    }
  }

  if (VAR_11) {
    for (VAR_14 = 1; VAR_14 <= VAR_20; VAR_14++) {
      VAR_5[VAR_14 - 1] = FUNC_11 (VAR_13, VAR_3[VAR_14], VAR_10);
    }
    VAR_18 = FUNC_6 (VAR_9, VAR_20, VAR_3 + 1, VAR_5, VAR_4);
  } else {
    VAR_18 = VAR_20;
    while (VAR_20) {
      VAR_4[VAR_20 - 1] = VAR_3[1];
      VAR_3[1] = VAR_3[VAR_20--];
      FUNC_4 (VAR_13, VAR_3, VAR_20, VAR_10);
    }
  }

  for (VAR_14 = 0; VAR_14 < VAR_18; VAR_14++) {
    VAR_8[VAR_14] = FUNC_10 (VAR_13, VAR_4[VAR_14]);
  }

  return VAR_18;
}
