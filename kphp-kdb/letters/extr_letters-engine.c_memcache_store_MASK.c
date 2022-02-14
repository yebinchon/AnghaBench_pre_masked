
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct connection {int In; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (int,long long,scalar_t__*) ;
 int FUNC_2 (long long,int,int,scalar_t__*) ;
 scalar_t__* VAR_4 ;
 int FUNC_3 (char const*,int,char**,int*) ;
 int FUNC_4 (int ,char*,char const*,int,int) ;
 int FUNC_5 (int *,scalar_t__*,int) ;
 int VAR_5 ;
 int FUNC_6 (char*,char*,...) ;
 int VAR_6 ;
 int FUNC_7 (char*,char*,int) ;
 int VAR_7 ;

int FUNC_8 (struct connection *VAR_8, int VAR_9, const char *VAR_10, int VAR_11, int VAR_12, int VAR_13, int VAR_14) {
  VAR_0;

  if (VAR_7 > 1) {
    FUNC_4 (VAR_6, "memcache_store: key='%s', key_len=%d, value_len=%d, \n", VAR_10, VAR_11, VAR_14);
  }

  if (VAR_14 + 1 < VAR_3) {
    char *VAR_15;
    int VAR_16;

    FUNC_3 (VAR_10, VAR_11, &VAR_15, &VAR_16);

    if (VAR_16 >= 15 && !FUNC_7 (VAR_15, "letter_priority", 15)) {
      int VAR_17;
      long long VAR_18;
      int VAR_19 = 0;

      if (FUNC_6 (VAR_15 + 15, "%lld,%d,%d", &VAR_18, &VAR_17, &VAR_19) < 2 || VAR_17 <= 0 || VAR_17 >= VAR_2 || VAR_19 < 0 || VAR_19 > VAR_1) {
        FUNC_0(VAR_5, -2);
      }

      FUNC_5 (&VAR_8->In, VAR_4, VAR_14);
      VAR_4[VAR_14] = 0;

      int VAR_20 = FUNC_2 (VAR_18, VAR_17, VAR_19, VAR_4);
      FUNC_0(VAR_5, VAR_20);
    }

    if (VAR_16 >= 6 && !FUNC_7 (VAR_15, "letter", 6)) {
      int VAR_21;
      int VAR_22 = 0;
      long long VAR_23 = 0;

      if (FUNC_6 (VAR_15 + 6, "%d,%d,%lld", &VAR_21, &VAR_22, &VAR_23) < 1 || VAR_22 < 0 || VAR_22 > VAR_1) {
        FUNC_0(VAR_5, -2);
      }

      FUNC_5 (&VAR_8->In, VAR_4, VAR_14);
      VAR_4[VAR_14] = 0;

      int VAR_24 = FUNC_1 (VAR_22, VAR_23, VAR_4);
      FUNC_0(VAR_5, VAR_24);
    }
  }

  FUNC_0(VAR_5, -2);
}
