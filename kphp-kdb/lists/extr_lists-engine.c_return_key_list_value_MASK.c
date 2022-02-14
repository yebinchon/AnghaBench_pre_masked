
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct connection {int Out; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int) ;
 int FUNC_1 (int ,char*,int) ;
 char* FUNC_2 (int *,int) ;
 int FUNC_3 (char*,char*,int) ;
 int VAR_1 ;
 int FUNC_4 (struct connection*,char const*,char*,int) ;
 size_t FUNC_5 (char*,char*,int const) ;
 char* VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_6 (int *,char const*,int) ;

int FUNC_7 (struct connection *VAR_5, const char *VAR_6, int VAR_7, int VAR_8, int VAR_9, const int *VAR_10, int VAR_11, int VAR_12, int VAR_13, int VAR_14) {
  int VAR_15, VAR_16, VAR_17 = 0;

  if (VAR_4 > 0) {
    FUNC_1 (VAR_3, "result = %d\n", VAR_8);
  }

  if (!VAR_11) {
    if (VAR_9 < 0) {
      VAR_15 = 4;
      *((int *) VAR_2) = VAR_8;
    } else {
      VAR_15 = FUNC_5 (VAR_2, "%d", VAR_8);
    }
    return FUNC_4 (VAR_5, VAR_6, VAR_2, VAR_15);
  }

  FUNC_6 (&VAR_5->Out, "VALUE ", 6);
  FUNC_6 (&VAR_5->Out, VAR_6, VAR_7);

  char *VAR_18 = FUNC_2 (&VAR_5->Out, 1024);
  if (!VAR_18) return -1;
  char *VAR_19 = VAR_18 + 512;

  FUNC_3 (VAR_18, " 0 .........\r\n", 14);
  char *VAR_20 = VAR_18 + 3;

  VAR_18 += 14;
  if (VAR_9 >= 0) {
    VAR_15 = FUNC_5 (VAR_18, "%d", VAR_8);
  } else {
    VAR_15 = 4;
    *((int *) VAR_18) = VAR_8;
  }
  VAR_18 += VAR_15;
  for (VAR_16 = 0; VAR_16 < VAR_11; VAR_16++) {
    int VAR_21;
    if (VAR_18 >= VAR_19) {
      FUNC_0 (&VAR_5->Out, VAR_18 - (VAR_19 - 512));
      VAR_18 = FUNC_2 (&VAR_5->Out, 1024);
      if (!VAR_18) return -1;
      VAR_19 = VAR_18 + 512;
    }
    if (VAR_9 >= 0) {
      *VAR_18++ = (VAR_17 > 0 && VAR_17 < VAR_1 ? ':' : ',');
      VAR_15++;
      if (VAR_17 == VAR_13) {
        char *VAR_22 = *((char **) (VAR_10 + VAR_16));
        VAR_21 = VAR_10[VAR_16 + VAR_0];
        int VAR_23;
        for (VAR_23 = 0; VAR_23 < VAR_21; VAR_23++) {
          if (VAR_22[VAR_23] == ',') { VAR_18[VAR_23] = 12; }
          else if (VAR_22[VAR_23] == 12) { VAR_18[VAR_23] = ' '; }
          else { VAR_18[VAR_23] = VAR_22[VAR_23]; }
        }
        VAR_15 += VAR_21;
        VAR_17 += VAR_0;
        VAR_16 += VAR_0;
      } else if (VAR_17 == VAR_14) {
        VAR_15 += VAR_21 = FUNC_5 (VAR_18, "%lld", *(long long *) (VAR_10 + VAR_16));
        VAR_16++;
        VAR_17++;
      } else {
        VAR_15 += VAR_21 = FUNC_5 (VAR_18, "%d", VAR_10[VAR_16]);
      }
    } else {
      VAR_15 += VAR_21 = 4;
      *((int *) VAR_18) = VAR_10[VAR_16];
    }
    if (++VAR_17 == VAR_12) {
      VAR_17 = 0;
    }
    VAR_18 += VAR_21;
  }
  VAR_20[FUNC_5 (VAR_20, "% 9d", VAR_15)] = '\r';
  FUNC_3 (VAR_18, "\r\n", 2);
  VAR_18 += 2;
  FUNC_0 (&VAR_5->Out, VAR_18 - (VAR_19 - 512));

  return 0;
}
