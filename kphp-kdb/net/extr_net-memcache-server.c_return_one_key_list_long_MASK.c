
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct connection {int Out; } ;


 int FUNC_0 (int *,int) ;
 int FUNC_1 (int ,char*,int) ;
 char* FUNC_2 (int *,int) ;
 int FUNC_3 (char*,char*,int) ;
 int FUNC_4 (struct connection*,char const*,char*,int) ;
 size_t FUNC_5 (char*,char*,long long const) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_6 (int *,char const*,int) ;

int FUNC_7 (struct connection *VAR_2, const char *VAR_3, int VAR_4, int VAR_5, int VAR_6, const long long *VAR_7, int VAR_8) {
  int VAR_9, VAR_10;
  static char VAR_11[16];

  if (VAR_1 > 0) {
    FUNC_1 (VAR_0, "result = %d\n", VAR_5);
  }

  if (!VAR_8) {
    if (VAR_5 == 0x7fffffff) {
      return FUNC_4 (VAR_2, VAR_3, "", 0);
    }
    if (VAR_6 < 0) {
      VAR_9 = 8;
      *((long long *) VAR_11) = VAR_5;
    } else {
      VAR_9 = FUNC_5 (VAR_11, "%d", VAR_5);
    }
    return FUNC_4 (VAR_2, VAR_3, VAR_11, VAR_9);
  }

  FUNC_6 (&VAR_2->Out, "VALUE ", 6);
  FUNC_6 (&VAR_2->Out, VAR_3, VAR_4);

  char *VAR_12 = FUNC_2 (&VAR_2->Out, 512);
  if (!VAR_12) return -1;
  char *VAR_13 = VAR_12 + 480;

  FUNC_3 (VAR_12, " 0 .........\r\n", 14);
  char *VAR_14 = VAR_12 + 3;

  VAR_12 += 14;
  if (VAR_5 != 0x7fffffff) {
    if (VAR_6 >= 0) {
      VAR_9 = FUNC_5 (VAR_12, "%d", VAR_5);
    } else {
      VAR_9 = 8;
      *((long long *) VAR_12) = VAR_5;
    }
    VAR_12 += VAR_9;
  } else {
    VAR_9 = 0;
  }

  for (VAR_10 = 0; VAR_10 < VAR_8; VAR_10++) {
    int VAR_15;
    if (VAR_12 >= VAR_13) {
      FUNC_0 (&VAR_2->Out, VAR_12 - (VAR_13 - 480));
      VAR_12 = FUNC_2 (&VAR_2->Out, 512);
      if (!VAR_12) return -1;
      VAR_13 = VAR_12 + 480;
    }
    if (VAR_6 >= 0) {
      if (VAR_10 || VAR_5 != 0x7fffffff) {
        *VAR_12++ = ','; VAR_9++;
      }
      VAR_9 += VAR_15 = FUNC_5 (VAR_12, "%lld", VAR_7[VAR_10]);
    } else {
      VAR_9 += VAR_15 = 8;
      *((long long *) VAR_12) = VAR_7[VAR_10];
    }
    VAR_12 += VAR_15;
  }
  VAR_14[FUNC_5 (VAR_14, "% 9d", VAR_9)] = '\r';
  FUNC_3 (VAR_12, "\r\n", 2);
  VAR_12 += 2;
  FUNC_0 (&VAR_2->Out, VAR_12 - (VAR_13 - 480));

  return 0;
}
