
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int user ;


 int FUNC_0 (char*,char) ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (char*,unsigned long long) ;
 int FUNC_3 (char) ;
 int FUNC_4 (int) ;
 char* VAR_0 ;
 int FUNC_5 (char*,char*,int) ;
 char VAR_1 ;
 int FUNC_6 (char*,char,int,int,int,unsigned long long) ;
 char FUNC_7 (int *) ;
 char* FUNC_8 (int *,int,int,int,int*) ;
 int FUNC_9 (int *,int,int,char*,int) ;
 scalar_t__ VAR_2 ;

int FUNC_10 (user *VAR_3, int VAR_4, int VAR_5, char VAR_6, int VAR_7, int VAR_8, int VAR_9, int VAR_10, unsigned long long VAR_11) {
  if (VAR_8 <= 0 || VAR_9 <= 0 || !FUNC_4 (VAR_4) || VAR_6 < 'a' || VAR_6 > 'z' || VAR_7 < 0 || VAR_7 > 3) {
    return 0;
  }

  if (VAR_2) {
    return 1;
  }

  FUNC_3 (FUNC_7 (VAR_3));



  int VAR_12;
  char *VAR_13 = FUNC_8 (VAR_3, VAR_4, VAR_5, 1, &VAR_12);

  if (VAR_13 == ((void*)0)) {
    return 0;
  }

  char *VAR_14 = VAR_0;

  if (VAR_12 > 0 && VAR_13[0] < 0) {
    int VAR_15 = -(VAR_13[0] + VAR_1) + 4 * sizeof (int) + 1;
    FUNC_5 (VAR_14, VAR_13, VAR_15);
    VAR_14 += VAR_15;
    VAR_13 += VAR_15;
  }
  char *VAR_16 = VAR_14++;

  VAR_6 -= 'a' - 1;
  VAR_6 += (VAR_7 << 5);

  char VAR_17 = 0;
  int VAR_18 = 0, VAR_19 = 0, VAR_20 = 0, VAR_21 = 0, VAR_22 = 0, VAR_23;
  char VAR_24 = 0, VAR_25 = 0, VAR_26;
  unsigned long long VAR_27 = 0;
  for (VAR_23 = VAR_12 ? *VAR_13++ : 0; VAR_23 > 0; VAR_23--) {
    FUNC_0(VAR_13, VAR_24);
    FUNC_3 (VAR_24);
    if (VAR_24 < 0) {
      VAR_24 *= -1;
      FUNC_0(VAR_13, VAR_26);
      VAR_19 += VAR_26;
    } else {
      FUNC_1(VAR_13, VAR_18);
      FUNC_1(VAR_13, VAR_19);
    }
    FUNC_1(VAR_13, VAR_20);
    FUNC_2(VAR_13, VAR_27);
    if (VAR_6 <= VAR_24) {
      FUNC_6 (VAR_14, VAR_6, VAR_8, VAR_9, VAR_10, VAR_11);

      if (VAR_6 != VAR_24) {
        FUNC_6 (VAR_14, VAR_24, VAR_18, VAR_19, VAR_20, VAR_27);
      }

      VAR_6 = 127;
    } else {
      FUNC_6 (VAR_14, VAR_24, VAR_18, VAR_19, VAR_20, VAR_27);
    }
  }
  if (VAR_6 != 127) {
    FUNC_6 (VAR_14, VAR_6, VAR_8, VAR_9, VAR_10, VAR_11);
  }
  *VAR_16 = VAR_17;

  return FUNC_9 (VAR_3, VAR_4, VAR_5, VAR_0, (VAR_14 - VAR_0));
}
