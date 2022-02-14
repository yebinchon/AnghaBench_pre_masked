
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct connection {int In; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (char*,int *) ;
 int FUNC_2 (char*,int *) ;
 int FUNC_3 (char*,long long) ;
 int FUNC_4 (char*,char*,int) ;
 int VAR_1 ;
 int FUNC_5 (char const*,char*,int) ;
 int FUNC_6 (int *,int *,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_7 (char const*,char*,...) ;
 int * VAR_7 ;

int FUNC_8 (struct connection *VAR_8, int VAR_9, const char *VAR_10, int VAR_11, int VAR_12, int VAR_13, int VAR_14) {
  int VAR_15;
  char VAR_16[256], VAR_17[256];

  if (VAR_9 != 1 || VAR_11 < 1 || VAR_0) {
    return -2;
  }
  VAR_5++;

  switch (*VAR_10) {
    case 'd':
      if (VAR_11 >= 17 && VAR_14 < 256 && !FUNC_5 (VAR_10, "delete_local_copy", 17) && FUNC_7 (VAR_10 + 17, "%d:%255s", &VAR_15, VAR_16) == 2 && VAR_15 == VAR_1) {
        FUNC_0 (FUNC_6 (&VAR_8->In, VAR_7, VAR_14) == VAR_14);
        VAR_7[VAR_14] = 0;
        VAR_2++;
        return (FUNC_1 (VAR_16, VAR_7) < 0) ? 0 : 1;
      }
      break;
    case 'f':
      if (VAR_11 >= 9 && VAR_14 <= 64 && !FUNC_5 (VAR_10, "file_size", 9) && FUNC_7 (VAR_10 + 9, "%d:%255s", &VAR_15, VAR_16) == 2 && VAR_15 == VAR_1) {
        long long VAR_18;
        FUNC_0 (FUNC_6 (&VAR_8->In, VAR_7, VAR_14) == VAR_14);
        VAR_7[VAR_14] = 0;
        if (FUNC_7 (VAR_7, "%lld", &VAR_18) == 1) {
          VAR_3++;
          if (!FUNC_3 (VAR_16, VAR_18)) {
            return 1;
          }
        }
        return 0;
      }
      break;
    case 'n':
      if (VAR_11 >= 14 && VAR_14 < 256 && !FUNC_5 (VAR_10, "new_local_copy", 14) && FUNC_7 (VAR_10 + 14, "%d:%255s", &VAR_15, VAR_16) == 2 && VAR_15 == VAR_1) {
        FUNC_0 (FUNC_6 (&VAR_8->In, VAR_7, VAR_14) == VAR_14);
        VAR_7[VAR_14] = 0;
        VAR_4++;
        return (FUNC_2 (VAR_16, VAR_7) < 0) ? 0 : 1;
      }
      break;
    case 'y':
      if (VAR_11 >= 21 && VAR_14 < 256 && !FUNC_5 (VAR_10, "yellow_time_remaining", 21) && FUNC_7 (VAR_10 + 21, "%d:%255[^~]~%255s", &VAR_15, VAR_16, VAR_17) == 3 && VAR_15 == VAR_1) {
        FUNC_0 (FUNC_6 (&VAR_8->In, VAR_7, VAR_14) == VAR_14);
        VAR_7[VAR_14] = 0;
        int VAR_19;
        if (FUNC_7 (VAR_7, "%d", &VAR_19) == 1) {
          VAR_6++;
          if (!FUNC_4 (VAR_16, VAR_17, VAR_19)) {
            return 1;
          }
        }
        return 0;
      }
      break;
  }
  return -2;
}
