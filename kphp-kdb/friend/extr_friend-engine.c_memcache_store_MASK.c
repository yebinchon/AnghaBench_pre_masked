
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct connection {int In; } ;
typedef int privacy_key_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (scalar_t__*) ;
 int VAR_2 ;
 int FUNC_2 (int,int,int ,int ,int) ;
 scalar_t__ FUNC_3 (int,int,int ,int) ;
 int FUNC_4 (int,int,int ,int) ;
 int FUNC_5 (int,int ,scalar_t__*,int,int) ;
 int FUNC_6 (struct connection*,char const*,int,int) ;
 int FUNC_7 (int ,char*,int,...) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_8 (int ,int ,int *,int) ;
 scalar_t__ FUNC_9 (char const*,int *,int) ;
 int FUNC_10 (int *,scalar_t__*,int) ;
 scalar_t__ VAR_5 ;
 int FUNC_11 (char const*,char*,int*,int*) ;
 scalar_t__* VAR_6 ;
 int VAR_7 ;
 int FUNC_12 (char const*,char*,int) ;
 scalar_t__ VAR_8 ;

int FUNC_13 (struct connection *VAR_9, int VAR_10, const char *VAR_11, int VAR_12, int VAR_13, int VAR_14, int VAR_15) {
  int VAR_16, VAR_17 = 0, VAR_18 = 0, VAR_19;
  privacy_key_t VAR_20 = 0;

  if (VAR_8 > 0) {
    FUNC_7 (VAR_7, "mc_store: op=%d, key=\"%s\", flags=%d, delay=%d, bytes=%d\n", VAR_10, VAR_11, VAR_13, VAR_14, VAR_15);
  }

  if (VAR_2 == 2) {
    return -2;
  }

  if (VAR_5) {
    if (VAR_10 == VAR_4 && VAR_12 >= 8 && !FUNC_12 (VAR_11, "userlist", 8)) {
      return FUNC_6 (VAR_9, VAR_11, VAR_12, VAR_15);
    }
    return 0;
  }

  if (VAR_10 == VAR_4 && FUNC_11 (VAR_11, "friends%d_%d", &VAR_16, &VAR_17) == 2 && VAR_16 > 0 && VAR_17 > 0 && VAR_17 < 32) {
    int VAR_21 = FUNC_8 (VAR_1, VAR_0, &VAR_9->In, VAR_15);
    int VAR_22 = 0;
    if (VAR_21 >= 0) {
      VAR_22 = FUNC_4 (VAR_16, VAR_17, VAR_1, VAR_21);
    }
    if (VAR_8 > 0) {
      FUNC_7 (VAR_7, "set friend cat list: size = %d, res = %d\n", VAR_21, VAR_22);
    }
    return VAR_22;
  }

  if (VAR_15 > 1024) {
    return -2;
  }

  FUNC_0 (FUNC_10 (&VAR_9->In, VAR_6, VAR_15) == VAR_15);
  VAR_6[VAR_15] = 0;

  if (FUNC_11 (VAR_11, "friendreq%d_%d", &VAR_16, &VAR_18) == 2 && VAR_16 > 0 && VAR_18 > 0) {
    return FUNC_3 (VAR_16, VAR_18, FUNC_1(VAR_6), (VAR_10 == VAR_3) * 2 + (VAR_10 == VAR_4)) >= 0;
  }

  if (VAR_10 != VAR_3 && FUNC_11 (VAR_11, "friend%d_%d", &VAR_16, &VAR_18) == 2 && VAR_16 > 0 && VAR_18 > 0) {
    return FUNC_2 (VAR_16, VAR_18, FUNC_1(VAR_6), 0, VAR_10 == VAR_4);
  }

  if (VAR_10 != VAR_3 && FUNC_11 (VAR_11, "privacy%d_%n", &VAR_16, &VAR_19) >= 1 && VAR_16 > 0 && FUNC_9 (VAR_11+VAR_19, &VAR_20, 1) > 0) {
    return FUNC_5 (VAR_16, VAR_20, VAR_6, VAR_15, VAR_10 == VAR_4);
  }

  return 0;
}
