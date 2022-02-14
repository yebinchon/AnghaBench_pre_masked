
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct connection {int In; } ;


 int FUNC_0 (struct connection*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int) ;
 char* VAR_2 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char const*,int,char**,int*) ;
 int FUNC_5 (int ,char*,...) ;
 char* FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int ,int,int) ;
 int FUNC_8 (int *,char*,int) ;
 int VAR_3 ;
 int FUNC_9 (char*,char*,int*) ;
 int VAR_4 ;
 int FUNC_10 (char*,char*,int) ;
 int VAR_5 ;

int FUNC_11 (struct connection *VAR_6, int VAR_7, const char *VAR_8, int VAR_9, int VAR_10, int VAR_11, int VAR_12) {
  VAR_0;

  if (VAR_5 > 1) {
    FUNC_5 (VAR_4, "memcache_store: key='%s', key_len=%d, value_len=%d, \n", VAR_8, VAR_9, VAR_12);
  }

  if (VAR_12 + 1 < VAR_1) {
    char *VAR_13;
    int VAR_14;

    FUNC_4 (VAR_8, VAR_9, &VAR_13, &VAR_14);


    if (VAR_14 >= 12 && !FUNC_10 (VAR_13, "current_text", 12)) {
      int VAR_15;
      if (FUNC_9 (VAR_13, "current_text%d", &VAR_15) != 1) {
        FUNC_1(VAR_3, -2);
      }

      if (VAR_5 > 1) {
        FUNC_5 (VAR_4, "current_text %d\n", VAR_15);
      }

      if (FUNC_7 (FUNC_0 (VAR_6), VAR_12, VAR_15) < 0) {
        FUNC_1(VAR_3, -2);
      }
      FUNC_8 (&VAR_6->In, FUNC_6 (FUNC_0 (VAR_6)), VAR_12);

      FUNC_1(VAR_3, 1);
    }

    if (VAR_14 >= 14 && !FUNC_10 (VAR_13, "add_black_list", 14)) {
      FUNC_8 (&VAR_6->In, VAR_2, VAR_12);
      VAR_2[VAR_12] = 0;

      if (VAR_5 > 1) {
        FUNC_5 (VAR_4, "add_black_list %s\n", VAR_2);
      }

      int VAR_16 = FUNC_2 (VAR_2);
      FUNC_1(VAR_3, VAR_16);
    }

    if (VAR_14 >= 17 && !FUNC_10 (VAR_13, "delete_black_list", 17)) {
      FUNC_8 (&VAR_6->In, VAR_2, VAR_12);
      VAR_2[VAR_12] = 0;

      if (VAR_5 > 1) {
        FUNC_5 (VAR_4, "delete_black_list %s\n", VAR_2);
      }

      int VAR_17 = FUNC_3 (VAR_2);
      FUNC_1(VAR_3, VAR_17);
    }
  }

  FUNC_1(VAR_3, -2);
}
