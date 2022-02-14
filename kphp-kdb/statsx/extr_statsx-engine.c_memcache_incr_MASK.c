
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct connection {int Out; } ;
typedef int region ;
typedef int country ;


 int FUNC_0 (char*) ;
 int FUNC_1 (long long,int,int ,int,int) ;
 int FUNC_2 (long long,int,int ,int,int,char,char,char,char,char,int,int,int,char) ;
 scalar_t__ VAR_0 ;
 int FUNC_3 (char*,char*,char const*,int) ;
 int FUNC_4 (char const*,int) ;
 scalar_t__ VAR_1 ;
 int FUNC_5 (int ,char*,...) ;
 int FUNC_6 (char const*,int) ;
 long long VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_7 (char const*,char*,int) ;
 int FUNC_8 (char*,int ,int) ;
 int FUNC_9 (struct connection*) ;
 int FUNC_10 (int ,char*,int) ;
 int FUNC_11 (char*,char*,int*,char*,char*,char*) ;
 int VAR_5 ;
 int VAR_6 ;
 long long FUNC_12 (char*,char**,int) ;
 long long FUNC_13 (char const*,char**,int) ;
 int VAR_7 ;
 int FUNC_14 (int *,int ,int ) ;

int FUNC_15 (struct connection *VAR_8, int VAR_9, const char *VAR_10, int VAR_11, long long VAR_12) {
  if (VAR_7 >= 4) {
    FUNC_5 (VAR_6, "memcache_incr (op = %d, key = \"", VAR_9);
    FUNC_4 (VAR_10, VAR_11);
    FUNC_5 (VAR_6, "\")\n");
  }

  const int VAR_13 = FUNC_6 (VAR_10, VAR_11);
  VAR_10 += VAR_13;
  VAR_11 -= VAR_13;

  if (VAR_11 >= 7 && !FUNC_7 (VAR_10, "counter", 7)) {
    long long VAR_14, VAR_15;
    int VAR_16=-1, VAR_17, VAR_18 = 0, VAR_19;
    char VAR_20 = 0, VAR_21 = 0, VAR_22 = 0, VAR_23 = 0, VAR_24 = 0, VAR_25[4], VAR_26[4], VAR_27 = 0, *VAR_28;
    char VAR_29 = 1;
    int VAR_30 = -1;
    FUNC_8 (VAR_25, 0, sizeof (VAR_25));
    FUNC_8 (VAR_26, 0, sizeof (VAR_26));
    VAR_1 = 0; VAR_15 = FUNC_13 (VAR_10 + 7, &VAR_28, 10);
    if (VAR_1) {
      FUNC_3 ("incr", "fail to parse counter_id", VAR_10, VAR_11);
      return FUNC_9 (VAR_8);
    }
    VAR_14 = VAR_15;
    if (*VAR_28 == '@') {
      VAR_1 = 0; VAR_15 = FUNC_12(VAR_28 + 1, &VAR_28, 10);
      if (VAR_1 || VAR_15 < 0) {
        FUNC_3 ("incr", "fail to parse version", VAR_10, VAR_11);
        return FUNC_9 (VAR_8);
      }
      if (VAR_7 >= 3) {
        FUNC_5 (VAR_6, "version = %d\n", VAR_30);
      }
      VAR_30 = (int) VAR_15;
    }
    if (*VAR_28 == ':') {
      VAR_1 = 0; VAR_15 = FUNC_12(VAR_28+1, &VAR_28, 10);
      if (VAR_1) {
        FUNC_3 ("incr", "fail to parse subcnt_id", VAR_10, VAR_11);
        return FUNC_9 (VAR_8);
      }
      VAR_16 = (int) VAR_15;
    }
    if (*VAR_28 != '#') {
      FUNC_3 ("incr", "missed uid (expected '#')", VAR_10, VAR_11);
      return FUNC_9 (VAR_8);
    }
    VAR_1 = 0; VAR_15 = FUNC_12 (VAR_28+1, &VAR_28, 10);
    if (VAR_1) {
      FUNC_3 ("incr", "fail to parse uid", VAR_10, VAR_11);
      return FUNC_9 (VAR_8);
    }
    VAR_17 = (int) VAR_15;
    if (*VAR_28 && *VAR_28 != '#') {
      FUNC_3 ("incr", "expected '#' after uid", VAR_10, VAR_11);
      return FUNC_9 (VAR_8);
    }
    if (VAR_7 >= 4) {
      FUNC_5 (VAR_6, "incr (cnt_id = %lld, subcnt_id = %d, uid = %d)\n", VAR_14, VAR_16, VAR_17);
    }
    if (!(*VAR_28)) VAR_29 = 0;
    if (*VAR_28) VAR_28++;
    if (*VAR_28) VAR_20 = *VAR_28++;
    if (*VAR_28) VAR_21 = *VAR_28++;
    if (*VAR_28) VAR_22 = *VAR_28++;
    if (*VAR_28) VAR_23 = *VAR_28++;
    if (*VAR_28) VAR_24 = *VAR_28++;
    if (*VAR_28 == ';') {
      FUNC_11 (VAR_28+1,"%d;%3[^;];%3[^;];%c", &VAR_18, VAR_25, VAR_26, &VAR_27);
    }
    if (VAR_20 > '0' && VAR_20 <= '2') { VAR_20 -= '0'; } else { VAR_20 = 0; }
    if (VAR_21 > '0' && VAR_21 <= '8') { VAR_21 -= '0'; } else { VAR_21 = 0; }
    if (VAR_22 > '0' && VAR_22 <= '8') { VAR_22 -= '0'; } else { VAR_22 = 0; }
    if (VAR_23 > '0' && VAR_23 <= '8') { VAR_23 -= '0'; } else { VAR_23 = 0; }
    if (VAR_24 >= 'A' && VAR_24 <= 'P') { VAR_24 -= 'A' - 1; } else { VAR_24 = 0; }
    if (VAR_27 >= 'A' && VAR_27 <= 'P') { VAR_27 -= 'A' - 1; } else { VAR_27 = 0; }
    if (VAR_7 >= 4) {
      FUNC_5 (VAR_6, "optional_params_is_given = %d\n", VAR_29);
      FUNC_5 (VAR_6, "sex = %d, age = %d, status = %d, polit = %d, section = %d, city = %d, region = %d, country = %d, source = %d\n",
             VAR_20, VAR_21, VAR_22, VAR_23, VAR_24, VAR_18, FUNC_0(VAR_25), FUNC_0(VAR_26),(int) VAR_27);
    }

    VAR_3 = VAR_30;
    VAR_2 = VAR_14;
    VAR_4 = 0;
    if ((VAR_30 >= 0 && !VAR_0) || (VAR_30 < 0 && VAR_0)) {
      FUNC_3 ("incr", "fail due to version", VAR_10, VAR_11);
      return FUNC_9 (VAR_8);
    }
    VAR_19 = (VAR_29 && VAR_16 == -1) ?
           FUNC_2 (VAR_14, VAR_17, 0, VAR_9, VAR_16, VAR_20, VAR_21, VAR_22, VAR_23, VAR_24, VAR_18, FUNC_0(VAR_25), FUNC_0(VAR_26), VAR_27) :
           FUNC_1 (VAR_14, VAR_17, 0, VAR_9, VAR_16);

    if (VAR_19 < 0) return FUNC_9 (VAR_8);
    FUNC_14 (&VAR_8->Out, VAR_5, FUNC_10 (VAR_5, "%d\r\n", VAR_19));
    return 0;
  }
  return FUNC_9 (VAR_8);
}
