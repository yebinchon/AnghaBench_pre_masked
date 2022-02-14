
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct connection {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int) ;
 char* VAR_5 ;
 int FUNC_2 (int,int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (char const*,int,char**,int*) ;
 int FUNC_5 (int ,char*,char const*,int) ;
 int* VAR_6 ;
 int VAR_7 ;
 int FUNC_6 (int,int,int,int*) ;
 int FUNC_7 () ;
 int FUNC_8 (struct connection*,char*,int) ;
 int FUNC_9 (struct connection*,char const*,char*,int) ;
 int FUNC_10 (char*,char*,int,...) ;
 int FUNC_11 (char*,char*,int*,...) ;
 char* VAR_8 ;
 int VAR_9 ;
 int FUNC_12 (char*,char*,int) ;
 int VAR_10 ;

int FUNC_13 (struct connection *VAR_11, const char *VAR_12, int VAR_13) {
  VAR_0;

  if (VAR_10 > 1) {
    FUNC_5 (VAR_9, "memcache_get: key='%s', key_len=%d\n", VAR_12, VAR_13);
  }

  char *VAR_14;
  int VAR_15;

  FUNC_4 (VAR_12, VAR_13, &VAR_14, &VAR_15);

  if (VAR_15 >= 11 && !FUNC_12 (VAR_14, "unload_user", 11)) {
    int VAR_16;

    FUNC_11 (VAR_14, "unload_user%d", &VAR_16);


    FUNC_9 (VAR_11, VAR_12, "0", 1);

    FUNC_0(VAR_7, 0);
  }

  if (VAR_15 >= 10 && !FUNC_12 (VAR_14, "unload_lru", 10)) {

    FUNC_9 (VAR_11, VAR_12, "0", 1);

    FUNC_0(VAR_7, 0);
  }


  if (VAR_15 >= 5 && !FUNC_12 (VAR_14, "stats", 5)) {
    int VAR_17 = FUNC_7 ();
    int VAR_18 = FUNC_8 (VAR_11, VAR_8 + VAR_17, VAR_3 - VAR_17);
    FUNC_1 (VAR_17 + VAR_18 + 1 < VAR_3);
    FUNC_9 (VAR_11, VAR_12, VAR_8, VAR_17 + VAR_18 - 1);

    return 0;
  }


  if (VAR_15 >= 9 && !FUNC_12 (VAR_14, "exception", 9)) {
    int VAR_19, VAR_20;
    if (FUNC_11 (VAR_14, "exception%d_%d", &VAR_19, &VAR_20) == 2) {
       FUNC_2 (VAR_19, VAR_20);
    }
    FUNC_9 (VAR_11, VAR_12, "0", 1);

    FUNC_0(VAR_7, 0);
  }

  if (VAR_15 >= 16 && !FUNC_12 (VAR_14, "clear_exceptions", 16)) {
    int VAR_21;
    if (FUNC_11 (VAR_14, "clear_exceptions%d", &VAR_21) == 1) {
       int VAR_22 = FUNC_3 (VAR_21);
       if (VAR_22 < 0) {
         FUNC_0(VAR_7, VAR_22);
       }
    }
    FUNC_9 (VAR_11, VAR_12, "0", 1);

    FUNC_0(VAR_7, 0);
  }

  if (VAR_15 >= 11 && !FUNC_12 (VAR_14, "suggestions", 11)) {
    int VAR_23, VAR_24, VAR_25, VAR_26;
    int VAR_27 = FUNC_11 (VAR_14 + 11, "%d#%d%n", &VAR_23, &VAR_24, &VAR_25);
    if (VAR_27 != 1 && VAR_27 != 2) {
      FUNC_0(VAR_7, 0);
    }
    if (VAR_27 == 1) {
      VAR_24 = VAR_1;
    } else {
      int VAR_28 = FUNC_11 (VAR_14 + 11 + VAR_25, ",%d", &VAR_26);
      if (VAR_28 <= 0) {
        VAR_26 = 1;
      }
    }

    if (2 * VAR_24 + 5 > VAR_2) {
      VAR_4 |= (1 << 19);
      VAR_24 = (VAR_2 - 5) / 2;
    }

    int VAR_29 = FUNC_6 (VAR_23, VAR_24, VAR_26, VAR_6);
    if (VAR_29 >= 0) {
      char *VAR_30 = VAR_5;
      int VAR_31 = VAR_6[0], VAR_32;
      VAR_30 += FUNC_10 (VAR_30, "%d", VAR_31);
      for (VAR_32 = 0; VAR_32 < VAR_31; VAR_32++) {
        VAR_30 += FUNC_10 (VAR_30, ",%d,%d", VAR_6[VAR_32 * 2 + 1], VAR_6[VAR_32 * 2 + 2]);
      }
      FUNC_9 (VAR_11, VAR_12, VAR_5, VAR_30 - VAR_5);
    }

    FUNC_0(VAR_7, VAR_29);
  }

  FUNC_0(VAR_7, 0);
}
