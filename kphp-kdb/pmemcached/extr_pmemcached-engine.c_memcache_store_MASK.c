
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct connection {int In; int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 long long FUNC_1 (scalar_t__*) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int ,char const*,int,long long) ;
 int FUNC_3 (char const*,int,int) ;
 int FUNC_4 (int,char const*,int,int,int,scalar_t__*,int) ;
 int FUNC_5 (int ,char*,char const*,int,int,int,int) ;
 scalar_t__ FUNC_6 () ;
 int VAR_6 ;
 scalar_t__ FUNC_7 (struct connection*) ;
 scalar_t__ VAR_7 ;
 int FUNC_8 (int *,scalar_t__*,int) ;
 int VAR_8 ;
 int FUNC_9 (char const*,char*,int) ;
 scalar_t__* VAR_9 ;
 int VAR_10 ;

int FUNC_10 (struct connection *VAR_11, int VAR_12, const char *VAR_13, int VAR_14, int VAR_15, int VAR_16, int VAR_17) {
  if (VAR_4 == 1) {
    return -2;
  }
  if (VAR_7) {
    return -2;
  }
  VAR_11->flags &= ~VAR_0;
  VAR_5++;

  if (VAR_16 == 0) {
    VAR_16 = VAR_1;
  } else if (VAR_16 <= VAR_3) {
    VAR_16 += FUNC_6();
  }

  if (VAR_10 >= 3) {
    FUNC_5 (VAR_8, "memcache_store: key='%s', key_len=%d, value_len=%d, flags = %d, exp_time = %d\n", VAR_13, VAR_14, VAR_17, VAR_15, VAR_16);
  }

  int VAR_18 = 0;
  if (VAR_14 >= 6 && !FUNC_9 (VAR_13, "##incr##", 8)) {
    VAR_18 = 1;
    VAR_13 += 8;
    VAR_14 -= 8;
  }

  if (VAR_17 < VAR_2) {
    int VAR_19 = FUNC_3 (VAR_13, VAR_14, VAR_12 != VAR_6 || VAR_18);
    if (VAR_19 == -2) {
      if (FUNC_7 (VAR_11)) {
        return 0;
      } else {
        FUNC_0 (FUNC_8 (&VAR_11->In, VAR_9, VAR_17) == VAR_17);
        return 0;
      }
    } else {
      FUNC_0 (FUNC_8 (&VAR_11->In, VAR_9, VAR_17) == VAR_17);
      VAR_9[VAR_17] = 0;
      int VAR_20;
      if (VAR_18) {
        if (VAR_19 == 0) {
          VAR_20 = FUNC_4 (VAR_12, VAR_13, VAR_14, VAR_15, VAR_16, VAR_9, VAR_17);
        } else {
          long long VAR_21 = FUNC_1 (VAR_9);
          FUNC_0 (FUNC_2 (0, VAR_13, VAR_14, VAR_21) != -2);
          VAR_20 = 1;
        }
      } else {
        VAR_20 = FUNC_4 (VAR_12, VAR_13, VAR_14, VAR_15, VAR_16, VAR_9, VAR_17);
      }
      FUNC_0 (VAR_20 != -2);
      return VAR_20;
    }
  }

  return -2;
}
