
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct connection {int In; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct connection*) ;
 int FUNC_1 (int ,int) ;
 int VAR_2 ;
 int FUNC_2 (int,int,int ) ;
 int FUNC_3 (int,int,int ) ;
 int FUNC_4 (char const*,int,char**,int*) ;
 int VAR_3 ;
 int FUNC_5 (char*,char const*,int,int) ;
 size_t VAR_4 ;
 char** VAR_5 ;
 int FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int ,int,int) ;
 int FUNC_8 (int *,int ,int) ;
 int VAR_6 ;
 int FUNC_9 (char*,char*,int*,int*,...) ;
 int FUNC_10 (char*,char*,int) ;
 scalar_t__ FUNC_11 (int) ;

int FUNC_12 (struct connection *VAR_7, int VAR_8, const char *VAR_9, int VAR_10, int VAR_11, int VAR_12, int VAR_13) {
  VAR_0;

  FUNC_5 ("memcache_store: key='%s', key_len=%d, value_len=%d\n", VAR_9, VAR_10, VAR_13);

  if (FUNC_11 (VAR_13 >= VAR_1)) {
    FUNC_1 (VAR_6, -2);
  }

  char *VAR_14;
  int VAR_15;
  FUNC_4 (VAR_9, VAR_10, &VAR_14, &VAR_15);

  if (VAR_15 >= 12 && !FUNC_10 (VAR_14, "change_", 7) && !FUNC_10 (VAR_14 + 7, VAR_5[VAR_4], 5)) {
    int VAR_16, VAR_17, VAR_18;
    FUNC_8 (&VAR_7->In, VAR_2, VAR_13);

    if (FUNC_9 (VAR_14 + 12, "%d,%d%n", &VAR_16, &VAR_17, &VAR_18) < 2 || VAR_14[12 + VAR_18]) {
      FUNC_1 (VAR_6, 0);
    }

    int VAR_19 = FUNC_3 (VAR_16, VAR_17, VAR_2);
    FUNC_1 (VAR_6, VAR_19);
  }

  if (VAR_15 >= 12 && !FUNC_10 (VAR_14, "change_album", 12)) {
    int VAR_20, VAR_21, VAR_22;
    FUNC_8 (&VAR_7->In, VAR_2, VAR_13);

    if (FUNC_9 (VAR_14 + 12, "%d,%d%n", &VAR_20, &VAR_21, &VAR_22) < 2 || VAR_14[12 + VAR_22]) {
      FUNC_1 (VAR_6, 0);
    }

    int VAR_23 = FUNC_2 (VAR_20, VAR_21, VAR_2);
    FUNC_1 (VAR_6, VAR_23);
  }

  if (VAR_15 >= 22 && !FUNC_10 (VAR_14, VAR_5[VAR_4], 5) && !FUNC_10 (VAR_14 + 5, "s_overview_albums", 17)) {
    int VAR_24, VAR_25 = -1;
    if (FUNC_9 (VAR_14 + 22, "%*d,%d%n", &VAR_24, &VAR_25) != 1 || VAR_14[22 + VAR_25]) {
      FUNC_1 (VAR_3, -2);
    }

    if (FUNC_7 (FUNC_0 (VAR_7), VAR_13, VAR_24) < 0) {
      FUNC_1 (VAR_3, -2);
    }
    FUNC_8 (&VAR_7->In, FUNC_6 (FUNC_0 (VAR_7)), VAR_13);

    FUNC_1 (VAR_3, 1);
  }

  FUNC_1 (VAR_6, -2);
}
