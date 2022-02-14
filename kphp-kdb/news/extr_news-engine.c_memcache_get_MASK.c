
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct connection {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int,int,int,int,int) ;
 int FUNC_2 (struct connection*,char const*,int,int) ;
 int FUNC_3 (struct connection*,char const*,int,int) ;
 int FUNC_4 (struct connection*,char const*,int,int) ;
 int FUNC_5 (struct connection*,char const*,int,int) ;
 int FUNC_6 (struct connection*,char const*,int,int) ;
 int FUNC_7 (struct connection*,char const*,int,int) ;
 int FUNC_8 (struct connection*,char const*,int,int) ;
 int FUNC_9 (int ,char*,int,int) ;
 int FUNC_10 (struct connection*) ;
 int FUNC_11 (char const*,int) ;
 int FUNC_12 (int) ;
 int FUNC_13 (int,int,double*) ;
 int FUNC_14 (struct connection*) ;
 int FUNC_15 (struct connection*) ;
 int FUNC_16 (struct connection*,char const*,char*,int) ;
 int FUNC_17 (char*,char*,double) ;
 int FUNC_18 (char const*,char*,int*,...) ;
 char* VAR_4 ;
 int VAR_5 ;
 int FUNC_19 (char const*,char*,int) ;
 int VAR_6 ;

int FUNC_20 (struct connection *VAR_7, const char *VAR_8, int VAR_9) {
  int VAR_10 = FUNC_11 (VAR_8, VAR_9);
  VAR_8 += VAR_10;
  VAR_9 -= VAR_10;
  int VAR_11, VAR_12 = 0;

  if (VAR_9 >= 11 && VAR_3 && (!FUNC_19 (VAR_8, "raw_updates", 11) || !FUNC_19 (VAR_8, "%raw_updates", 12))) {
    VAR_12 = FUNC_6 (VAR_7, VAR_8, VAR_9, VAR_10);
    FUNC_10 (VAR_7);
    return VAR_12;
  }

  if (VAR_9 >= 16 && VAR_0 && (!FUNC_19 (VAR_8, "raw_comm_updates", 16) || !FUNC_19 (VAR_8, "%raw_comm_updates", 17))) {
    VAR_12 = FUNC_3 (VAR_7, VAR_8, VAR_9, VAR_10);
    FUNC_10 (VAR_7);
    return VAR_12;
  }

  if (VAR_9 >= 21 && VAR_2 && (!FUNC_19 (VAR_8, "raw_recommend_updates", 21) || !FUNC_19 (VAR_8, "%raw_recommend_updates", 22))) {
    VAR_12 = FUNC_5 (VAR_7, VAR_8, VAR_9, VAR_10);
    FUNC_10 (VAR_7);
    return VAR_12;
  }
  FUNC_10 (VAR_7);

  if (VAR_9 >= 21 && VAR_0 && (!FUNC_19 (VAR_8, "raw_user_comm_updates", 21) || !FUNC_19 (VAR_8, "%raw_user_comm_updates", 22))) {
    VAR_12 = FUNC_8 (VAR_7, VAR_8, VAR_9, VAR_10);
    if (VAR_12 < 0) {
      VAR_12 = FUNC_15 (VAR_7);
      return 0;
    }
    return VAR_12;
  }

  if (VAR_9 >= 23 && VAR_0 && (!FUNC_19 (VAR_8, "raw_user_comm_bookmarks", 23) || !FUNC_19 (VAR_8, "%raw_user_comm_bookmarks", 24))) {
    VAR_12 = FUNC_7 (VAR_7, VAR_8, VAR_9, VAR_10);
    if (VAR_12 < 0) {
      VAR_12 = FUNC_15 (VAR_7);
      return 0;
    }
    return VAR_12;
  }

  if (VAR_9 >= 25 && VAR_1 && (!FUNC_19 (VAR_8, "raw_notification_updates", 24) || !FUNC_19 (VAR_8, "%raw_notification_updates", 25))) {
    VAR_12 = FUNC_4 (VAR_7, VAR_8, VAR_9, VAR_10);
    return VAR_12;
  }

  if (VAR_9 >= 21 && VAR_1 && !FUNC_19 (VAR_8, "notification_updates", 20)) {
    VAR_12 = FUNC_2 (VAR_7, VAR_8, VAR_9, VAR_10);
    return VAR_12;
  }


  if (VAR_3 && FUNC_18 (VAR_8, "mask%d", &VAR_11) == 1) {
    VAR_12 = FUNC_12 (VAR_11);
    if (VAR_6 > 1) {
      FUNC_9 (VAR_5, "get_privacy(%d) = %d\n", VAR_11, VAR_12);
    }
    if (VAR_12 >= 0) {
      return FUNC_16 (VAR_7, VAR_8 - VAR_10, VAR_4, FUNC_17 (VAR_4, "%d", VAR_12));
    }
  }

  if (VAR_0 && !FUNC_19 (VAR_8, "add_bookmark", 12)) {
    int VAR_13, VAR_14, VAR_15;
    if (FUNC_18 (VAR_8, "add_bookmark_%d_%d_%d:%d", &VAR_13, &VAR_14, &VAR_15, &VAR_11) == 4) {
      int VAR_16 = 0;
      if (FUNC_0 (VAR_14) || FUNC_0 (VAR_15)) {
        VAR_16 = FUNC_1 (VAR_11, VAR_13, VAR_14, VAR_15, 1);
      }
      return FUNC_16 (VAR_7, VAR_8 - VAR_10, VAR_16 ? "1" : "0", 1);
    }
  }

  if (VAR_0 && !FUNC_19 (VAR_8, "del_bookmark", 12)) {
    int VAR_17, VAR_18, VAR_19;
    if (FUNC_18 (VAR_8, "del_bookmark_%d_%d_%d:%d", &VAR_17, &VAR_18, &VAR_19, &VAR_11) == 4) {
      int VAR_20 = 0;
      if (FUNC_0 (VAR_18) || FUNC_0 (VAR_19)) {
        VAR_20 = FUNC_1 (VAR_11, VAR_17, VAR_18, VAR_19, 0);
      }
      return FUNC_16 (VAR_7, VAR_8 - VAR_10, VAR_20 ? "1" : "0", 1);
    }
  }

  if (VAR_2 && !FUNC_19 (VAR_8, "recommend_rate", 14)) {
    int VAR_21, VAR_22;
    if (FUNC_18 (VAR_8 + 14, "%d,%d", &VAR_21, &VAR_22) == 2) {
      double VAR_23;
      int VAR_24 = FUNC_13 (VAR_21, VAR_22, &VAR_23);
      if (!VAR_24) {
        return FUNC_16 (VAR_7, VAR_8 - VAR_10, VAR_4, FUNC_17 (VAR_4, "%.10lf", VAR_23));
      }
    }
  }

  if (VAR_9 >= 5 && !FUNC_19 (VAR_8, "stats", 5)) {
    int VAR_25 = FUNC_14 (VAR_7);
    return FUNC_16 (VAR_7, VAR_8 - VAR_10, VAR_4, VAR_25);
  }
  return 0;
}
