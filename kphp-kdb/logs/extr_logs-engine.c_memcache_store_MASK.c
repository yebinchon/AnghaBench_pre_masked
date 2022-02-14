
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct connection {int In; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct connection*) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (char*) ;
 char* VAR_4 ;
 int FUNC_3 (char*,int*,char*) ;
 int FUNC_4 (char const*,int,char**,int*) ;
 int FUNC_5 (int ,char*,...) ;
 char* FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int ,int,int) ;
 int FUNC_8 (char const*,long long*,int*) ;
 int FUNC_9 (int *,char*,int) ;
 int VAR_5 ;
 int FUNC_10 (char*,char*,int*) ;
 char* VAR_6 ;
 scalar_t__* VAR_7 ;
 int VAR_8 ;
 int FUNC_11 (char*,char*,int) ;
 int VAR_9 ;
 int VAR_10 ;

int FUNC_12 (struct connection *VAR_11, int VAR_12, const char *VAR_13, int VAR_14, int VAR_15, int VAR_16, int VAR_17) {
  VAR_1;

  if (VAR_9 > 1) {
    FUNC_5 (VAR_8, "memcache_store: key='%s', key_len=%d, value_len=%d\n", VAR_13, VAR_14, VAR_17);
  }

  if (VAR_17 + 1 < VAR_3) {
    char *VAR_18;
    int VAR_19;

    FUNC_4 (VAR_13, VAR_14, &VAR_18, &VAR_19);

    if (!VAR_10 && VAR_19 >= 6 && !FUNC_11 (VAR_18, "select", 6) && VAR_17 < VAR_2) {
      int VAR_20;
      if (FUNC_10 (VAR_18, "select%d", &VAR_20) != 1) {
        FUNC_1(VAR_5, -2);
      }

      if (VAR_9 > 1) {
        FUNC_5 (VAR_8, "current_text %d\n", VAR_20);
      }

      if (FUNC_7 (FUNC_0(VAR_11), VAR_17, VAR_20) < 0) {
        FUNC_5 (VAR_8, "WARNING: not enough memory for message allocating\n");
        FUNC_1(VAR_5, -2);
      }

      char *VAR_21 = FUNC_6 (FUNC_0(VAR_11));
      FUNC_2 (VAR_21);
      FUNC_9 (&VAR_11->In, VAR_21, VAR_17);
      VAR_21[VAR_17] = 0;

      FUNC_1(VAR_5, 1);
    }

    if (VAR_19 >= 9 && !FUNC_11 (VAR_18, "add_event", 9) && VAR_19 < 1000) {
      const char *VAR_22 = VAR_18 + 9;
      int VAR_23 = VAR_19 - 9;
      if (VAR_22[0] != '(' || VAR_22[VAR_23 - 1] != ')') {
        FUNC_1(VAR_5, -2);
      }
      VAR_22++, VAR_23 -= 2;
      int VAR_24;
      char *VAR_25 = VAR_6;

      if (VAR_9 > 2) {
        FUNC_5 (VAR_8, "%d : %s\n", VAR_23, VAR_22);
      }
      for (VAR_24 = 0; VAR_24 < VAR_23 && VAR_22[VAR_24] != ','; VAR_24++) {
        *VAR_25++ = VAR_22[VAR_24];
      }
      *VAR_25 = 0;

      if (VAR_9 > 2 && VAR_24 != VAR_23) {
        FUNC_5 (VAR_8, "key = %s | ts = %s, s = %s\n", VAR_18, VAR_6, VAR_22 + VAR_24 + 1);
      }

      int VAR_26[VAR_0 - 2];
      int VAR_27;
      for (VAR_27 = 2; VAR_27 < VAR_0; VAR_27 += 1 + VAR_7[VAR_27]) {
        int VAR_28 = -1;
        long long VAR_29;
        if (FUNC_8 (VAR_22 + VAR_24 + 1, &VAR_29, &VAR_28) < 1 || (VAR_24 + 1 + VAR_28 != VAR_23 && VAR_22[VAR_28 + VAR_24 + 1] != ',')) {
          FUNC_1(VAR_5, -2);
        }

        VAR_24 += VAR_28 + 1;
        if (VAR_7[VAR_27]) {
          *(long long *)&VAR_26[VAR_27 - 2] = VAR_29;
        } else {
          VAR_26[VAR_27 - 2] = (int)VAR_29;
        }
      }

      FUNC_9 (&VAR_11->In, VAR_4, VAR_17);
      VAR_4[VAR_17] = 0;

      int VAR_30 = FUNC_3 (VAR_6, VAR_26, VAR_4);

      FUNC_1(VAR_5, VAR_30);
    }
  }

  FUNC_1(VAR_5, -2);
}
