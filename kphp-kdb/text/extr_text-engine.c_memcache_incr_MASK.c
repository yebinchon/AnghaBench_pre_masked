
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct connection {int Out; } ;


 int FUNC_0 (int,int,long long) ;
 int FUNC_1 (int,int,long long) ;
 int FUNC_2 (int,int,int,long long) ;
 int FUNC_3 (int,int,int,long long) ;
 int FUNC_4 (int ,char*,int,char const*,long long) ;
 int FUNC_5 (struct connection*) ;
 int FUNC_6 (int,int,int,int,long long*) ;
 int FUNC_7 (char*,char*,long long) ;
 int FUNC_8 (char const*,char*,int*,int*,...) ;
 char* VAR_0 ;
 int VAR_1 ;
 int FUNC_9 (char const*,char*,int) ;
 int VAR_2 ;
 int FUNC_10 (int *,char*,int) ;

int FUNC_11 (struct connection *VAR_3, int VAR_4, const char *VAR_5, int VAR_6, long long VAR_7) {
  int VAR_8, VAR_9, VAR_10;
  if (VAR_2 > 1) {
    FUNC_4 (VAR_1, "memcache_incr: op=%d, key='%s', val=%lld\n", VAR_4, VAR_5, VAR_7);
  }

  FUNC_5 (VAR_3);

  if (FUNC_8 (VAR_5, "flags%d_%d", &VAR_8, &VAR_9) >= 2 && VAR_8 && VAR_9 > 0) {
    if (VAR_4) {
      VAR_10 = FUNC_0 (VAR_8, VAR_9, VAR_7);
    } else {
      VAR_10 = FUNC_1 (VAR_8, VAR_9, VAR_7);
    }
    if (VAR_10 == -2) {
      FUNC_10 (&VAR_3->Out, "4294967295\r\n", 12);
      return 0;
    } else if (VAR_10 >= 0) {
      FUNC_10 (&VAR_3->Out, VAR_0, FUNC_7 (VAR_0, "%d\r\n", VAR_10));
      return 0;
    }
  }

  if (VAR_6 >= 5 && !FUNC_9 (VAR_5, "extra", 5)) {
    int VAR_11, VAR_12;
    if (FUNC_8 (VAR_5, "extra%d_%d:%d", &VAR_8, &VAR_11, &VAR_12) == 3 && VAR_8 && VAR_11 > 0 && (unsigned) VAR_12 < 8) {
      VAR_10 = FUNC_2 (VAR_8, VAR_11, VAR_12, VAR_4 ? -VAR_7 : VAR_7);
      if (VAR_10 <= 0) {
        FUNC_10 (&VAR_3->Out, "NOT_FOUND\r\n", 11);
        return 0;
      } else {
        long long VAR_13;
        VAR_10 = FUNC_6 (VAR_8, VAR_11, VAR_12, -1, &VAR_13);
        if (VAR_10 == -2) {
          FUNC_10 (&VAR_3->Out, "-2147483648\r\n", 13);
          return 0;
        } else if (VAR_10 <= 0) {
          FUNC_10 (&VAR_3->Out, "NOT_FOUND\r\n", 11);
          return 0;
        }
        FUNC_10 (&VAR_3->Out, VAR_0, FUNC_7 (VAR_0, "%d\r\n", (int) VAR_13));
        return 0;
      }
    }
  }

  if (VAR_6 >= 5 && !FUNC_9 (VAR_5, "Extra", 5)) {
    int VAR_14, VAR_15;
    if (FUNC_8 (VAR_5, "Extra%d_%d:%d", &VAR_8, &VAR_14, &VAR_15) == 3 && VAR_8 && VAR_14 > 0 && VAR_15 >= 8 && VAR_15 < 12) {
      VAR_10 = FUNC_3 (VAR_8, VAR_14, VAR_15, VAR_4 ? -VAR_7 : VAR_7);
      if (VAR_10 <= 0) {
        FUNC_10 (&VAR_3->Out, "NOT_FOUND\r\n", 11);
        return 0;
      } else {
        long long VAR_16;
        VAR_10 = FUNC_6 (VAR_8, VAR_14, VAR_15, -1, &VAR_16);
        if (VAR_10 == -2) {
          FUNC_10 (&VAR_3->Out, "-9223372036854775808\r\n", 22);
          return 0;
        } else if (VAR_10 <= 0) {
          FUNC_10 (&VAR_3->Out, "NOT_FOUND\r\n", 11);
          return 0;
        }
        FUNC_10 (&VAR_3->Out, VAR_0, FUNC_7 (VAR_0, "%lld\r\n", VAR_16));
        return 0;
      }
    }
  }

  FUNC_10 (&VAR_3->Out, "NOT_FOUND\r\n", 11);
  return 0;
}
