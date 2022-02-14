
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct connection {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct connection*,long long,int,int,int,int) ;
 int FUNC_1 (int ,char*,int,char const*,int,int,int,int) ;
 int FUNC_2 (char const) ;
 int VAR_1 ;
 int FUNC_3 (char const*,char*,int*,...) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_4 (int,char*,long long,...) ;

int FUNC_5 (struct connection *VAR_5, int VAR_6, const char *VAR_7, int VAR_8, int VAR_9, int VAR_10, int VAR_11) {
  int VAR_12, VAR_13, VAR_14, VAR_15;
  long long VAR_16 = 0;
  int VAR_17;
  int VAR_18 = 0;
  int VAR_19 = 0;

  if (VAR_4 > 0) {
    FUNC_1 (VAR_2, "mc_store: op=%d, key=\"%s\", flags=%d, expire=%d, bytes=%d, noreply=%d\n", VAR_6, VAR_7, VAR_9, VAR_10, VAR_11, VAR_19);
  }

  VAR_14 = 0;
  if (VAR_11 >= 65536) {
    return -2;
  }
  if (VAR_6 == 1 && VAR_11 >= 0 && VAR_11 < 65536 &&
     ((FUNC_3 (VAR_7, "item%d#%d,%d ", &VAR_15, &VAR_12, &VAR_13) == 3 && VAR_15 > 0)
      || (FUNC_3 (VAR_7, "item%d_%d#%d,%d ", &VAR_14, &VAR_15, &VAR_12, &VAR_13) == 4 && VAR_14 && VAR_15 > 0)
    )) {

    VAR_3++;

    VAR_16 = VAR_14 ? ((long long) VAR_15 << 32) + (unsigned) VAR_14 : VAR_15;

    FUNC_4 (3, "store: item_id=%016llx\n", VAR_16);

    VAR_17 = 0;
    VAR_18 = 1;
  }

  if (!VAR_18 && VAR_6 == 1 && VAR_11 >= 0 && VAR_11 < 256) {
    int VAR_20 = 0;
    VAR_14 = 0;
    if (FUNC_3 (VAR_7+1, "ate%d_%d ", &VAR_14, &VAR_15) == 2 && VAR_14 && VAR_15 > 0) {
      VAR_20 = 1;
    } else if (FUNC_3 (VAR_7+1, "ate%d ", &VAR_15) == 1 && VAR_15 > 0) {
      VAR_14 = 0;
      VAR_20 = 1;
    }

    if (VAR_20) {
      int VAR_21 = FUNC_2 (*VAR_7);

      FUNC_4 (4, "p = %d, *key=%c\n", VAR_21, *VAR_7);

      VAR_20 = (VAR_21 >= 0 && VAR_21 < VAR_0) ? (VAR_21+1) : 0;
    }

    if (!VAR_20 && FUNC_3 (VAR_7, "rates%d_%d ", &VAR_14, &VAR_15) == 2 && VAR_14 && VAR_15 > 0) {
      VAR_20 = VAR_0+1;
    } else if (FUNC_3 (VAR_7, "rates%d ", &VAR_15) == 1 && VAR_15 > 0) {
      VAR_14 = 0;
      VAR_20 = VAR_0+1;
    }

    if (!VAR_20 && FUNC_3 (VAR_7, "hash%d_%d ", &VAR_14, &VAR_15) == 2 && VAR_14 && VAR_15 > 0) {
      VAR_20 = VAR_0+2;
    } else if (FUNC_3 (VAR_7, "hash%d ", &VAR_15) == 1 && VAR_15 > 0) {
      VAR_14 = 0;
      VAR_20 = VAR_0+2;
    }

    if (VAR_20) {
      VAR_1++;
      VAR_12 = 0;
      VAR_13 = 0;
      VAR_17 = VAR_20;
      VAR_16 = VAR_14 ? ((long long) VAR_15 << 32) + (unsigned) VAR_14 : VAR_15;
      VAR_18 = 1;
    }
  }

  FUNC_4 (3, "store: item_id=%016llx, cur_op = %d\n", VAR_16, VAR_17);

  int VAR_22 = 0;
  if (VAR_18) {
    VAR_22 = FUNC_0 (VAR_5, VAR_16, VAR_12, VAR_13, VAR_17, VAR_11);
  }

  if (VAR_22 > 0) {
    return 1;
  } else {
    return 0;
  }
}
