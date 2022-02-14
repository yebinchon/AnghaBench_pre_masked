
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct connection {int In; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct connection*) ;
 int FUNC_1 (int ,int) ;
 char* VAR_2 ;
 int FUNC_2 (int,int,char*) ;
 int FUNC_3 (char const*,int,char**,int*) ;
 int FUNC_4 (int ,char*,...) ;
 int FUNC_5 (char*,char const*,int,int) ;
 char* FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int ,int,int) ;
 int FUNC_8 (int *,char*,int) ;
 int VAR_3 ;
 int FUNC_9 (char*,char*,int*,...) ;
 int VAR_4 ;
 int FUNC_10 (char*,char*,int) ;
 int VAR_5 ;

int FUNC_11 (struct connection *VAR_6, int VAR_7, const char *VAR_8, int VAR_9, int VAR_10, int VAR_11, int VAR_12) {
  VAR_0;

  FUNC_5 ("memcache_store: key='%s', key_len=%d, value_len=%d\n", VAR_8, VAR_9, VAR_12);

  if (VAR_5 > 1) {
    FUNC_4 (VAR_4, "memcache_store: key='%s', key_len=%d, value_len=%d, \n", VAR_8, VAR_9, VAR_12);
  }

  if (VAR_12 + 1 < VAR_1) {
    char *VAR_13;
    int VAR_14;

    FUNC_3 (VAR_8, VAR_9, &VAR_13, &VAR_14);

    if (VAR_14 >= 5 && !FUNC_10 (VAR_13, "hints", 5)) {
      int VAR_15;

      if (FUNC_9 (VAR_13, "hints%d", &VAR_15) != 1) {
        FUNC_1(VAR_3, -2);
      }

      if (FUNC_7 (FUNC_0(VAR_6), VAR_12, VAR_15) < 0) {
        FUNC_1(VAR_3, -2);
      }
      FUNC_8 (&VAR_6->In, FUNC_6 (FUNC_0(VAR_6)), VAR_12);

      FUNC_1(VAR_3, 1);
    }

    if (VAR_14 >= 14 && !FUNC_10 (VAR_13, "apps_exception", 14)) {
      int VAR_16, VAR_17;
      if (FUNC_9 (VAR_13, "apps_exception%d%n", &VAR_16, &VAR_17) != 1 || VAR_16 <= 0 || VAR_13[VAR_17]) {
        FUNC_1(VAR_3, -2);
      }

      FUNC_8 (&VAR_6->In, VAR_2, VAR_12);
      VAR_2[VAR_12] = 0;

      if (VAR_5 > 1) {
        FUNC_4 (VAR_4, "add apps exception %d %s\n", VAR_16, VAR_2);
      }

      int VAR_18 = FUNC_2 (VAR_16, 41, VAR_2);

      FUNC_1(VAR_3, VAR_18);
    }

    if (VAR_14 >= 9 && !FUNC_10 (VAR_13, "exception", 9)) {
      int VAR_19, VAR_20, VAR_21;
      if (FUNC_9 (VAR_13, "exception%d,%d%n", &VAR_19, &VAR_21, &VAR_20) != 2 || VAR_19 <= 0 || VAR_21 <= 0 || VAR_21 > 255 || VAR_13[VAR_20]) {
        FUNC_1(VAR_3, -2);
      }

      FUNC_8 (&VAR_6->In, VAR_2, VAR_12);
      VAR_2[VAR_12] = 0;

      if (VAR_5 > 1) {
        FUNC_4 (VAR_4, "add exception %d %d %s\n", VAR_19, VAR_21, VAR_2);
      }

      int VAR_22 = FUNC_2 (VAR_19, VAR_21, VAR_2);
      FUNC_1(VAR_3, VAR_22);
    }
  }

  FUNC_1(VAR_3, -2);
}
