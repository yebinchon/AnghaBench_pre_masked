
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct connection {int In; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int) ;
 int VAR_3 ;
 int FUNC_1 (int,int,int*,int) ;
 char* VAR_4 ;
 int FUNC_2 (char const*,int,char**,int*) ;
 int FUNC_3 (int ,char*,char const*,int,int) ;
 int* VAR_5 ;
 int FUNC_4 (char const**) ;
 int FUNC_5 (int *,char*,int) ;
 int VAR_6 ;
 int FUNC_6 (char*,char*,int*,int*) ;
 int VAR_7 ;
 int FUNC_7 (char*,char*,int) ;
 int VAR_8 ;

int FUNC_8 (struct connection *VAR_9, int VAR_10, const char *VAR_11, int VAR_12, int VAR_13, int VAR_14, int VAR_15) {
  VAR_0;

  if (VAR_8 > 1) {
    FUNC_3 (VAR_7, "memcache_store: key='%s', key_len=%d, value_len=%d, \n", VAR_11, VAR_12, VAR_15);
  }

  if (VAR_15 + 1 < VAR_2) {
    char *VAR_16;
    int VAR_17;

    FUNC_2 (VAR_11, VAR_12, &VAR_16, &VAR_17);


    if (VAR_17 >= 14 && !FUNC_7 (VAR_16, "common_friends", 14)) {
      int VAR_18;
      int VAR_19;
      int VAR_20 = FUNC_6 (VAR_16 + 14, "%d,%d\n", &VAR_18, &VAR_19);


      if (VAR_19 != -1 && VAR_19 != -4 && VAR_19 != 1 && VAR_19 != 4) {
        VAR_3 |= (1 << 18);
        FUNC_0(VAR_6, -2);
      }

      if (VAR_20 != 1 && VAR_20 != 2) {
        FUNC_0(VAR_6, -2);
      }
      if (VAR_20 == 1) {
        VAR_19 = 1;
      }

      FUNC_5 (&VAR_9->In, VAR_4, VAR_15);
      VAR_4[VAR_15] = 0;

      const char *VAR_21 = VAR_4;
      int VAR_22 = FUNC_4 (&VAR_21), VAR_23;

      if (VAR_22 >= VAR_1 - 1) {
        VAR_3 |= (1 << 15);
        FUNC_0(VAR_6, 0);
      }

      if (VAR_22 < 0) {
        VAR_3 |= (1 << 16);
        FUNC_0(VAR_6, 0);
      }

      for (VAR_23 = 0; VAR_23 < VAR_22; VAR_23++)
      {
        if (*VAR_21 == 0) {
          FUNC_0(VAR_6, 0);
        }
        VAR_21++;
        VAR_5[VAR_23] = FUNC_4 (&VAR_21);
        if (VAR_5[VAR_23] <= 0 || VAR_5[VAR_23] >= (1 << 28)) {
          VAR_3 |= (1 << 17);
          FUNC_0(VAR_6, 0);
        }
      }

      int VAR_24 = FUNC_1 (VAR_18, VAR_19, VAR_5, VAR_22);
      FUNC_0(VAR_6, VAR_24);
    }
  }

  FUNC_0(VAR_6, -2);
}
