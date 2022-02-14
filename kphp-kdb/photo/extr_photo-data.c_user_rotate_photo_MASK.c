
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int user ;


 int FUNC_0 (char*,char) ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (char*,unsigned long long) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 char* VAR_0 ;
 int FUNC_5 (char*,char*,int) ;
 char VAR_1 ;
 int FUNC_6 (char*,int,int,int,int,unsigned long long) ;
 int FUNC_7 (int *) ;
 char* FUNC_8 (int *,int,int ,int,int*) ;
 int FUNC_9 (int *,int,int ,char*,int) ;
 scalar_t__ VAR_2 ;

int FUNC_10 (user *VAR_3, int VAR_4, int VAR_5) {
  if ((VAR_5 != 1 && VAR_5 != 3) || !FUNC_4 (VAR_4)) {
    return 0;
  }

  if (VAR_2) {
    return 1;
  }

  FUNC_3 (FUNC_7 (VAR_3));

  int VAR_6;
  char *VAR_7 = FUNC_8 (VAR_3, VAR_4, 0, 1, &VAR_6);

  if (VAR_7 == ((void*)0)) {
    return 0;
  }

  char *VAR_8 = VAR_0;

  if (VAR_6 > 0 && VAR_7[0] < 0) {
    int VAR_9 = -(VAR_7[0] + VAR_1) + 4 * sizeof (int) + 1;
    FUNC_5 (VAR_8, VAR_7, VAR_9);
    VAR_8 += VAR_9;
    VAR_7 += VAR_9;

    int VAR_10 = 0;
    if ((VAR_8[-1] >= '1' && VAR_8[-1] <= '3') && (VAR_8[-2] >= 'w' && VAR_8[-2] <= 'z')) {
      VAR_10 = VAR_8[-1];
      VAR_8--;
      (*VAR_0)++;
    }

    if (VAR_8[-1] < 'w' || VAR_8[-1] > 'z') {
      *VAR_8++ = 'x';
      (*VAR_0)--;
    }

    VAR_10 += VAR_5;
    if (VAR_10 % 4) {
      *VAR_8++ = '0' + VAR_10 % 4;
      (*VAR_0)--;
    }
  }
  char *VAR_11 = VAR_8++;

  char VAR_12 = 0;
  int VAR_13;
  int VAR_14 = 0, VAR_15 = 0;
  char VAR_16 = 0;
  char *VAR_17 = VAR_7;

  for (VAR_13 = 0; VAR_13 < 2; VAR_13++) {
    VAR_7 = VAR_17;
    int VAR_18 = 0, VAR_19 = 0, VAR_20 = 0, VAR_21;
    char VAR_22 = 0, VAR_23;
    unsigned long long VAR_24 = 0;

    for (VAR_21 = VAR_6 ? *VAR_7++ : 0; VAR_21 > 0; VAR_21--) {
      FUNC_0(VAR_7, VAR_22);
      FUNC_3 (VAR_22);
      if (VAR_22 < 0) {
        VAR_22 *= -1;
        FUNC_0(VAR_7, VAR_23);
        VAR_19 += VAR_23;
      } else {
        FUNC_1(VAR_7, VAR_18);
        FUNC_1(VAR_7, VAR_19);
      }
      FUNC_1(VAR_7, VAR_20);
      FUNC_2(VAR_7, VAR_24);

      int VAR_25 = (VAR_22 >> 5) + VAR_5;
      if ((VAR_25 >= 4) ^ VAR_13) {
        FUNC_6 (VAR_8, ((VAR_25 & 3) << 5) + (VAR_22 & 31), VAR_18, VAR_19, VAR_20, VAR_24);
      }
    }
  }
  *VAR_11 = VAR_12;
  FUNC_3 ((VAR_6 == 0 && VAR_12 == 0) || *VAR_17 == VAR_12);

  return FUNC_9 (VAR_3, VAR_4, 0, VAR_0, (VAR_8 - VAR_0));
}
