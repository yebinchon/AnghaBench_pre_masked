
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 char** VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 char* VAR_3 ;
 char* VAR_4 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*,char*,int) ;

void FUNC_4 (const char *VAR_5) {
  char *VAR_6 = (char *) VAR_5, *VAR_7 = VAR_3;
  int VAR_8, VAR_9 = 0, VAR_10;

  VAR_2 = 0;
  *VAR_7++ = 0;

  while (*VAR_6) {
    VAR_10 = FUNC_1 (VAR_6);
    if (VAR_10 < 0) {
      break;
    }
    VAR_8 = 0;
    while (VAR_10 > 0) {
      if (*VAR_6++ == '"') {
        VAR_8++;
      }
      VAR_10--;
    }
    if (VAR_8) {
      if (VAR_9) {
        if (VAR_7[-1] != ' ') {
          *VAR_7++ = ' ';
        }
        if (!VAR_7[-2]) {
          --VAR_2;
        }
        *VAR_7++ = 0;
        VAR_9 = 0;
        VAR_8--;
      }
      if ((VAR_8 & 1) && VAR_2 < VAR_0 - 1) {
        VAR_1[VAR_2++] = VAR_7;
        *VAR_7++ = ' ';
        VAR_9 = 1;
      }
    } else if (VAR_9) {
      if (VAR_7[-1] != ' ') {
        *VAR_7++ = ' ';
      }
    }

    VAR_10 = FUNC_2 (VAR_6);
    FUNC_0 (VAR_10 >= 0);

    if (VAR_10 > 0) {
      FUNC_3 (VAR_7, VAR_6, VAR_10);
      VAR_7 += VAR_10;
    }
    VAR_6 += VAR_10;
  }

  if (VAR_9) {
    if (VAR_7[-1] != ' ') {
      *VAR_7++ = ' ';
    }
    if (!VAR_7[-2]) {
      --VAR_2;
    }
    *VAR_7++ = 0;
  }

  FUNC_0 (VAR_7 + 8 < VAR_4);
  FUNC_0 (VAR_2 >= 0 && VAR_2 < VAR_0);

  if (VAR_2) {
    VAR_3 = VAR_7 + (- (long) VAR_7 & 7);
  }
}
