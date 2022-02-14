
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void counter ;
struct connection {int Out; } ;


 int VAR_0 ;
 int VAR_1 ;
 int * VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int) ;
 int FUNC_1 (void*,char*) ;
 int FUNC_2 (char*,char*,char const*,int) ;
 int FUNC_3 (char const*,int) ;
 int FUNC_4 (long long,int ) ;
 int FUNC_5 (long long,int ) ;
 int FUNC_6 (int ,char*,...) ;
 int FUNC_7 (char const*,int) ;
 int FUNC_8 (char*,long long,int) ;
 int FUNC_9 (char*,long long) ;
 int FUNC_10 (long long) ;
 int FUNC_11 (long long,int) ;
 int FUNC_12 (long long) ;
 int FUNC_13 (long long,int) ;
 void* FUNC_14 (int,int,int) ;
 int FUNC_15 (char*,long long) ;
 int FUNC_16 (char*,long long) ;
 int FUNC_17 (long long) ;
 int FUNC_18 (struct connection*) ;
 int FUNC_19 (struct connection*) ;
 int FUNC_20 (char const*,long long*,int*) ;
 int FUNC_21 (struct connection*,char const*,char*,int) ;
 int FUNC_22 (struct connection*,char const*,int,int,int ,int ,int) ;
 int FUNC_23 (long long,int,int ) ;
 int FUNC_24 (char*,char*,...) ;
 int FUNC_25 (char const*,char*,...) ;
 char* VAR_6 ;
 int FUNC_26 (struct connection*) ;
 int VAR_7 ;
 int FUNC_27 (char const*) ;
 int FUNC_28 (char const*,char*,int) ;
 long long FUNC_29 (char const*,char**,int) ;
 int VAR_8 ;
 int FUNC_30 (int *,char*,int) ;

