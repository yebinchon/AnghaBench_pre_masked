
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct connection {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 scalar_t__ VAR_2 ;
 char* FUNC_1 (char*,int ) ;
 int FUNC_2 (char const*,int,char**,int*) ;
 int FUNC_3 (int ,char*,char const*,int) ;
 int VAR_3 ;
 char* FUNC_4 (int,int,int,int) ;
 int FUNC_5 (int) ;
 int FUNC_6 () ;
 int FUNC_7 (struct connection*,char*,scalar_t__) ;
 int FUNC_8 (struct connection*,char const*,char*,int) ;
 int FUNC_9 (struct connection*,char const*,char*,int,int) ;
 int FUNC_10 (char*,char*,int*,...) ;
 char* VAR_4 ;
 int VAR_5 ;
 int FUNC_11 (char*) ;
 int FUNC_12 (char*,char*,int) ;
 int VAR_6 ;

int FUNC_13 (struct connection *VAR_7, const char *VAR_8, int VAR_9) {
  VAR_0;

  if (VAR_6 > 1) {
    FUNC_3 (VAR_5, "memcache_get: key='%s', key_len=%d\n", VAR_8, VAR_9);
  }

  char *VAR_10;
  int VAR_11;

  FUNC_2 (VAR_8, VAR_9, &VAR_10, &VAR_11);

  if (VAR_11 >= 5 && !FUNC_12 (VAR_10, "stats", 5)) {
    int VAR_12 = FUNC_6();
    int VAR_13 = FUNC_7 (VAR_7, VAR_4 + VAR_12, VAR_2 - VAR_12);
    FUNC_8 (VAR_7, VAR_8, VAR_4, VAR_12 + VAR_13 - 1);

    return 0;
  }

  if (VAR_11 >= 7 && !FUNC_12 (VAR_10, "letters", 7)) {
    int VAR_14, VAR_15, VAR_16, VAR_17 = 0, VAR_18 = 7;
    if (!FUNC_12 (VAR_10 + VAR_18, "_immediate", 10)) {
      VAR_18 += 10;
      VAR_17 = 1;
    }

    if (FUNC_10 (VAR_10 + VAR_18, "%*d,%d,%d#%d", &VAR_14, &VAR_15, &VAR_16) != 3 || VAR_14 <= 0 || VAR_15 >= VAR_1 || VAR_14 > VAR_15) {
      FUNC_0(VAR_3, 0);
    }

    char *VAR_19 = FUNC_4 (VAR_14, VAR_15, VAR_16, VAR_17);

    FUNC_9 (VAR_7, VAR_8, VAR_19, FUNC_11 (VAR_19), 1);

    FUNC_0(VAR_3, 0);
  }

  if (VAR_11 >= 11 && !FUNC_12 (VAR_10, "clear_queue", 11)) {
    int VAR_20;
    if (FUNC_10 (VAR_10 + 11, "%d", &VAR_20) < 1 || VAR_20 < 0 || VAR_20 >= VAR_1) {
      FUNC_0(VAR_3, 0);
    }

    char *VAR_21 = FUNC_1 ("%lld", FUNC_5 (VAR_20));
    FUNC_8 (VAR_7, VAR_8, VAR_21, FUNC_11 (VAR_21));

    FUNC_0(VAR_3, 0);
  }

  FUNC_0(VAR_3, 0);
}
