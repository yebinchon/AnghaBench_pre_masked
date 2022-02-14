
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,char*,char*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (char*,char*,int) ;
 int FUNC_6 (char*,char*,int) ;
 char* VAR_1 ;
 char* VAR_2 ;
 char* FUNC_7 (char*) ;
 int VAR_3 ;
 scalar_t__ FUNC_8 (char*) ;

char *FUNC_9 (char *VAR_4, int VAR_5) {
  if (FUNC_8 (VAR_4) >= VAR_0) {
    return ((void*)0);
  }



  char VAR_6 = VAR_5 ? ' ' : '+';

  char *VAR_7 = VAR_1;

  int VAR_8 = 1;
  const char *VAR_9 = 0;
  while (*VAR_4) {
    if (VAR_4 == VAR_9) {
      FUNC_2 (VAR_3, "error at %.30s\n", VAR_4);
      FUNC_1 (2);
    }
    VAR_9 = VAR_4 - VAR_8;
    int VAR_10 = VAR_8 ? 0 : FUNC_3 (VAR_4);
    VAR_8 = 0;
    if (VAR_10 < 0) {
      break;
    }
    while (VAR_10 > 0 && *VAR_4 != 0x1f) {
      VAR_4++;
      VAR_10--;
    }
    if (*VAR_4 == 0x1f) {
      VAR_10 = 1;
      while ((unsigned char) VAR_4[VAR_10] >= 0x40) {
        VAR_10++;
      }
      VAR_8 = 1;
    } else {
      VAR_10 = FUNC_4 (VAR_4);
    }
    if (!VAR_10) {
      continue;
    }
    FUNC_0 (VAR_10 > 0 && VAR_10 < 511);
    if (*VAR_4 != 0x1f) {
      int VAR_11 = FUNC_6 (VAR_2, VAR_4, VAR_10);
      FUNC_5 (VAR_7, VAR_2, VAR_11);
      VAR_7 += VAR_11;
    } else {
      FUNC_5 (VAR_7, VAR_4, VAR_10);
      VAR_7 += VAR_10;
    }
    *VAR_7++ = VAR_6;

    VAR_4 += VAR_10;
  }
  *VAR_7 = 0;



  char *VAR_12 = VAR_5 ? FUNC_7 (VAR_1) : VAR_1;


  return VAR_12;
}
