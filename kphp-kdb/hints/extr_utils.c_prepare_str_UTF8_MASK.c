
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int*,int*) ;
 int* VAR_1 ;
 int* VAR_2 ;
 int FUNC_3 (int**,int,int,int ) ;
 int VAR_3 ;
 int** VAR_4 ;

int *FUNC_4 (int *VAR_5) {
  int *VAR_6 = VAR_1;

  int VAR_7, VAR_8;
  for (VAR_7 = 0; VAR_5[VAR_7]; VAR_7++) {
    VAR_6[VAR_7] = FUNC_1 (VAR_5[VAR_7]);
  }

  int VAR_9 = 0;
  VAR_8 = VAR_7;
  for (VAR_7 = 0; VAR_6[VAR_7] == ' '; VAR_7++) {
  }

  int VAR_10 = 0;
  while (VAR_7 < VAR_8) {
    VAR_4[VAR_10++] = VAR_6 + VAR_7;
    while (VAR_6[VAR_7] && VAR_6[VAR_7] != ' ') {
      VAR_7++;
    }
    while (VAR_6[VAR_7] == ' ') {
      VAR_7++;
    }
  }
  VAR_6[VAR_8] = ' ';

  VAR_9 = 0;
  FUNC_3 (VAR_4, VAR_10, sizeof (int *), VAR_3);

  for (VAR_7 = 0; VAR_7 < VAR_10; VAR_7++) {
    if (VAR_7 == 0 || !FUNC_2 (VAR_4[VAR_9 - 1], VAR_4[VAR_7])) {
      VAR_4[VAR_9++] = VAR_4[VAR_7];
    } else {
      VAR_4[VAR_9 - 1] = VAR_4[VAR_7];
    }
  }
  VAR_10 = VAR_9;

  int *VAR_11 = VAR_2;
  for (VAR_7 = 0; VAR_7 < VAR_10; VAR_7++) {
    int *VAR_12 = VAR_4[VAR_7];
    while (*VAR_12 != ' ') {
      *VAR_11++ = *VAR_12++;
    }
    *VAR_11++ = '+';
  }
  *VAR_11++ = 0;

  FUNC_0 (VAR_11 - VAR_2 < VAR_0);
  return VAR_2;
}
