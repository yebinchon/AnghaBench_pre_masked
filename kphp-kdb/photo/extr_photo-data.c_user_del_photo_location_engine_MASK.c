
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int user ;


 int FUNC_0 (char*,char) ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (char*,unsigned long long) ;
 int FUNC_3 (char) ;
 char* VAR_0 ;
 int FUNC_4 (char*,char*,int) ;
 char VAR_1 ;
 int FUNC_5 (char*,char,int,int,int,unsigned long long) ;
 char FUNC_6 (int *) ;
 char* FUNC_7 (int *,int,int,int,int*) ;
 int FUNC_8 (int *,int,int,char*,int) ;
 scalar_t__ VAR_2 ;

int FUNC_9 (user *VAR_3, int VAR_4, int VAR_5, char VAR_6, int VAR_7) {
  if ((VAR_6 != -1 && VAR_6 < 'a') || VAR_6 > 'z' || VAR_7 < -1 || VAR_7 > 3) {
    return 0;
  }

  if (VAR_2) {
    return 1;
  }

  FUNC_3 (FUNC_6 (VAR_3));

  int VAR_8;
  char *VAR_9 = FUNC_7 (VAR_3, VAR_4, VAR_5, 1, &VAR_8);

  if (VAR_9 == ((void*)0)) {
    return 0;
  }

  char *VAR_10 = VAR_0;

  if (VAR_8 > 0 && VAR_9[0] < 0) {
    int VAR_11 = -(VAR_9[0] + VAR_1) + 4 * sizeof (int) + 1;
    FUNC_4 (VAR_10, VAR_9, VAR_11);
    VAR_10 += VAR_11;
    VAR_9 += VAR_11;
  }
  char *VAR_12 = VAR_10++;

  char VAR_13 = 0;
  int VAR_14 = 0, VAR_15 = 0, VAR_16 = 0, VAR_17 = 0, VAR_18 = 0, VAR_19;
  char VAR_20 = 0, VAR_21 = 0, VAR_22;
  unsigned long long VAR_23 = 0;
  for (VAR_19 = VAR_8 ? *VAR_9++ : 0; VAR_19 > 0; VAR_19--) {
    FUNC_0(VAR_9, VAR_20);
    FUNC_3 (VAR_20);
    if (VAR_20 < 0) {
      VAR_20 *= -1;
      FUNC_0(VAR_9, VAR_22);
      VAR_15 += VAR_22;
    } else {
      FUNC_1(VAR_9, VAR_14);
      FUNC_1(VAR_9, VAR_15);
    }
    FUNC_1(VAR_9, VAR_16);
    FUNC_2(VAR_9, VAR_23);
    if ((VAR_7 != -1 && VAR_7 != (VAR_20 >> 5)) || (VAR_6 != -1 && VAR_6 - 'a' + 1 != (VAR_20 & 31))) {
      FUNC_5 (VAR_10, VAR_20, VAR_14, VAR_15, VAR_16, VAR_23);
    }
  }
  *VAR_12 = VAR_13;

  return FUNC_8 (VAR_3, VAR_4, VAR_5, VAR_0, (VAR_10 - VAR_0));
}
