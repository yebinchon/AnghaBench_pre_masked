
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct connection {int In; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int) ;
 char* VAR_2 ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (char*,int) ;
 int FUNC_3 (int,int,int,char*,int) ;
 int FUNC_4 (char const*,int,char**,int*) ;
 int FUNC_5 (int ,char*,char const*,...) ;
 int FUNC_6 (int *,char*,int) ;
 int VAR_3 ;
 int FUNC_7 (char*,char*,int*,int*,int*) ;
 int VAR_4 ;
 int FUNC_8 (char*,char*,int) ;
 int VAR_5 ;

int FUNC_9 (struct connection *VAR_6, int VAR_7, const char *VAR_8, int VAR_9, int VAR_10, int VAR_11, int VAR_12) {
  VAR_0;

  if (VAR_5 > 1) {
    FUNC_5 (VAR_4, "memcache_store: key='%s', key_len=%d, value_len=%d, \n", VAR_8, VAR_9, VAR_12);
  }

  if (VAR_12 + 1 < VAR_1) {
    char *VAR_13;
    int VAR_14;

    FUNC_4 (VAR_8, VAR_9, &VAR_13, &VAR_14);


    if (VAR_14 >= 4 && !FUNC_8 (VAR_13, "stat", 4)) {
      int VAR_15, VAR_16, VAR_17;
      if (FUNC_7 (VAR_13, "stat%d,%d#%d", &VAR_15, &VAR_16, &VAR_17) != 3 || VAR_17 == 0) {
        FUNC_0(VAR_3, -2);
      }

      FUNC_6 (&VAR_6->In, VAR_2, VAR_12);
      VAR_2[VAR_12] = 0;

      FUNC_3 (VAR_15, VAR_16, VAR_17, VAR_2, VAR_12);

      FUNC_0(VAR_3, 1);
    }

    if (VAR_14 >= 14 && !FUNC_8 (VAR_13, "add_black_list", 14)) {
      FUNC_6 (&VAR_6->In, VAR_2, VAR_12);
      VAR_2[VAR_12] = 0;

      if (VAR_5 > 1) {
        FUNC_5 (VAR_4, "add_black_list %s\n", VAR_2);
      }

      int VAR_18 = FUNC_1 (VAR_2, VAR_12);
      FUNC_0(VAR_3, VAR_18);
    }

    if (VAR_14 >= 17 && !FUNC_8 (VAR_13, "delete_black_list", 17)) {
      FUNC_6 (&VAR_6->In, VAR_2, VAR_12);
      VAR_2[VAR_12] = 0;

      if (VAR_5 > 1) {
        FUNC_5 (VAR_4, "delete_black_list %s\n", VAR_2);
      }

      int VAR_19 = FUNC_2 (VAR_2, VAR_12);
      FUNC_0(VAR_3, VAR_19);
    }
  }

  FUNC_0(VAR_3, -2);
}
