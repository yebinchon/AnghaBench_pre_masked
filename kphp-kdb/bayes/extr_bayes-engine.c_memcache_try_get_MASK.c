
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct connection {int dummy; } ;


 int FUNC_0 (struct connection*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int) ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int ,int,char*) ;
 double FUNC_4 (int ,int) ;
 int FUNC_5 () ;
 int FUNC_6 (char*,int ) ;
 char* VAR_3 ;
 int FUNC_7 (int ,int) ;
 int FUNC_8 (int ,int) ;
 int FUNC_9 (int ,int) ;
 int FUNC_10 (int ,int) ;
 int FUNC_11 (int ,int) ;
 int FUNC_12 (int ,int) ;
 int FUNC_13 (char const*,int,char**,int*) ;
 int FUNC_14 (int ,char*,char const*,int) ;
 int VAR_4 ;
 int FUNC_15 (struct connection*,char*,scalar_t__) ;
 int FUNC_16 (struct connection*,char const*,char*,int) ;
 int FUNC_17 (char*,char*,double) ;
 int FUNC_18 (char*,char*,int*) ;
 char* VAR_5 ;
 int VAR_6 ;
 int FUNC_19 (char*) ;
 int FUNC_20 (char*,char*,int) ;
 int VAR_7 ;

int FUNC_21 (struct connection *VAR_8, const char *VAR_9, int VAR_10) {
  VAR_0;

  if (VAR_7 > 1) {
    FUNC_14 (VAR_6, "memcache_get: key='%s', key_len=%d\n", VAR_9, VAR_10);
  }

  char *VAR_11;
  int VAR_12;

  FUNC_13 (VAR_9, VAR_10, &VAR_11, &VAR_12);

  if (VAR_12 >= 5 && !FUNC_20 (VAR_11, "stats", 5)) {
    int VAR_13 = FUNC_5 ();
    int VAR_14 = FUNC_15 (VAR_8, VAR_5 + VAR_13, VAR_2 - VAR_13);
    FUNC_16 (VAR_8, VAR_9, VAR_5, VAR_13 + VAR_14 - 1);

    return 0;
  }

  if (VAR_12 >= 8 && !FUNC_20 (VAR_11, "set_spam", 8)) {
    int VAR_15;
    if (FUNC_18 (VAR_11, "set_spam%d", &VAR_15) != 1) {
      FUNC_1(VAR_4, 0);
    }

    FUNC_10 (FUNC_0 (VAR_8), VAR_15);

    FUNC_1(VAR_4, 0);
  }

  if (VAR_12 >= 7 && !FUNC_20 (VAR_11, "set_ham", 7)) {
    int VAR_16;
    if (FUNC_18 (VAR_11, "set_ham%d", &VAR_16) != 1) {
      FUNC_1(VAR_4, 0);
    }

    FUNC_9 (FUNC_0 (VAR_8), VAR_16);

    FUNC_1(VAR_4, 0);
  }

  if (VAR_12 >= 10 && !FUNC_20 (VAR_11, "unset_spam", 10)) {
    int VAR_17;
    if (FUNC_18 (VAR_11, "unset_spam%d", &VAR_17) != 1) {
      FUNC_1(VAR_4, 0);
    }

    FUNC_12 (FUNC_0 (VAR_8), VAR_17);

    FUNC_1(VAR_4, 0);
  }

  if (VAR_12 >= 9 && !FUNC_20 (VAR_11, "unset_ham", 9)) {
    int VAR_18;
    if (FUNC_18 (VAR_11, "unset_ham%d", &VAR_18) != 1) {
      FUNC_1(VAR_4, 0);
    }

    FUNC_11 (FUNC_0 (VAR_8), VAR_18);

    FUNC_1(VAR_4, 0);
  }

  if (VAR_12 >= 10 && !FUNC_20 (VAR_11, "reset_spam", 10)) {
    int VAR_19;
    if (FUNC_18 (VAR_11, "reset_spam%d", &VAR_19) != 1) {
      FUNC_1(VAR_4, 0);
    }

    FUNC_8 (FUNC_0 (VAR_8), VAR_19);

    FUNC_1(VAR_4, 0);
  }

  if (VAR_12 >= 9 && !FUNC_20 (VAR_11, "reset_ham", 9)) {
    int VAR_20;
    if (FUNC_18 (VAR_11, "reset_ham%d", &VAR_20) != 1) {
      FUNC_1(VAR_4, 0);
    }

    FUNC_7 (FUNC_0 (VAR_8), VAR_20);

    FUNC_1(VAR_4, 0);
  }

  if (VAR_12 >= 9 && !FUNC_20 (VAR_11, "test_debug", 10)) {
    int VAR_21;
    if (FUNC_18 (VAR_11, "test_debug%d", &VAR_21) != 1) {
      FUNC_1(VAR_4, 0);
    }

    FUNC_3 (FUNC_0 (VAR_8), VAR_21, VAR_3);

    FUNC_16 (VAR_8, VAR_9, VAR_3, FUNC_19 (VAR_3));

    FUNC_1(VAR_4, 0);
  }

  if (VAR_12 >= 9 && !FUNC_20 (VAR_11, "test_prob", 9)) {
    int VAR_22;
    if (FUNC_18 (VAR_11, "test_prob%d", &VAR_22) != 1) {
      FUNC_1(VAR_4, 0);
    }

    double VAR_23 = FUNC_4 (FUNC_0 (VAR_8), VAR_22);

    if (VAR_23 >= -1e-9) {
      FUNC_17 (VAR_3, "%.6lf", VAR_23);
      FUNC_16 (VAR_8, VAR_9, VAR_3, FUNC_19 (VAR_3));

      FUNC_1(VAR_4, 0);
    }

    int VAR_24 = (int)VAR_23;
    FUNC_1(VAR_4, VAR_24);
  }

  if (VAR_12 >= 4 && !FUNC_20 (VAR_11, "test", 4)) {
    int VAR_25;
    if (FUNC_18 (VAR_11, "test%d", &VAR_25) != 1) {
      FUNC_1(VAR_4, 0);
    }

    int VAR_26 = FUNC_2 (FUNC_0 (VAR_8), VAR_25);

    if (VAR_26 >= 0) {
      FUNC_16 (VAR_8, VAR_9, VAR_26 ? "spam" : "ham", VAR_26 ? 4 : 3);

      FUNC_1(VAR_4, 0);
    }

    FUNC_1(VAR_4, VAR_26);
  }

  if (VAR_12 >= 10 && !FUNC_20 (VAR_11, "black_list", 10)) {
    int VAR_27 = FUNC_6 (VAR_3, VAR_1);

    if (VAR_27 >= 0) {
      FUNC_16 (VAR_8, VAR_9, VAR_3, FUNC_19 (VAR_3));
    }

    FUNC_1(VAR_4, 0);
  }

  FUNC_1(VAR_4, 0);
}