int FUNC_31 (struct connection *VAR_9, const char *VAR_10, int VAR_11) {
  char *VAR_12;

  long long VAR_13;
  if (VAR_8 >= 4) {
    FUNC_6 (VAR_7, "memcache_get (key = \"");
    FUNC_3 (VAR_10, VAR_11);
    FUNC_6 (VAR_7, "\")\n");
  }
  int VAR_14 = FUNC_7 (VAR_10, VAR_11);
  VAR_10 += VAR_14;
  VAR_11 -= VAR_14;

  VAR_3 = 0;
  if (VAR_11 > 0 && *VAR_10 == '%') {
    VAR_14 ++;
    VAR_10 ++;
    VAR_11 --;
    VAR_3 = 1;
  }


  if (VAR_11 > 5 && !FUNC_28 (VAR_10, "views", 5)) {
    int VAR_15;
    if (!FUNC_20 (VAR_10 + 5, &VAR_13, &VAR_15)) {
      FUNC_2 ("get", "couldn't parse count_id&version", VAR_10, VAR_11);
      return FUNC_19 (VAR_9);
    }

    int VAR_16 = (VAR_15 == -1) ? FUNC_10 (VAR_13) : FUNC_11 (VAR_13,VAR_15);
    if (VAR_16 == -2) {
      return FUNC_18 (VAR_9);
    }
    if (VAR_16 >= 0) {

      if (!VAR_3) {
        FUNC_21 (VAR_9, VAR_10 - VAR_14, VAR_6, FUNC_24 (VAR_6, "%d", VAR_16));
      } else {
        *(int *)VAR_6 = VAR_16;
        FUNC_21 (VAR_9, VAR_10 - VAR_14, VAR_6, sizeof (int));
      }
    }
    return 0;
  }

  if (VAR_11 > 8 && !FUNC_28 (VAR_10, "visitors", 8)) {
    int VAR_17;
    if (!FUNC_20 (VAR_10 + 8, &VAR_13, &VAR_17)) {
      FUNC_2 ("get","couldn't parse count_id&version",VAR_10, VAR_11);
      return FUNC_19(VAR_9);
    }

    int VAR_18 = (VAR_17 == -1) ? FUNC_12 (VAR_13) : FUNC_13 (VAR_13, VAR_17);
    if (VAR_18 == -2) {
      return FUNC_18 (VAR_9);
    }
    if (VAR_18 >= 0) {

      if (!VAR_3) {
        FUNC_21 (VAR_9, VAR_10 - VAR_14, VAR_6, FUNC_24 (VAR_6, "%d", VAR_18));
      } else {
        *(int *)VAR_6 = VAR_18;
        FUNC_21 (VAR_9, VAR_10 - VAR_14, VAR_6, sizeof (int));
      }
    }
    return 0;
  }

  if (VAR_11 > 14 && !FUNC_28 (VAR_10, "enable_counter", 14)) {
    VAR_13 = FUNC_29 (VAR_10 + 14, &VAR_12, 10);
    if (VAR_12 > VAR_10 + 14 && !*VAR_12) {
      int VAR_19 = FUNC_5 (VAR_13, 0);
      if (VAR_19 >= 0) {
      if (!VAR_3) {
        FUNC_21 (VAR_9, VAR_10 - VAR_14, VAR_6, FUNC_24 (VAR_6, "%d", VAR_19));
      } else {
        *(int *)VAR_6 = VAR_19;
        FUNC_21 (VAR_9, VAR_10 - VAR_14, VAR_6, sizeof (int));
      }
      }
      return 0;
    }
  }

  if (VAR_11 > 15 && !FUNC_28 (VAR_10, "disable_counter", 15)) {
    VAR_13 = FUNC_29 (VAR_10 + 15, &VAR_12, 10);
    if (VAR_12 > VAR_10 + 15 && !*VAR_12) {
      int VAR_20 = FUNC_4 (VAR_13, 0);
      if (!VAR_3) {
        FUNC_21 (VAR_9, VAR_10 - VAR_14, VAR_6, FUNC_24 (VAR_6, "%d", VAR_20));
      } else {
        *(int *)VAR_6 = VAR_20;
        FUNC_21 (VAR_9, VAR_10 - VAR_14, VAR_6, sizeof (int));
      }
      return 0;
    }
  }

  if (VAR_11 > 12 && !FUNC_28(VAR_10, "set_timezone", 12)) {
    int VAR_21 = 0;

    if (2 == FUNC_25(VAR_10 + 12,"%lld#%d", &VAR_13, &VAR_21)) {
      VAR_21 = VAR_21 + 12 + 4;
      if (VAR_21 < 0) {
        return 0;
      }
      int VAR_22 = FUNC_23 (VAR_13, VAR_21, 0);
      if (!VAR_3) {
        FUNC_21 (VAR_9, VAR_10 - VAR_14, VAR_6, FUNC_24 (VAR_6, "%d", VAR_22));
      } else {
        *(int *)VAR_6 = VAR_22;
        FUNC_21 (VAR_9, VAR_10 - VAR_14, VAR_6, sizeof (int));
      }
      return 0;
    }
  }

  if (VAR_11 > 8 && !FUNC_28(VAR_10, "timezone", 8)) {
    if (1 == FUNC_25(VAR_10 + 8, "%lld", &VAR_13)) {
      int VAR_23 = FUNC_17 (VAR_13);
      if (!VAR_3) {
        FUNC_21 (VAR_9, VAR_10 - VAR_14, VAR_6, FUNC_24 (VAR_6, "%d", VAR_23));
      } else {
        *(int *)VAR_6 = VAR_23;
        FUNC_21 (VAR_9, VAR_10 - VAR_14, VAR_6, sizeof (int));
      }
      return 0;
    }
  }


  if (VAR_11 > 7 && !FUNC_28 (VAR_10, "counter", 7)) {
    int VAR_24 = 0;
    if (FUNC_25 (VAR_10, "counter%lld@%d", &VAR_13, &VAR_24) >= 1) {
      int VAR_25 = VAR_10[FUNC_27(VAR_10) - 1] != '?';
      if (VAR_8 >= 4) {
        FUNC_6(VAR_7, "cnt_id = %lld, ver = %d\n", VAR_13, VAR_24);
      }
      int VAR_26 = FUNC_8 (VAR_6, VAR_13, VAR_24);
      if (VAR_26 == -2) {
        return FUNC_18 (VAR_9);
      }
      if (VAR_26 > 0) {
        if (VAR_25 && !VAR_3) {
          FUNC_30 (&VAR_9->Out, VAR_6+VAR_26, FUNC_24 (VAR_6+VAR_26, "VALUE %s 1 %d\r\n", VAR_10 - VAR_14, VAR_26));
        } else {
          FUNC_30 (&VAR_9->Out, VAR_6+VAR_26, FUNC_24 (VAR_6+VAR_26, "VALUE %s 0 %d\r\n", VAR_10 - VAR_14, VAR_26));
        }
        FUNC_30 (&VAR_9->Out, VAR_6, VAR_26);
        FUNC_30 (&VAR_9->Out, "\r\n", 2);
      }
      return 0;
    }
  }

  if (VAR_11 > 16 && !FUNC_28 (VAR_10, "monthly_visitors", 16)) {
    VAR_13 = 0;
    if (FUNC_25 (VAR_10, "monthly_visitors%lld", &VAR_13) >= 1) {
      int VAR_27 = FUNC_16 (VAR_6, VAR_13);
      if (VAR_27 == -2) {
        return FUNC_18 (VAR_9);
      }
      if (VAR_27 >= 0) {
        FUNC_21 (VAR_9, VAR_10 - VAR_14, VAR_6, VAR_27);
      }
      return 0;
    }
  }

  if (VAR_11 > 13 && !FUNC_28 (VAR_10, "monthly_views", 13)) {
    VAR_13 = 0;
    if (FUNC_25 (VAR_10, "monthly_views%lld", &VAR_13) >= 1) {
      int VAR_28 = FUNC_15 (VAR_6, VAR_13);
      if (VAR_28 == -2) {
        return FUNC_18 (VAR_9);
      }
      if (VAR_28 >= 0) {
        FUNC_21 (VAR_9, VAR_10 - VAR_14, VAR_6, VAR_28);
      }
      return 0;
    }
  }

  if (VAR_11 > 12 && !FUNC_28 (VAR_10, "counters_sum", 12)) {
    int VAR_29 = 0, VAR_30 = 0, VAR_31 = 0;
    int VAR_32 = VAR_10[FUNC_27(VAR_10) - 1] != '?';
    if (FUNC_25 (VAR_10, "counters_sum%d_%d_%d", &VAR_31, &VAR_29, &VAR_30)) {
      struct counter *VAR_33 = FUNC_14 (VAR_31, VAR_29, VAR_30);
      if (VAR_33 == (void *)-2l) {
        return FUNC_18 (VAR_9);
      }
      if (VAR_33) {
        int VAR_34 = FUNC_1 (VAR_33, VAR_6);
        FUNC_0 (VAR_34 >= 0);
        if (VAR_32 && !VAR_3) {
          FUNC_30 (&VAR_9->Out, VAR_6+VAR_34, FUNC_24 (VAR_6+VAR_34, "VALUE %s 1 %d\r\n", VAR_10 - VAR_14, VAR_34));
        } else {
          FUNC_30 (&VAR_9->Out, VAR_6+VAR_34, FUNC_24 (VAR_6+VAR_34, "VALUE %s 0 %d\r\n", VAR_10 - VAR_14, VAR_34));
        }
        FUNC_30 (&VAR_9->Out, VAR_6, VAR_34);
        FUNC_30 (&VAR_9->Out, "\r\n", 2);
      }
    }
  }
  if (VAR_11 > 8 && !FUNC_28 (VAR_10, "versions", 8)) {
    VAR_13 = FUNC_29 (VAR_10 + 8, &VAR_12, 10);
    if (VAR_12 > VAR_10+8 && !*VAR_12) {
      int VAR_35 = FUNC_9 (VAR_6, VAR_13);
      if (VAR_35 == -2) {
        return FUNC_18 (VAR_9);
      }
      if (VAR_35 > 0) {
        FUNC_30 (&VAR_9->Out, VAR_6 + VAR_35, FUNC_24 (VAR_6 + VAR_35, "VALUE %s 0 %d\r\n", VAR_10 - VAR_14, VAR_35));
        FUNC_30 (&VAR_9->Out, VAR_6, VAR_35);
        FUNC_30 (&VAR_9->Out, "\r\n", 2);
      }
      return 0;
    }
  }

  if (VAR_11 >= 16 && !FUNC_28 (VAR_10, "free_block_stats", 16)) {
    FUNC_22 (VAR_9, VAR_10 - VAR_14, VAR_11 + VAR_14, VAR_1, 0, VAR_0, VAR_1);
    return 0;
  }

  if (VAR_11 >= 16 && !FUNC_28 (VAR_10, "used_block_stats", 16)) {
    FUNC_22 (VAR_9, VAR_10 - VAR_14, VAR_11 + VAR_14, VAR_1, 0, VAR_5, VAR_1);
    return 0;
  }

  if (VAR_11 >= 16 && !FUNC_28 (VAR_10, "allocation_stats", 16)) {
    FUNC_22 (VAR_9, VAR_10 - VAR_14, VAR_11 + VAR_14, VAR_1, 0, VAR_2[0], VAR_1 * 4);
    return 0;
  }

  if (VAR_11 >= 17 && !FUNC_28 (VAR_10, "split_block_stats", 17)) {
    FUNC_22 (VAR_9, VAR_10 - VAR_14, VAR_11 + VAR_14, VAR_1, 0, VAR_4, VAR_1);
    return 0;
  }

  if (VAR_11 >= 5 && !FUNC_28 (VAR_10, "stats", 5)) {
    FUNC_21 (VAR_9, VAR_10 - VAR_14, VAR_6, FUNC_26 (VAR_9));
    return 0;
  }

  return 0;
}
