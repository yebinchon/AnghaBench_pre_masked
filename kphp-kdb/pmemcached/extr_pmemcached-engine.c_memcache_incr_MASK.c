
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct data {int data_len; char* data; } ;
struct connection {int Out; int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct data FUNC_1 (char const*,int) ;
 int FUNC_2 (int,char const*,int,long long) ;
 int FUNC_3 (char const*,int,int) ;
 int FUNC_4 (int ,char const*,int,int ,int ,char*,int ) ;
 int FUNC_5 (int ,char*,int,...) ;
 int VAR_5 ;
 int FUNC_6 (struct connection*) ;
 scalar_t__ VAR_6 ;
 int FUNC_7 (char*,char*,long long) ;
 int VAR_7 ;
 int FUNC_8 (char*) ;
 int FUNC_9 (char const*,char*,int) ;
 int VAR_8 ;
 int FUNC_10 (int *,char*,int) ;

int FUNC_11 (struct connection *VAR_9, int VAR_10, const char *VAR_11, int VAR_12, long long VAR_13) {
  if (VAR_2 == 1) {
    return 0;
  }
  if (VAR_6) {
    return 0;
  }
  VAR_9->flags &= ~VAR_0;
  if (VAR_8 >= 3) {
    FUNC_5 (VAR_7, "memcache_incr: op=%d, key='%s', val=%lld\n", VAR_10, VAR_11, VAR_13);
  }
  if (VAR_10 == 1) {
    VAR_3++;
  } else {
    VAR_4++;
  }

  int VAR_14 = 0;
  if (VAR_12 >= 3 && !FUNC_9 (VAR_11, "###", 3)) {
    VAR_14 = 1;
    VAR_11 += 3;
    VAR_12 -= 3;
  }
  int VAR_15 = FUNC_3 (VAR_11, VAR_12, 1);
  if (VAR_15 == -2) {
    if (!FUNC_6 (VAR_9)) {
      FUNC_10 (&VAR_9->Out, "NOT_FOUND\r\n", 11);
    }
    return 0;
  }

  if (VAR_15 == 0 && VAR_14) {
    static char VAR_16[30];
    if (VAR_10) {
      VAR_13 = -VAR_13;
    }
    FUNC_7 (VAR_16, "%lld", VAR_13);
    FUNC_0 (FUNC_4 (VAR_5, VAR_11, VAR_12, 0, VAR_1, VAR_16, FUNC_8 (VAR_16)) != -2);
  } else {

    VAR_15 = FUNC_2(VAR_10, VAR_11, VAR_12, VAR_13);
    if (VAR_8 >= 4) { FUNC_5 (VAR_7, "do_pmemcached_incr returns %d\n", VAR_15); }
    FUNC_0 (VAR_15 != -2);

    if (VAR_15 == -1) {
      FUNC_10 (&VAR_9->Out, "NOT_FOUND\r\n", 11);
      return 0;
    }
  }

  struct data VAR_17 = FUNC_1 (VAR_11, VAR_12);

  if (VAR_8 >= 4) { FUNC_5 (VAR_7, "y.data_len = %d\n", VAR_17.data_len); }

  if (VAR_17.data_len == -2) {
    return FUNC_6 (VAR_9);
  }

  if (VAR_17.data_len == -1) {
    FUNC_10 (&VAR_9->Out, "NOT_FOUND\r\n", 11);
  } else {
    FUNC_10 (&VAR_9->Out, VAR_17.data, VAR_17.data_len);
    FUNC_10 (&VAR_9->Out, "\r\n", 2);
  }

  return 0;
}
