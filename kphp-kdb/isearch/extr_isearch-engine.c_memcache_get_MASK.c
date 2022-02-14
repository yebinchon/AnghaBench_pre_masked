
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct connection {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 scalar_t__ VAR_2 ;
 int FUNC_1 () ;
 char* FUNC_2 () ;
 char* VAR_3 ;
 double VAR_4 ;
 int FUNC_3 (char const*,int,char**,int*) ;
 int FUNC_4 (int ,char*,char const*,...) ;
 int VAR_5 ;
 int FUNC_5 (char*,int,int ) ;
 int FUNC_6 (char*,int,int ) ;
 int FUNC_7 (char*,int ) ;
 int FUNC_8 (char*,int,int ) ;
 int FUNC_9 () ;
 int FUNC_10 (char*,char*,int) ;
 double FUNC_11 () ;
 int FUNC_12 (struct connection*,char*,scalar_t__) ;
 int FUNC_13 (struct connection*,char const*,char*,int) ;
 int FUNC_14 (char*,char*,int*) ;
 char* VAR_6 ;
 int VAR_7 ;
 int FUNC_15 (char*) ;
 int FUNC_16 (char*,char*,int) ;
 int VAR_8 ;

int FUNC_17 (struct connection *VAR_9, const char *VAR_10, int VAR_11) {
  VAR_0;

  if (VAR_8 > 1) {
    FUNC_4 (VAR_7, "memcache_get: key='%s', key_len=%d\n", VAR_10, VAR_11);
  }

  char *VAR_12;
  int VAR_13;

  FUNC_3 (VAR_10, VAR_11, &VAR_12, &VAR_13);

  int VAR_14 = 0, VAR_15 = 0;

  if (VAR_13 >= 5 && !FUNC_16 (VAR_12, "hints", 5)) {
    VAR_14 = 1;
    VAR_15 = 5;
  }
  if (VAR_14) {
    if (VAR_12[VAR_15] != '(' || VAR_12[VAR_13 - 1] != ')') {
      FUNC_0(VAR_5, 0);
    }
    int VAR_16 = VAR_13 - VAR_15 - 2;
    FUNC_10 (VAR_3, VAR_12 + VAR_15 + 1, sizeof (char) * VAR_16);
    VAR_3[VAR_16] = 0;

    if (VAR_8 >= 2) {
      FUNC_4 (VAR_7, "run get_hints (%s, %d)\n", VAR_3, VAR_14);
    }

    FUNC_6 (VAR_3, VAR_14, VAR_1);

    FUNC_13 (VAR_9, VAR_10, VAR_3, FUNC_15 (VAR_3));

    if (VAR_8 > 0) {
      if (FUNC_11() + VAR_4 > 0.005) {
        FUNC_4 (VAR_7, "Warning!!! Search query (%s) was %lf seconds.\n", VAR_12, FUNC_11() + VAR_4);
      }
    }

    FUNC_0(VAR_5, 0);
  }

  if (VAR_13 >= 10 && !FUNC_16 (VAR_12, "suggestion", 10)) {
    if (VAR_12[10] != '(' || VAR_12[VAR_13 - 1] != ')') {
      FUNC_0(VAR_5, 0);
    }

    int VAR_17 = VAR_13 - 12;
    FUNC_10 (VAR_3, VAR_12 + 11, sizeof (char) * VAR_17);
    VAR_3[VAR_17] = 0;

    if (VAR_8 >= 2) {
      FUNC_4 (VAR_7, "run get_suggestion (%s)\n", VAR_3);
    }

    FUNC_7 (VAR_3, VAR_1);

    FUNC_13 (VAR_9, VAR_10, VAR_3, FUNC_15 (VAR_3));

    if (VAR_8 > 0) {
      if (FUNC_11() + VAR_4 > 0.005) {
        FUNC_4 (VAR_7, "Warning!!! Search query (%s) was %lf seconds.\n", VAR_12, FUNC_11() + VAR_4);
      }
    }

    FUNC_0(VAR_5, 0);
  }

  if (VAR_13 >= 5 && !FUNC_16 (VAR_12, "stats", 5)) {
    int VAR_18 = FUNC_9 ();
    int VAR_19 = FUNC_12 (VAR_9, VAR_6 + VAR_18, VAR_2 - VAR_18);
    FUNC_13 (VAR_9, VAR_10, VAR_6, VAR_18 + VAR_19 - 1);

    return 0;
  }

  if (VAR_13 >= 3 && !FUNC_16 (VAR_12, "top", 3)) {
    int VAR_20;
    if (FUNC_14 (VAR_12, "top%d", &VAR_20) == 1) {
      FUNC_8 (VAR_3, VAR_20, VAR_1);

      FUNC_13 (VAR_9, VAR_10, VAR_3, FUNC_15 (VAR_3));
    }
    FUNC_0(VAR_5, 0);
  }

  if (VAR_13 >= 4 && !FUNC_16 (VAR_12, "best", 4)) {
    int VAR_21;
    if (FUNC_14 (VAR_12, "best%d", &VAR_21) == 1) {
      FUNC_5 (VAR_3, VAR_21, VAR_1);

      FUNC_13 (VAR_9, VAR_10, VAR_3, FUNC_15 (VAR_3));
    }
    FUNC_0(VAR_5, 0);
  }

  if (VAR_13 >= 10 && !FUNC_16 (VAR_12, "black_list", 10)) {
    if (VAR_13 >= 16 && !FUNC_16 (VAR_12, "black_list_force", 16)) {
      FUNC_1();
    } else {
      char *VAR_22 = FUNC_2();
      int VAR_23 = FUNC_15 (VAR_22);

      FUNC_13 (VAR_9, VAR_10, VAR_22, VAR_23);
    }

    FUNC_0(VAR_5, 0);
  }

  FUNC_0(VAR_5, 0);
}
