
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct connection {int dummy; } ;
struct TYPE_4__ {char* text; } ;
typedef TYPE_1__ message ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* FUNC_0 (struct connection*) ;
 int FUNC_1 (int ,int) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (int ) ;
 scalar_t__ VAR_4 ;
 int FUNC_3 (char const*,int,char**,int*) ;
 int FUNC_4 (int ,char*,char const*,int) ;
 int VAR_5 ;
 int FUNC_5 (int,int,int,scalar_t__) ;
 int FUNC_6 (int,int,int,char*,scalar_t__) ;
 int FUNC_7 (char*,char const*,int) ;
 int FUNC_8 () ;
 scalar_t__ FUNC_9 (TYPE_1__*,int) ;
 int FUNC_10 (struct connection*,scalar_t__,scalar_t__) ;
 int FUNC_11 (struct connection*,char const*,scalar_t__,int) ;
 int FUNC_12 (char*,char*,int*,int*,...) ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int FUNC_13 (scalar_t__) ;
 int FUNC_14 (char*,char*,int) ;
 int VAR_8 ;

int FUNC_15 (struct connection *VAR_9, const char *VAR_10, int VAR_11) {
  FUNC_7 ("memcache_get: key='%s', key_len=%d\n", VAR_10, VAR_11);

  if (VAR_8 > 1) {
    FUNC_4 (VAR_7, "memcache_get: key='%s', key_len=%d\n", VAR_10, VAR_11);
  }

  char *VAR_12;
  int VAR_13;

  FUNC_3 (VAR_10, VAR_11, &VAR_12, &VAR_13);

  if (VAR_13 >= 5 && !FUNC_14 (VAR_12, "stats", 5)) {
    int VAR_14 = FUNC_8 ();
    int VAR_15 = FUNC_10 (VAR_9, VAR_6 + VAR_14, VAR_3 - VAR_14);
    FUNC_11 (VAR_9, VAR_10, VAR_6, VAR_14 + VAR_15 - 1);

    return 0;
  }

  VAR_0;

  VAR_2;

  VAR_1;

  if (VAR_13 >= 5 && !FUNC_14 (VAR_12, "hints", 5)) {
    int VAR_16, VAR_17;
    int VAR_18, VAR_19, VAR_20;
    message *VAR_21 = FUNC_0(VAR_9);

    if (FUNC_12 (VAR_12, "hints%d%n", &VAR_16, &VAR_17) != 1 || FUNC_9 (VAR_21, VAR_16) < 0 || VAR_17 < VAR_13) {
      FUNC_1(VAR_5, 0);
    }

    char *VAR_22 = VAR_21->text;
    int VAR_23 = 0;
    VAR_17 = 0;

    FUNC_2 (VAR_22 != ((void*)0));

    if (FUNC_12 (VAR_22, "%d,%d,%d%n", &VAR_19, &VAR_20, &VAR_18, &VAR_17) != 3 || VAR_18 <= 0) {
      FUNC_1(VAR_5, 0);
    }
    VAR_23 += VAR_17;

    int VAR_24 = FUNC_6 (VAR_19, VAR_20, VAR_18, VAR_22 + VAR_23, VAR_4);

    if (VAR_24 >= 0) {
      FUNC_11 (VAR_9, VAR_10, VAR_4, FUNC_13 (VAR_4));
      FUNC_1(VAR_5, 0);
    }

    FUNC_1(VAR_5, VAR_24);
  }

  if (VAR_13 >= 10 && !FUNC_14 (VAR_12, "apps_hints", 10)) {
    int VAR_25, VAR_26;
    int VAR_27 = 10, VAR_28;
    if (FUNC_12 (VAR_12 + VAR_27, "%d,%d%n", &VAR_26, &VAR_25, &VAR_28) != 2 || VAR_25 <= 0) {
      FUNC_1(VAR_5, 0);
    }
    VAR_27 += VAR_28;

    int VAR_29 = FUNC_6 (VAR_26, 41, VAR_25, VAR_12 + VAR_27, VAR_4);

    if (VAR_29 >= 0) {
      FUNC_11 (VAR_9, VAR_10, VAR_4, FUNC_13 (VAR_4));
      FUNC_1(VAR_5, 0);
    }

    FUNC_1(VAR_5, VAR_29);
  }

  if (VAR_13 >= 4 && !FUNC_14 (VAR_12, "apps", 4)) {
    int VAR_30, VAR_31, VAR_32;
    if (FUNC_12 (VAR_12, "apps%d#%d%n", &VAR_30, &VAR_31, &VAR_32) != 2 || VAR_31 <= 0 || VAR_12[VAR_32]) {
      FUNC_1(VAR_5, 0);
    }

    int VAR_33 = FUNC_5 (VAR_30, 41, VAR_31, VAR_4);

    if (VAR_33 >= 0) {
      FUNC_11 (VAR_9, VAR_10, VAR_4, FUNC_13 (VAR_4));
      FUNC_1(VAR_5, 0);
    }

    FUNC_1(VAR_5, VAR_33);
  }

  FUNC_1(VAR_5, 0);
}
