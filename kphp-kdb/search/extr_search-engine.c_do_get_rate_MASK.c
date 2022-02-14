
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct connection {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int*,long long) ;
 scalar_t__ FUNC_1 (int*,long long,int) ;
 int FUNC_2 (char const) ;
 int FUNC_3 (struct connection*,char const*,char*,int ) ;
 int FUNC_4 (char*,char*,int,...) ;
 int FUNC_5 (char const*,char*,int*,...) ;
 int FUNC_6 (int,char*,int,char const) ;

__attribute__((used)) static int FUNC_7 (struct connection *VAR_1, const char *VAR_2, int VAR_3, int VAR_4) {
  int VAR_5[2];
  long long VAR_6 = 0;
  int VAR_7, VAR_8, VAR_9 = 0;
  static char VAR_10[32];

  if (FUNC_5 (VAR_2+1, "ate%d_%d ", &VAR_7, &VAR_8) == 2) {
    if (VAR_7 && VAR_8 > 0) {
      VAR_6 = (((long long) VAR_8) << 32) + (unsigned) VAR_7;
      VAR_9 = 1;
    }
  } else if (FUNC_5 (VAR_2+1, "ate%d ", &VAR_8) == 1) {
    if (VAR_8 > 0) {
      VAR_6 = VAR_8;
      VAR_9 = 1;
    }
  }

  if (VAR_9) {
    int VAR_11 = FUNC_2 (*VAR_2);

    FUNC_6 (4, "p = %d, *key = %c\n", VAR_11, *VAR_2);

    if (VAR_11 >= 0 && VAR_11 < VAR_0) {
      if (FUNC_1 (VAR_5, VAR_6, VAR_11)) {
        return FUNC_3 (VAR_1, VAR_2 - VAR_4, VAR_10, FUNC_4 (VAR_10, "%d", VAR_5[0]));
      }
    }
    VAR_9 = 0;
  }

  if (FUNC_5 (VAR_2, "rates%d_%d ", &VAR_7, &VAR_8) == 2) {
    if (VAR_7 && VAR_8 > 0) {
      VAR_6 = (((long long) VAR_8) << 32) + (unsigned) VAR_7;
      VAR_9 = 1;
    }
  } else if (FUNC_5 (VAR_2, "rates%d ", &VAR_8) == 1) {
    if (VAR_8 > 0) {
      VAR_6 = VAR_8;
      VAR_9 = 1;
    }
  }

  if (VAR_9 && FUNC_0 (VAR_5, VAR_6)) {
    return FUNC_3 (VAR_1, VAR_2 - VAR_4, VAR_10, FUNC_4 (VAR_10, "%d,%d", VAR_5[0], VAR_5[1]));
  }

  return 0;
}
